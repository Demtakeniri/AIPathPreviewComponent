// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIPathPreviewComponent/Public/DummyClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDummyClass() {}
// Cross Module References
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_UDummyClass();
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_UDummyClass_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIPathPreviewComponent();
// End Cross Module References
	void UDummyClass::StaticRegisterNativesUDummyClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDummyClass);
	UClass* Z_Construct_UClass_UDummyClass_NoRegister()
	{
		return UDummyClass::StaticClass();
	}
	struct Z_Construct_UClass_UDummyClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDummyClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIPathPreviewComponent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDummyClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDummyClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DummyClass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DummyClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDummyClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDummyClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDummyClass_Statics::ClassParams = {
		&UDummyClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDummyClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UDummyClass_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDummyClass()
	{
		if (!Z_Registration_Info_UClass_UDummyClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDummyClass.OuterSingleton, Z_Construct_UClass_UDummyClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDummyClass.OuterSingleton;
	}
	template<> AIPATHPREVIEWCOMPONENT_API UClass* StaticClass<UDummyClass>()
	{
		return UDummyClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDummyClass);
	UDummyClass::~UDummyClass() {}
	struct Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DummyClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DummyClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDummyClass, UDummyClass::StaticClass, TEXT("UDummyClass"), &Z_Registration_Info_UClass_UDummyClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDummyClass), 1378065725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DummyClass_h_3129841776(TEXT("/Script/AIPathPreviewComponent"),
		Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DummyClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DummyClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
