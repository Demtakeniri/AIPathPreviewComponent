// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIPathPreviewComponent/Public/PathPreviewSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathPreviewSettings() {}
// Cross Module References
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_UPathPreviewSettings();
	AIPATHPREVIEWCOMPONENT_API UClass* Z_Construct_UClass_UPathPreviewSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	UPackage* Z_Construct_UPackage__Script_AIPathPreviewComponent();
// End Cross Module References
	void UPathPreviewSettings::StaticRegisterNativesUPathPreviewSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPathPreviewSettings);
	UClass* Z_Construct_UClass_UPathPreviewSettings_NoRegister()
	{
		return UPathPreviewSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPathPreviewSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsiderDifficultTerrain_MetaData[];
#endif
		static void NewProp_ConsiderDifficultTerrain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConsiderDifficultTerrain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundCollision_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DifficultTerrainCollision_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DifficultTerrainCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsiderNavLinkProxys_MetaData[];
#endif
		static void NewProp_ConsiderNavLinkProxys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConsiderNavLinkProxys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldSmooth_MetaData[];
#endif
		static void NewProp_ShouldSmooth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldSmooth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointLerpFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointLerpFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSectionLenght_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSectionLenght;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathPreviewSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AIPathPreviewComponent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathPreviewSettings.h" },
		{ "ModuleRelativePath", "Public/PathPreviewSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderDifficultTerrain_MetaData[] = {
		{ "Category", "PathPreviewSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Tick if the path preview color should be affected by difficult terrain\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nTick if the path preview color should be affected by difficult terrain\n</summary>" },
#endif
	};
#endif
	void Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderDifficultTerrain_SetBit(void* Obj)
	{
		((UPathPreviewSettings*)Obj)->ConsiderDifficultTerrain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderDifficultTerrain = { "ConsiderDifficultTerrain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathPreviewSettings), &Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderDifficultTerrain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderDifficultTerrain_MetaData), Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderDifficultTerrain_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_GroundCollision_MetaData[] = {
		{ "Category", "PathPreviewSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Collision channel needed to project the points on the ground. needed if height differences in your\n/// game are natural and not handled with proxy links, make sure anything that is not walkable on ignores this channel.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nCollision channel needed to project the points on the ground. needed if height differences in your\ngame are natural and not handled with proxy links, make sure anything that is not walkable on ignores this channel.\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_GroundCollision = { "GroundCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathPreviewSettings, GroundCollision), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_GroundCollision_MetaData), Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_GroundCollision_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_DifficultTerrainCollision_MetaData[] = {
		{ "Category", "PathPreviewSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Collision channel needed for the difficult terrain actor to work. ignore if \"ConsiderDifficultTerrain=false\". \n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nCollision channel needed for the difficult terrain actor to work. ignore if \"ConsiderDifficultTerrain=false\".\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_DifficultTerrainCollision = { "DifficultTerrainCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathPreviewSettings, DifficultTerrainCollision), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_DifficultTerrainCollision_MetaData), Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_DifficultTerrainCollision_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderNavLinkProxys_MetaData[] = {
		{ "Category", "PathPreviewSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Tick if height differences in your game are not \"natural\" and handled with nav proxys \n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nTick if height differences in your game are not \"natural\" and handled with nav proxys\n</summary>" },
#endif
	};
#endif
	void Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderNavLinkProxys_SetBit(void* Obj)
	{
		((UPathPreviewSettings*)Obj)->ConsiderNavLinkProxys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderNavLinkProxys = { "ConsiderNavLinkProxys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathPreviewSettings), &Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderNavLinkProxys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderNavLinkProxys_MetaData), Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderNavLinkProxys_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ShouldSmooth_MetaData[] = {
		{ "Category", "Path Smoothing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n///Set to true if you want the system to smooth the mesh, this will result in a lot more points beeing\n///created.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nSet to true if you want the system to smooth the mesh, this will result in a lot more points beeing\ncreated.\n</summary>" },
#endif
	};
#endif
	void Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ShouldSmooth_SetBit(void* Obj)
	{
		((UPathPreviewSettings*)Obj)->ShouldSmooth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ShouldSmooth = { "ShouldSmooth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathPreviewSettings), &Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ShouldSmooth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ShouldSmooth_MetaData), Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ShouldSmooth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_SmoothingFactor_MetaData[] = {
		{ "Category", "Path Smoothing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Result of a Dot Product between two points, if it exceeds this value, the mesh will be smoothed in the specific point.\n///\x09""Deafaluted to 0.5 = 45 degrees angle.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nResult of a Dot Product between two points, if it exceeds this value, the mesh will be smoothed in the specific point.\n      Deafaluted to 0.5 = 45 degrees angle.\n</summary>" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_SmoothingFactor = { "SmoothingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathPreviewSettings, SmoothingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_SmoothingFactor_MetaData), Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_SmoothingFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_PointLerpFactor_MetaData[] = {
		{ "Category", "Path Smoothing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// If the angle between two points gets smoothed, this value controls the position of the two newly created smoothing points.\n/// Closer to 1 = closer to the angle point, more tight and precise.\n/// Closer to 0 = away from the angle point, wider and less precise.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nIf the angle between two points gets smoothed, this value controls the position of the two newly created smoothing points.\nCloser to 1 = closer to the angle point, more tight and precise.\nCloser to 0 = away from the angle point, wider and less precise.\n</summary>" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_PointLerpFactor = { "PointLerpFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathPreviewSettings, PointLerpFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_PointLerpFactor_MetaData), Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_PointLerpFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_LineWidth_MetaData[] = {
		{ "Category", "Mesh Look" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Width of the mesh.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nWidth of the mesh.\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_LineWidth = { "LineWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathPreviewSettings, LineWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_LineWidth_MetaData), Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_LineWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_MaxSectionLenght_MetaData[] = {
		{ "Category", "Mesh Look" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Max Lenght of a single section of the mesh, if the distance between two points exceeds this value, the section will be split in two.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nMax Lenght of a single section of the mesh, if the distance between two points exceeds this value, the section will be split in two.\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_MaxSectionLenght = { "MaxSectionLenght", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathPreviewSettings, MaxSectionLenght), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_MaxSectionLenght_MetaData), Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_MaxSectionLenght_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_MeshMaterial_MetaData[] = {
		{ "Category", "Mesh Look" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// The Material that will be applied to the path mesh.\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/PathPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nThe Material that will be applied to the path mesh.\n</summary>" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_MeshMaterial = { "MeshMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathPreviewSettings, MeshMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_MeshMaterial_MetaData), Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_MeshMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathPreviewSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderDifficultTerrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_GroundCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_DifficultTerrainCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ConsiderNavLinkProxys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_ShouldSmooth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_SmoothingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_PointLerpFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_LineWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_MaxSectionLenght,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathPreviewSettings_Statics::NewProp_MeshMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathPreviewSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathPreviewSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathPreviewSettings_Statics::ClassParams = {
		&UPathPreviewSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPathPreviewSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathPreviewSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathPreviewSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPathPreviewSettings()
	{
		if (!Z_Registration_Info_UClass_UPathPreviewSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathPreviewSettings.OuterSingleton, Z_Construct_UClass_UPathPreviewSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPathPreviewSettings.OuterSingleton;
	}
	template<> AIPATHPREVIEWCOMPONENT_API UClass* StaticClass<UPathPreviewSettings>()
	{
		return UPathPreviewSettings::StaticClass();
	}
	UPathPreviewSettings::UPathPreviewSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathPreviewSettings);
	UPathPreviewSettings::~UPathPreviewSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPathPreviewSettings, UPathPreviewSettings::StaticClass, TEXT("UPathPreviewSettings"), &Z_Registration_Info_UClass_UPathPreviewSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathPreviewSettings), 3250244804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewSettings_h_184485318(TEXT("/Script/AIPathPreviewComponent"),
		Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_PathPreviewSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
