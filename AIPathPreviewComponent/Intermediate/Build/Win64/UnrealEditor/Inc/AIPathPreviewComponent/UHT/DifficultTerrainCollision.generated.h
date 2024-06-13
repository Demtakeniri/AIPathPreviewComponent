// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DifficultTerrainCollision.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIPATHPREVIEWCOMPONENT_DifficultTerrainCollision_generated_h
#error "DifficultTerrainCollision.generated.h already included, missing '#pragma once' in DifficultTerrainCollision.h"
#endif
#define AIPATHPREVIEWCOMPONENT_DifficultTerrainCollision_generated_h

#define FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_SPARSE_DATA
#define FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_ACCESSORS
#define FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADifficultTerrainCollision(); \
	friend struct Z_Construct_UClass_ADifficultTerrainCollision_Statics; \
public: \
	DECLARE_CLASS(ADifficultTerrainCollision, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIPathPreviewComponent"), NO_API) \
	DECLARE_SERIALIZER(ADifficultTerrainCollision)


#define FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADifficultTerrainCollision(ADifficultTerrainCollision&&); \
	NO_API ADifficultTerrainCollision(const ADifficultTerrainCollision&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADifficultTerrainCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADifficultTerrainCollision); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADifficultTerrainCollision) \
	NO_API virtual ~ADifficultTerrainCollision();


#define FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_16_PROLOG
#define FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_SPARSE_DATA \
	FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_ACCESSORS \
	FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIPATHPREVIEWCOMPONENT_API UClass* StaticClass<class ADifficultTerrainCollision>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_davi__thesisproject_ThesisProject_Plugins_AIPathPreviewComponent_Source_AIPathPreviewComponent_Public_DifficultTerrainCollision_h


#define FOREACH_ENUM_ETERRAINTYPE(op) \
	op(ETerrainType::SLOWING) \
	op(ETerrainType::DAMAGING) 

enum class ETerrainType : uint8;
template<> struct TIsUEnumClass<ETerrainType> { enum { Value = true }; };
template<> AIPATHPREVIEWCOMPONENT_API UEnum* StaticEnum<ETerrainType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
