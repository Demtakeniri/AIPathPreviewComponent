// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIPathPreviewComponent/Public/DifficultTerrainCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDifficultTerrainCollision() {}
// Cross Module References
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_ADifficultTerrainCollision();
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_ADifficultTerrainCollision_NoRegister();
	AIPATHPREVIEWCOMPONENT_API UEnum* Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIPathPreviewComponent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETerrainType;
	static UEnum* ETerrainType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETerrainType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETerrainType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType, (UObject*)Z_Construct_UPackage__Script_AIPathPreviewComponent(), TEXT("ETerrainType"));
		}
		return Z_Registration_Info_UEnum_ETerrainType.OuterSingleton;
	}
	template<> AIPATHPREVIEWCOMPONENT_API UEnum* StaticEnum<ETerrainType>()
	{
		return ETerrainType_StaticEnum();
	}
	struct Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType_Statics::Enumerators[] = {
		{ "ETerrainType::SLOWING", (int64)ETerrainType::SLOWING },
		{ "ETerrainType::DAMAGING", (int64)ETerrainType::DAMAGING },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DAMAGING.Name", "ETerrainType::DAMAGING" },
		{ "ModuleRelativePath", "Public/DifficultTerrainCollision.h" },
		{ "SLOWING.Name", "ETerrainType::SLOWING" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIPathPreviewComponent,
		nullptr,
		"ETerrainType",
		"ETerrainType",
		Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType()
	{
		if (!Z_Registration_Info_UEnum_ETerrainType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETerrainType.InnerSingleton, Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETerrainType.InnerSingleton;
	}
	void ADifficultTerrainCollision::StaticRegisterNativesADifficultTerrainCollision()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADifficultTerrainCollision);
	UClass* Z_Construct_UClass_ADifficultTerrainCollision_NoRegister()
	{
		return ADifficultTerrainCollision::StaticClass();
	}
	struct Z_Construct_UClass_ADifficultTerrainCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TerraintType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerraintType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TerraintType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADifficultTerrainCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIPathPreviewComponent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADifficultTerrainCollision_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADifficultTerrainCollision_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DifficultTerrainCollision.h" },
		{ "ModuleRelativePath", "Public/DifficultTerrainCollision.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADifficultTerrainCollision_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "DifficultTerrainCollision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DifficultTerrainCollision.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADifficultTerrainCollision_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADifficultTerrainCollision, Collision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADifficultTerrainCollision_Statics::NewProp_Collision_MetaData), Z_Construct_UClass_ADifficultTerrainCollision_Statics::NewProp_Collision_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADifficultTerrainCollision_Statics::NewProp_TerraintType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADifficultTerrainCollision_Statics::NewProp_TerraintType_MetaData[] = {
		{ "Category", "DifficultTerrainCollision" },
		{ "ModuleRelativePath", "Public/DifficultTerrainCollision.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADifficultTerrainCollision_Statics::NewProp_TerraintType = { "TerraintType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADifficultTerrainCollision, TerraintType), Z_Construct_UEnum_AIPathPreviewComponent_ETerrainType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADifficultTerrainCollision_Statics::NewProp_TerraintType_MetaData), Z_Construct_UClass_ADifficultTerrainCollision_Statics::NewProp_TerraintType_MetaData) }; // 967160723
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADifficultTerrainCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADifficultTerrainCollision_Statics::NewProp_Collision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADifficultTerrainCollision_Statics::NewProp_TerraintType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADifficultTerrainCollision_Statics::NewProp_TerraintType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADifficultTerrainCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADifficultTerrainCollision>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADifficultTerrainCollision_Statics::ClassParams = {
		&ADifficultTerrainCollision::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADifficultTerrainCollision_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADifficultTerrainCollision_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADifficultTerrainCollision_Statics::Class_MetaDataParams), Z_Construct_UClass_ADifficultTerrainCollision_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADifficultTerrainCollision_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADifficultTerrainCollision()
	{
		if (!Z_Registration_Info_UClass_ADifficultTerrainCollision.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADifficultTerrainCollision.OuterSingleton, Z_Construct_UClass_ADifficultTerrainCollision_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADifficultTerrainCollision.OuterSingleton;
	}
	template<> AIPATHPREVIEWCOMPONENT_API UClass* StaticClass<ADifficultTerrainCollision>()
	{
		return ADifficultTerrainCollision::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADifficultTerrainCollision);
	ADifficultTerrainCollision::~ADifficultTerrainCollision() {}
	struct Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_Statics::EnumInfo[] = {
		{ ETerrainType_StaticEnum, TEXT("ETerrainType"), &Z_Registration_Info_UEnum_ETerrainType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 967160723U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADifficultTerrainCollision, ADifficultTerrainCollision::StaticClass, TEXT("ADifficultTerrainCollision"), &Z_Registration_Info_UClass_ADifficultTerrainCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADifficultTerrainCollision), 1295149547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_1252189287(TEXT("/Script/AIPathPreviewComponent"),
		Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
