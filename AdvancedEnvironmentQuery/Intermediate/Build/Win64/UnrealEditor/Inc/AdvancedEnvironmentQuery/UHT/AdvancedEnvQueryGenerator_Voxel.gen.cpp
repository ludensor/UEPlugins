// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedEnvironmentQuery/Public/AdvancedEnvQueryGenerator_Voxel.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedEnvQueryGenerator_Voxel() {}

// Begin Cross Module References
ADVANCEDENVIRONMENTQUERY_API UClass* Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel();
ADVANCEDENVIRONMENTQUERY_API UClass* Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_AdvancedEnvironmentQuery();
// End Cross Module References

// Begin Class UAdvancedEnvQueryGenerator_Voxel
void UAdvancedEnvQueryGenerator_Voxel::StaticRegisterNativesUAdvancedEnvQueryGenerator_Voxel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedEnvQueryGenerator_Voxel);
UClass* Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_NoRegister()
{
	return UAdvancedEnvQueryGenerator_Voxel::StaticClass();
}
struct Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "DisplayName", "Points: Voxel" },
		{ "IncludePath", "AdvancedEnvQueryGenerator_Voxel.h" },
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Voxel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xb0\xa2\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "DisplayName", "Grid Half Size" },
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Voxel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xb0\xa2\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSpaceBetween_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Voxel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalSpaceBetween_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Voxel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateAround_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd. */" },
#endif
		{ "ModuleRelativePath", "Public/AdvancedEnvQueryGenerator_Voxel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xcf\xb4\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalSpaceBetween;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalSpaceBetween;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GenerateAround;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedEnvQueryGenerator_Voxel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_Voxel, GridSize), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::NewProp_HorizontalSpaceBetween = { "HorizontalSpaceBetween", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_Voxel, HorizontalSpaceBetween), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalSpaceBetween_MetaData), NewProp_HorizontalSpaceBetween_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::NewProp_VerticalSpaceBetween = { "VerticalSpaceBetween", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_Voxel, VerticalSpaceBetween), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalSpaceBetween_MetaData), NewProp_VerticalSpaceBetween_MetaData) }; // 1384630506
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::NewProp_GenerateAround = { "GenerateAround", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdvancedEnvQueryGenerator_Voxel, GenerateAround), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateAround_MetaData), NewProp_GenerateAround_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::NewProp_HorizontalSpaceBetween,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::NewProp_VerticalSpaceBetween,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::NewProp_GenerateAround,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedEnvironmentQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::ClassParams = {
	&UAdvancedEnvQueryGenerator_Voxel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel()
{
	if (!Z_Registration_Info_UClass_UAdvancedEnvQueryGenerator_Voxel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedEnvQueryGenerator_Voxel.OuterSingleton, Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAdvancedEnvQueryGenerator_Voxel.OuterSingleton;
}
template<> ADVANCEDENVIRONMENTQUERY_API UClass* StaticClass<UAdvancedEnvQueryGenerator_Voxel>()
{
	return UAdvancedEnvQueryGenerator_Voxel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedEnvQueryGenerator_Voxel);
UAdvancedEnvQueryGenerator_Voxel::~UAdvancedEnvQueryGenerator_Voxel() {}
// End Class UAdvancedEnvQueryGenerator_Voxel

// Begin Registration
struct Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_AdvancedEnvironmentQuery_Source_AdvancedEnvironmentQuery_Public_AdvancedEnvQueryGenerator_Voxel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedEnvQueryGenerator_Voxel, UAdvancedEnvQueryGenerator_Voxel::StaticClass, TEXT("UAdvancedEnvQueryGenerator_Voxel"), &Z_Registration_Info_UClass_UAdvancedEnvQueryGenerator_Voxel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedEnvQueryGenerator_Voxel), 3257753707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_AdvancedEnvironmentQuery_Source_AdvancedEnvironmentQuery_Public_AdvancedEnvQueryGenerator_Voxel_h_3825514413(TEXT("/Script/AdvancedEnvironmentQuery"),
	Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_AdvancedEnvironmentQuery_Source_AdvancedEnvironmentQuery_Public_AdvancedEnvQueryGenerator_Voxel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGame_Plugins_AdvancedEnvironmentQuery_Source_AdvancedEnvironmentQuery_Public_AdvancedEnvQueryGenerator_Voxel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
