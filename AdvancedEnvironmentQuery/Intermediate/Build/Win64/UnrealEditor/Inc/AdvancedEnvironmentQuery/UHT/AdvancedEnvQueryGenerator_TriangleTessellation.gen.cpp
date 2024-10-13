// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedEnvironmentQuery/Public/AdvancedEnvQueryGenerator_TriangleTessellation.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedEnvQueryGenerator_TriangleTessellation() {}

// Begin Cross Module References
ADVANCEDENVIRONMENTQUERY_API UClass* Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation();
ADVANCEDENVIRONMENTQUERY_API UClass* Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_AdvancedEnvironmentQuery();
// End Cross Module References

// Begin Class UAdvancedEnvQueryGenerator_TriangleTessellation
void UAdvancedEnvQueryGenerator_TriangleTessellation::StaticRegisterNativesUAdvancedEnvQueryGenerator_TriangleTessellation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedEnvQueryGenerator_TriangleTessellation);
UClass* Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_NoRegister()
{
	return UAdvancedEnvQueryGenerator_TriangleTessellation::StaticClass();
}
struct Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb7\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xb0\xa2\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * https://www.researchgate.net/figure/Equilateral-triangle-tessellation-packing-into-a-coverage-circle-R-976-m_fig4_220471434\n */" },
#endif
		{ "DisplayName", "Points: Triangle Tessellation" },
		{ "IncludePath", "AdvancedEnvQueryGenerator_TriangleTessellation.h" },
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_TriangleTessellation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb7\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xb0\xa2\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nhttps://www.researchgate.net/figure/Equilateral-triangle-tessellation-packing-into-a-coverage-circle-R-976-m_fig4_220471434" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc5\xb7\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_TriangleTessellation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb7\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriangleEdge_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xc7\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xb0\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_TriangleTessellation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xc7\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xb0\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcDirection_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "EditCondition", "bDefineArc" },
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_TriangleTessellation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc3\xa4\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_TriangleTessellation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc3\xa4\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleCenter_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_TriangleTessellation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeContextLocation_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd CircleCenter\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_TriangleTessellation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd CircleCenter\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefineArc_MetaData[] = {
		{ "Category", "Generator" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_TriangleTessellation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CircleRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleEdge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArcDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArcAngle;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CircleCenter;
	static void NewProp_bIncludeContextLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeContextLocation;
	static void NewProp_bDefineArc_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefineArc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedEnvQueryGenerator_TriangleTessellation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_TriangleTessellation, CircleRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleRadius_MetaData), NewProp_CircleRadius_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_TriangleEdge = { "TriangleEdge", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_TriangleTessellation, TriangleEdge), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriangleEdge_MetaData), NewProp_TriangleEdge_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcDirection = { "ArcDirection", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_TriangleTessellation, ArcDirection), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcDirection_MetaData), NewProp_ArcDirection_MetaData) }; // 2990699813
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcAngle = { "ArcAngle", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_TriangleTessellation, ArcAngle), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcAngle_MetaData), NewProp_ArcAngle_MetaData) }; // 1384630506
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleCenter = { "CircleCenter", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_TriangleTessellation, CircleCenter), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleCenter_MetaData), NewProp_CircleCenter_MetaData) };
void Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bIncludeContextLocation_SetBit(void* Obj)
{
	((UAdvancedEnvQueryGenerator_TriangleTessellation*)Obj)->bIncludeContextLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bIncludeContextLocation = { "bIncludeContextLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdvancedEnvQueryGenerator_TriangleTessellation), &Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bIncludeContextLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeContextLocation_MetaData), NewProp_bIncludeContextLocation_MetaData) };
void Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bDefineArc_SetBit(void* Obj)
{
	((UAdvancedEnvQueryGenerator_TriangleTessellation*)Obj)->bDefineArc = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bDefineArc = { "bDefineArc", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdvancedEnvQueryGenerator_TriangleTessellation), &Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bDefineArc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefineArc_MetaData), NewProp_bDefineArc_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_TriangleEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_ArcAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_CircleCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bIncludeContextLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::NewProp_bDefineArc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedEnvironmentQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::ClassParams = {
	&UAdvancedEnvQueryGenerator_TriangleTessellation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation()
{
	if (!Z_Registration_Info_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation.OuterSingleton, Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation.OuterSingleton;
}
template<> ADVANCEDENVIRONMENTQUERY_API UClass* StaticClass<UAdvancedEnvQueryGenerator_TriangleTessellation>()
{
	return UAdvancedEnvQueryGenerator_TriangleTessellation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedEnvQueryGenerator_TriangleTessellation);
UAdvancedEnvQueryGenerator_TriangleTessellation::~UAdvancedEnvQueryGenerator_TriangleTessellation() {}
// End Class UAdvancedEnvQueryGenerator_TriangleTessellation

// Begin Registration
struct Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_AdvancedEnvironmentQuery_Source_AdvancedEnvironmentQuery_Public_AdvancedEnvQueryGenerator_TriangleTessellation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation, UAdvancedEnvQueryGenerator_TriangleTessellation::StaticClass, TEXT("UAdvancedEnvQueryGenerator_TriangleTessellation"), &Z_Registration_Info_UClass_UAdvancedEnvQueryGenerator_TriangleTessellation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedEnvQueryGenerator_TriangleTessellation), 3763365580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_AdvancedEnvironmentQuery_Source_AdvancedEnvironmentQuery_Public_AdvancedEnvQueryGenerator_TriangleTessellation_h_2403475243(TEXT("/Script/AdvancedEnvironmentQuery"),
	Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_AdvancedEnvironmentQuery_Source_AdvancedEnvironmentQuery_Public_AdvancedEnvQueryGenerator_TriangleTessellation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_AdvancedEnvironmentQuery_Source_AdvancedEnvironmentQuery_Public_AdvancedEnvQueryGenerator_TriangleTessellation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
