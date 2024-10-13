// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonBinkMediaPlayer/Public/CommonBinkMediaPlayer.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonBinkMediaPlayer() {}

// Begin Cross Module References
BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();
BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaTexture_NoRegister();
COMMONBINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UCommonBinkMediaPlayer();
COMMONBINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UCommonBinkMediaPlayer_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_CommonBinkMediaPlayer();
// End Cross Module References

// Begin Class UCommonBinkMediaPlayer Function Close
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_Close_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "Close", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_Close_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Close();
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function Close

// Begin Class UCommonBinkMediaPlayer Function GetMediaDuration
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics
{
	struct CommonBinkMediaPlayer_eventGetMediaDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonBinkMediaPlayer_eventGetMediaDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "GetMediaDuration", nullptr, nullptr, Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics::CommonBinkMediaPlayer_eventGetMediaDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics::CommonBinkMediaPlayer_eventGetMediaDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execGetMediaDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMediaDuration();
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function GetMediaDuration

// Begin Class UCommonBinkMediaPlayer Function GetPlaybackRate
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics
{
	struct CommonBinkMediaPlayer_eventGetPlaybackRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonBinkMediaPlayer_eventGetPlaybackRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "GetPlaybackRate", nullptr, nullptr, Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics::CommonBinkMediaPlayer_eventGetPlaybackRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics::CommonBinkMediaPlayer_eventGetPlaybackRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execGetPlaybackRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlaybackRate();
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function GetPlaybackRate

// Begin Class UCommonBinkMediaPlayer Function GetPlaybackTime
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics
{
	struct CommonBinkMediaPlayer_eventGetPlaybackTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonBinkMediaPlayer_eventGetPlaybackTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "GetPlaybackTime", nullptr, nullptr, Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics::CommonBinkMediaPlayer_eventGetPlaybackTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics::CommonBinkMediaPlayer_eventGetPlaybackTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execGetPlaybackTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlaybackTime();
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function GetPlaybackTime

// Begin Class UCommonBinkMediaPlayer Function IsLooping
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics
{
	struct CommonBinkMediaPlayer_eventIsLooping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CommonBinkMediaPlayer_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CommonBinkMediaPlayer_eventIsLooping_Parms), &Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "IsLooping", nullptr, nullptr, Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::CommonBinkMediaPlayer_eventIsLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::CommonBinkMediaPlayer_eventIsLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execIsLooping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLooping();
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function IsLooping

// Begin Class UCommonBinkMediaPlayer Function IsPaused
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics
{
	struct CommonBinkMediaPlayer_eventIsPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CommonBinkMediaPlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CommonBinkMediaPlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "IsPaused", nullptr, nullptr, Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::CommonBinkMediaPlayer_eventIsPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::CommonBinkMediaPlayer_eventIsPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execIsPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPaused();
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function IsPaused

// Begin Class UCommonBinkMediaPlayer Function IsPlaying
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics
{
	struct CommonBinkMediaPlayer_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CommonBinkMediaPlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CommonBinkMediaPlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::CommonBinkMediaPlayer_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::CommonBinkMediaPlayer_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function IsPlaying

// Begin Class UCommonBinkMediaPlayer Function OpenUrl
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics
{
	struct CommonBinkMediaPlayer_eventOpenUrl_Parms
	{
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonBinkMediaPlayer_eventOpenUrl_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "OpenUrl", nullptr, nullptr, Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics::CommonBinkMediaPlayer_eventOpenUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics::CommonBinkMediaPlayer_eventOpenUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execOpenUrl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenUrl(Z_Param_Url);
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function OpenUrl

// Begin Class UCommonBinkMediaPlayer Function Pause
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_Pause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function Pause

// Begin Class UCommonBinkMediaPlayer Function Play
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function Play

// Begin Class UCommonBinkMediaPlayer Function PlayFromStart
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_PlayFromStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_PlayFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "PlayFromStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_PlayFromStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_PlayFromStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_PlayFromStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_PlayFromStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execPlayFromStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayFromStart();
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function PlayFromStart

// Begin Class UCommonBinkMediaPlayer Function SetLooping
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics
{
	struct CommonBinkMediaPlayer_eventSetLooping_Parms
	{
		bool bShouldLoopPlayback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldLoopPlayback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLoopPlayback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::NewProp_bShouldLoopPlayback_SetBit(void* Obj)
{
	((CommonBinkMediaPlayer_eventSetLooping_Parms*)Obj)->bShouldLoopPlayback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::NewProp_bShouldLoopPlayback = { "bShouldLoopPlayback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CommonBinkMediaPlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::NewProp_bShouldLoopPlayback_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::NewProp_bShouldLoopPlayback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "SetLooping", nullptr, nullptr, Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::CommonBinkMediaPlayer_eventSetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::CommonBinkMediaPlayer_eventSetLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execSetLooping)
{
	P_GET_UBOOL(Z_Param_bShouldLoopPlayback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLooping(Z_Param_bShouldLoopPlayback);
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function SetLooping

// Begin Class UCommonBinkMediaPlayer Function SetMedia
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics
{
	struct CommonBinkMediaPlayer_eventSetMedia_Parms
	{
		UBinkMediaPlayer* NewMediaPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMediaPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics::NewProp_NewMediaPlayer = { "NewMediaPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonBinkMediaPlayer_eventSetMedia_Parms, NewMediaPlayer), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics::NewProp_NewMediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "SetMedia", nullptr, nullptr, Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics::CommonBinkMediaPlayer_eventSetMedia_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics::CommonBinkMediaPlayer_eventSetMedia_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execSetMedia)
{
	P_GET_OBJECT(UBinkMediaPlayer,Z_Param_NewMediaPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMedia(Z_Param_NewMediaPlayer);
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function SetMedia

// Begin Class UCommonBinkMediaPlayer Function SetPlaybackRate
struct Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics
{
	struct CommonBinkMediaPlayer_eventSetPlaybackRate_Parms
	{
		float PlaybackRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics::NewProp_PlaybackRate = { "PlaybackRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonBinkMediaPlayer_eventSetPlaybackRate_Parms, PlaybackRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics::NewProp_PlaybackRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBinkMediaPlayer, nullptr, "SetPlaybackRate", nullptr, nullptr, Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics::CommonBinkMediaPlayer_eventSetPlaybackRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics::CommonBinkMediaPlayer_eventSetPlaybackRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonBinkMediaPlayer::execSetPlaybackRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackRate(Z_Param_PlaybackRate);
	P_NATIVE_END;
}
// End Class UCommonBinkMediaPlayer Function SetPlaybackRate

// Begin Class UCommonBinkMediaPlayer
void UCommonBinkMediaPlayer::StaticRegisterNativesUCommonBinkMediaPlayer()
{
	UClass* Class = UCommonBinkMediaPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Close", &UCommonBinkMediaPlayer::execClose },
		{ "GetMediaDuration", &UCommonBinkMediaPlayer::execGetMediaDuration },
		{ "GetPlaybackRate", &UCommonBinkMediaPlayer::execGetPlaybackRate },
		{ "GetPlaybackTime", &UCommonBinkMediaPlayer::execGetPlaybackTime },
		{ "IsLooping", &UCommonBinkMediaPlayer::execIsLooping },
		{ "IsPaused", &UCommonBinkMediaPlayer::execIsPaused },
		{ "IsPlaying", &UCommonBinkMediaPlayer::execIsPlaying },
		{ "OpenUrl", &UCommonBinkMediaPlayer::execOpenUrl },
		{ "Pause", &UCommonBinkMediaPlayer::execPause },
		{ "Play", &UCommonBinkMediaPlayer::execPlay },
		{ "PlayFromStart", &UCommonBinkMediaPlayer::execPlayFromStart },
		{ "SetLooping", &UCommonBinkMediaPlayer::execSetLooping },
		{ "SetMedia", &UCommonBinkMediaPlayer::execSetMedia },
		{ "SetPlaybackRate", &UCommonBinkMediaPlayer::execSetPlaybackRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonBinkMediaPlayer);
UClass* Z_Construct_UClass_UCommonBinkMediaPlayer_NoRegister()
{
	return UCommonBinkMediaPlayer::StaticClass();
}
struct Z_Construct_UClass_UCommonBinkMediaPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "CommonBinkMediaPlayer.h" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[] = {
		{ "Category", "Bink Media Player" },
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaBrush_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonBinkMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Media;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MediaBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_Close, "Close" }, // 2903405366
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_GetMediaDuration, "GetMediaDuration" }, // 3049068072
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackRate, "GetPlaybackRate" }, // 3598253121
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_GetPlaybackTime, "GetPlaybackTime" }, // 2501758121
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_IsLooping, "IsLooping" }, // 3149367965
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPaused, "IsPaused" }, // 4260334445
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_IsPlaying, "IsPlaying" }, // 497830203
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_OpenUrl, "OpenUrl" }, // 1750511605
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_Pause, "Pause" }, // 2697004450
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_Play, "Play" }, // 3009068204
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_PlayFromStart, "PlayFromStart" }, // 2930678699
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_SetLooping, "SetLooping" }, // 3673959107
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_SetMedia, "SetMedia" }, // 1552703723
		{ &Z_Construct_UFunction_UCommonBinkMediaPlayer_SetPlaybackRate, "SetPlaybackRate" }, // 3892475728
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonBinkMediaPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonBinkMediaPlayer, Media), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Media_MetaData), NewProp_Media_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonBinkMediaPlayer, MediaPlayer), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPlayer_MetaData), NewProp_MediaPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonBinkMediaPlayer, MediaTexture), Z_Construct_UClass_UBinkMediaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTexture_MetaData), NewProp_MediaTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::NewProp_MediaBrush = { "MediaBrush", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonBinkMediaPlayer, MediaBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaBrush_MetaData), NewProp_MediaBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::NewProp_Media,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::NewProp_MediaPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::NewProp_MediaTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::NewProp_MediaBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonBinkMediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::ClassParams = {
	&UCommonBinkMediaPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCommonBinkMediaPlayer()
{
	if (!Z_Registration_Info_UClass_UCommonBinkMediaPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonBinkMediaPlayer.OuterSingleton, Z_Construct_UClass_UCommonBinkMediaPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommonBinkMediaPlayer.OuterSingleton;
}
template<> COMMONBINKMEDIAPLAYER_API UClass* StaticClass<UCommonBinkMediaPlayer>()
{
	return UCommonBinkMediaPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonBinkMediaPlayer);
UCommonBinkMediaPlayer::~UCommonBinkMediaPlayer() {}
// End Class UCommonBinkMediaPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCommonBinkMediaPlayer, UCommonBinkMediaPlayer::StaticClass, TEXT("UCommonBinkMediaPlayer"), &Z_Registration_Info_UClass_UCommonBinkMediaPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonBinkMediaPlayer), 2119398134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h_4009354737(TEXT("/Script/CommonBinkMediaPlayer"),
	Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_CommonBinkMediaPlayer_Source_CommonBinkMediaPlayer_Public_CommonBinkMediaPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
