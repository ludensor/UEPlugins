// Copyright Nori. All Rights Reserved.

#pragma once

#include "Components/RichTextBlockDecorator.h"
#include "Engine/DataTable.h"
#include "Styling/SlateTypes.h"

#include "NoriRichTextBlockInputImageDecorator.generated.h"

class UCommonInputBaseControllerData;
class UInputAction;
class ULocalPlayer;
enum class ECommonInputType : uint8;

USTRUCT(Blueprintable, BlueprintType)
struct FNoriRichInputImageRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Appearance")
	TObjectPtr<UInputAction> InputAction;
};

/**
 * 
 */
UCLASS(Abstract)
class NORIUI_API UNoriRichTextBlockInputImageDecorator final : public URichTextBlockDecorator
{
	GENERATED_BODY()
	
public:
	const UInputAction* FindInputAction(FName TagName, bool bWarnIfMissing) const;
	const FSlateBrush* GetIconForEnhancedInputAction(URichTextBlock& Owner, const UInputAction* InputAction, int32 Index) const;

private:
	virtual void PostLoad() override final;
	virtual TSharedPtr<ITextDecorator> CreateDecorator(URichTextBlock* InOwner) override final;

	void InitializeControllerData() const;
	void GetKeysForInputType(const ULocalPlayer* LocalPlayer, ECommonInputType InputType, const UInputAction* InputAction, TArray<FKey>& OutKeys) const;
	const FSlateBrush* GetInputBrush(const FKey& Key, ECommonInputType InputType, const FName& GamepadName) const;

private:
	UPROPERTY(EditAnywhere, Category = "Appearance", meta = (RequiredAssetDataTags = "RowStructure=/Script/NoriUI.NoriRichInputImageRow"))
	TObjectPtr<UDataTable> InputSet;

	UPROPERTY(Transient)
	mutable TArray<TSubclassOf<UCommonInputBaseControllerData>> ControllerDataClasses;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = "Appearance")
	TArray<FKey> DesignTimeKeys;
#endif // WITH_EDITORONLY_DATA
};
