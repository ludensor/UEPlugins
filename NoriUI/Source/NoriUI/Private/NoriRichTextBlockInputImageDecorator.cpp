// Copyright Nori. All Rights Reserved.

#include "NoriRichTextBlockInputImageDecorator.h"

#include "Components/RichTextBlock.h"
#include "Engine/LocalPlayer.h"
#include "Fonts/FontMeasure.h"
#include "Misc/DefaultValueHelper.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Widgets/SCompoundWidget.h"
#include "CommonInputSubsystem.h"
#include "EnhancedInputSubsystems.h"

class SNoriRichInlineInputImage : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SNoriRichInlineInputImage)
		{}
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, const FSlateBrush* Brush, const FTextBlockStyle& TextStyle, TOptional<int32> Width, TOptional<int32> Height, EStretch::Type Stretch)
	{
		const TSharedRef<FSlateFontMeasure> FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
		float IconHeight = FMath::Min((float)FontMeasure->GetMaxCharacterHeight(TextStyle.Font, 1.0f), Brush->ImageSize.Y);

		if (Height.IsSet())
		{
			IconHeight = Height.GetValue();
		}

		float IconWidth = IconHeight;
		if (Width.IsSet())
		{
			IconWidth = Width.GetValue();
		}

		ChildSlot
		[
			SNew(SBox)
			.HeightOverride(IconHeight)
			.WidthOverride(IconWidth)
			[
				SNew(SScaleBox)
				.Stretch(Stretch)
				.StretchDirection(EStretchDirection::DownOnly)
				.VAlign(VAlign_Center)
				[
					SNew(SImage)
					.Image(Brush)
				]
			]
		];
	}
};

class FNoriRichInlineInputImage : public FRichTextDecorator
{
public:
	FNoriRichInlineInputImage(URichTextBlock* InOwner, UNoriRichTextBlockInputImageDecorator* InDecorator)
		: FRichTextDecorator(InOwner)
		, Decorator(InDecorator)
	{
	}

	virtual bool Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const override
	{
		if (RunParseResult.Name == TEXT("input") && RunParseResult.MetaData.Contains(TEXT("name")))
		{
			const FTextRange& NameRange = RunParseResult.MetaData[TEXT("name")];
			const FString TagName = Text.Mid(NameRange.BeginIndex, NameRange.EndIndex - NameRange.BeginIndex);

			const bool bWarnIfMissing = false;
			return Decorator->FindInputAction(*TagName, bWarnIfMissing) != nullptr;
		}

		return false;
	}

private:
	virtual TSharedPtr<SWidget> CreateDecoratorWidget(const FTextRunInfo& RunInfo, const FTextBlockStyle& TextStyle) const override
	{
		const bool bWarnIfMissing = true;
		const UInputAction* InputAction = Decorator->FindInputAction(*RunInfo.MetaData[TEXT("name")], bWarnIfMissing);

		if (ensure(InputAction))
		{
			const FString* IndexName = RunInfo.MetaData.Find(TEXT("index"));
			const int32 Index = IndexName ? FCString::Atoi(**IndexName) : 0;

			const FSlateBrush* Brush = Decorator->GetIconForEnhancedInputAction(*Owner, InputAction, Index);
			if (ensure(Brush))
			{
				TOptional<int32> Width;
				if (const FString* WidthString = RunInfo.MetaData.Find(TEXT("width")))
				{
					int32 WidthTemp;
					if (FDefaultValueHelper::ParseInt(*WidthString, WidthTemp))
					{
						Width = WidthTemp;
					}
					else if (FCString::Stricmp(GetData(*WidthString), TEXT("desired")) == 0)
					{
						Width = Brush->ImageSize.X;
					}

				}

				TOptional<int32> Height;
				if (const FString* HeightString = RunInfo.MetaData.Find(TEXT("height")))
				{
					int32 HeightTemp;
					if (FDefaultValueHelper::ParseInt(*HeightString, HeightTemp))
					{
						Height = HeightTemp;
					}
					else if (FCString::Stricmp(GetData(*HeightString), TEXT("desired")) == 0)
					{
						Height = Brush->ImageSize.Y;
					}
				}

				EStretch::Type Stretch = EStretch::ScaleToFit;
				if (const FString* SstretchString = RunInfo.MetaData.Find(TEXT("stretch")))
				{
					const UEnum* StretchEnum = StaticEnum<EStretch::Type>();
					int64 StretchValue = StretchEnum->GetValueByNameString(*SstretchString);
					if (StretchValue != INDEX_NONE)
					{
						Stretch = static_cast<EStretch::Type>(StretchValue);
					}
				}

				return SNew(SNoriRichInlineInputImage, Brush, TextStyle, Width, Height, Stretch);
			}
		}

		return TSharedPtr<SWidget>();
	}

private:
	UNoriRichTextBlockInputImageDecorator* Decorator;
};

void UNoriRichTextBlockInputImageDecorator::PostLoad()
{
	Super::PostLoad();

	ControllerDataClasses.Reset();
	InitializeControllerData();
}

