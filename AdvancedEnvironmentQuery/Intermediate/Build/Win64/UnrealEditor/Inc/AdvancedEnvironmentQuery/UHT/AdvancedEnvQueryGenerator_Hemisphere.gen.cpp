// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedEnvironmentQuery/Public/AdvancedEnvQueryGenerator_Hemisphere.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedEnvQueryGenerator_Hemisphere() {}

// Begin Cross Module References
ADVANCEDENVIRONMENTQUERY_API UClass* Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere();
ADVANCEDENVIRONMENTQUERY_API UClass* Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_AdvancedEnvironmentQuery();
// End Cross Module References

// Begin Class UAdvancedEnvQueryGenerator_Hemisphere
void UAdvancedEnvQueryGenerator_Hemisphere::StaticRegisterNativesUAdvancedEnvQueryGenerator_Hemisphere()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedEnvQueryGenerator_Hemisphere);
UClass* Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_NoRegister()
{
	return UAdvancedEnvQueryGenerator_Hemisphere::StaticClass();
}
struct Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "DisplayName", "Points: Hemisphere" },
		{ "IncludePath", "AdvancedEnvQueryGenerator_Hemisphere.h" },
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Hemisphere.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceBetween_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfRings_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. 1 \xef\xbf\xbd\xcc\xbb\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. 1 \xef\xbf\xbd\xcc\xbb\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcDirection_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "EditCondition", "bDefineArc" },
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeVerticalAngle_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdd\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterOffsetZ_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** CenterActor\xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CenterOffsetZ \xef\xbf\xbd\xef\xbf\xbd\xc5\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CenterActor\xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CenterOffsetZ \xef\xbf\xbd\xef\xbf\xbd\xc5\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterActor_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Hemisphere.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefineArc_MetaData[] = {
		{ "Category", "Generator" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Hemisphere.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceBetween;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumberOfRings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArcDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArcAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConeVerticalAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterOffsetZ;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CenterActor;
	static void NewProp_bDefineArc_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefineArc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedEnvQueryGenerator_Hemisphere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_Hemisphere, Radius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_SpaceBetween = { "SpaceBetween", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_Hemisphere, SpaceBetween), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceBetween_MetaData), NewProp_SpaceBetween_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_NumberOfRings = { "NumberOfRings", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_Hemisphere, NumberOfRings), Z_Construct_UScriptStruct_FAIDataProviderIntValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfRings_MetaData), NewProp_NumberOfRings_MetaData) }; // 1636286199
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcDirection = { "ArcDirection", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_Hemisphere, ArcDirection), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcDirection_MetaData), NewProp_ArcDirection_MetaData) }; // 2990699813
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcAngle = { "ArcAngle", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_Hemisphere, ArcAngle), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcAngle_MetaData), NewProp_ArcAngle_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_ConeVerticalAngle = { "ConeVerticalAngle", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_Hemisphere, ConeVerticalAngle), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeVerticalAngle_MetaData), NewProp_ConeVerticalAngle_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterOffsetZ = { "CenterOffsetZ", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_Hemisphere, CenterOffsetZ), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterOffsetZ_MetaData), NewProp_CenterOffsetZ_MetaData) }; // 1384630506
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterActor = { "CenterActor", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_Hemisphere, CenterActor), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterActor_MetaData), NewProp_CenterActor_MetaData) };
void Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_bDefineArc_SetBit(void* Obj)
{
	((UAdvancedEnvQueryGenerator_Hemisphere*)Obj)->bDefineArc = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_bDefineArc = { "bDefineArc", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdvancedEnvQueryGenerator_Hemisphere), &Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_bDefineArc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefineArc_MetaData), NewProp_bDefineArc_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_SpaceBetween,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_NumberOfRings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_ArcAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_ConeVerticalAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterOffsetZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_CenterActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::NewProp_bDefineArc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedEnvironmentQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::ClassParams = {
	&UAdvancedEnvQueryGenerator_Hemisphere::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere()
{
	if (!Z_Registration_Info_UClass_UAdvancedEnvQueryGenerator_Hemisphere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedEnvQueryGenerator_Hemisphere.OuterSingleton, Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAdvancedEnvQueryGenerator_Hemisphere.OuterSingleton;
}
template<> ADVANCEDENVIRONMENTQUERY_API UClass* StaticClass<UAdvancedEnvQueryGenerator_Hemisphere>()
{
	return UAdvancedEnvQueryGenerator_Hemisphere::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedEnvQueryGenerator_Hemisphere);
UAdvancedEnvQueryGenerator_Hemisphere::~UAdvancedEnvQueryGenerator_Hemisphere() {}
// End Class UAdvancedEnvQueryGenerator_Hemisphere

// Begin Registration
struct Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_AdvancedEnvironmentQuery_Source_AdvancedEnvironmentQuery_Public_AdvancedEnvQueryGenerator_Hemisphere_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedEnvQueryGenerator_Hemisphere, UAdvancedEnvQueryGenerator_Hemisphere::StaticClass, TEXT("UAdvancedEnvQueryGenerator_Hemisphere"), &Z_Registration_Info_UClass_UAdvancedEnvQueryGenerator_Hemisphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedEnvQueryGenerator_Hemisphere), 2782920922U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_AdvancedEnvironmentQuery_Source_AdvancedEnvironmentQuery_Public_AdvancedEnvQueryGenerator_Hemisphere_h_2625027667(TEXT("/Script/AdvancedEnvironmentQuery"),
	Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_AdvancedEnvironmentQuery_Source_AdvancedEnvironmentQuery_Public_AdvancedEnvQueryGenerator_Hemisphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_AdvancedEnvironmentQuery_Source_AdvancedEnvironmentQuery_Public_AdvancedEnvQueryGenerator_Hemisphere_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