void UNoriRichTextBlockInputImageDecorator::InitializeControllerData() const
{
	const TArray<TSoftClassPtr<UCommonInputBaseControllerData>> ControllerData = UCommonInputPlatformSettings::Get()->GetControllerData();
	if (ControllerData.Num() != ControllerDataClasses.Num())
	{
		for (TSoftClassPtr<UCommonInputBaseControllerData> ControllerDataPtr : ControllerData)
		{
			if (TSubclassOf<UCommonInputBaseControllerData> ControllerDataClass = ControllerDataPtr.LoadSynchronous())
			{
				ControllerDataClasses.Add(ControllerDataClass);
			}
		}
	}
}

TSharedPtr<ITextDecorator> UNoriRichTextBlockInputImageDecorator::CreateDecorator(URichTextBlock* InOwner)
{
	return MakeShareable(new FNoriRichInlineInputImage(InOwner, this));
}

const UInputAction* UNoriRichTextBlockInputImageDecorator::FindInputAction(FName TagName, bool bWarnIfMissing) const
{
	if (InputSet)
	{
		const FString ContextString = TEXT("NoriRichTextBlockInputImageDecoratorContext");
		const FNoriRichInputImageRow* InputImageRow = InputSet->FindRow<FNoriRichInputImageRow>(TagName, ContextString, bWarnIfMissing);
		if (InputImageRow)
		{
			return InputImageRow->InputAction;
		}
	}

	return nullptr;
}

const FSlateBrush* UNoriRichTextBlockInputImageDecorator::GetIconForEnhancedInputAction(URichTextBlock& Owner, const UInputAction* InputAction, int32 Index) const
{
	if (!Owner.IsDesignTime())
	{
		ULocalPlayer* LocalPlayer = Owner.GetOwningLocalPlayer();
		if (const UCommonInputSubsystem* CommonInputSubsystem = UCommonInputSubsystem::Get(LocalPlayer))
		{
			const ECommonInputType KeyInputType = CommonInputSubsystem->GetCurrentInputType();

			TArray<FKey> Keys;
			GetKeysForInputType(LocalPlayer, KeyInputType, InputAction, Keys);

			FSlateBrush SlateBrush;
			if (Keys.IsValidIndex(Index))
			{
				const FKey& Key = Keys[Index];
				const FName GamepadName = CommonInputSubsystem->GetCurrentGamepadName();
				return GetInputBrush(Key, KeyInputType, GamepadName);
			}
		}
	}
#if WITH_EDITORONLY_DATA
	else
	{
		if (DesignTimeKeys.IsValidIndex(Index))
		{
			const FKey& DesignTimeKey = DesignTimeKeys[Index];

			ECommonInputType Dummy;
			FName OutDefaultGamepadName;
			FCommonInputBase::GetCurrentPlatformDefaults(Dummy, OutDefaultGamepadName);

			ECommonInputType KeyInputType = ECommonInputType::MouseAndKeyboard;
			if (DesignTimeKey.IsGamepadKey())
			{
				KeyInputType = ECommonInputType::Gamepad;
			}
			else if (DesignTimeKey.IsTouch())
			{
				KeyInputType = ECommonInputType::Touch;
			}

			return GetInputBrush(DesignTimeKey, KeyInputType, OutDefaultGamepadName);
		}
	}
#endif // WITH_EDITORONLY_DATA

	return nullptr;
}

void UNoriRichTextBlockInputImageDecorator::GetKeysForInputType(const ULocalPlayer* LocalPlayer, ECommonInputType InputType, const UInputAction* InputAction, TArray<FKey>& OutKeys) const
{
	if (!LocalPlayer)
	{
		return;
	}

	TArray<FKey> Keys;
	if (UEnhancedInputLocalPlayerSubsystem* EnhancedInputLocalPlayerSubsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
	{
		Keys = EnhancedInputLocalPlayerSubsystem->QueryKeysMappedToAction(InputAction);
	}

	for (const FKey& Key : Keys)
	{
		if (!Key.IsValid())
		{
			continue;
		}

		if (Key.IsTouch() && InputType == ECommonInputType::Touch)
		{
			OutKeys.Add(Key);
		}
		else if (Key.IsGamepadKey() && InputType == ECommonInputType::Gamepad)
		{
			OutKeys.Add(Key);
		}
		else if (!Key.IsTouch() && !Key.IsGamepadKey() && InputType == ECommonInputType::MouseAndKeyboard)
		{
			OutKeys.Add(Key);
		}
	}
}

const FSlateBrush* UNoriRichTextBlockInputImageDecorator::GetInputBrush(const FKey& Key, ECommonInputType InputType, const FName& GamepadName) const
{
	InitializeControllerData();

	for (const TSubclassOf<UCommonInputBaseControllerData>& ControllerDataPtr : ControllerDataClasses)
	{
		const UCommonInputBaseControllerData* DefaultControllerData = ControllerDataPtr.GetDefaultObject();
		if (DefaultControllerData && DefaultControllerData->InputType == InputType)
		{
			if (DefaultControllerData->InputType != ECommonInputType::Gamepad || DefaultControllerData->GamepadName == GamepadName)
			{
				const FCommonInputKeyBrushConfiguration* DisplayConfig = DefaultControllerData->InputBrushDataMap.FindByPredicate([&Key](const FCommonInputKeyBrushConfiguration& KeyBrushPair) -> bool
					{
						return KeyBrushPair.Key == Key;
					});

				return DisplayConfig ? &DisplayConfig->GetInputBrush() : nullptr;
			}
		}
	}
	return nullptr;
}
