// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST1_test1Character_generated_h
#error "test1Character.generated.h already included, missing '#pragma once' in test1Character.h"
#endif
#define TEST1_test1Character_generated_h

#define test1_Source_test1_test1Character_h_20_SPARSE_DATA
#define test1_Source_test1_test1Character_h_20_RPC_WRAPPERS
#define test1_Source_test1_test1Character_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define test1_Source_test1_test1Character_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtest1Character(); \
	friend struct Z_Construct_UClass_Atest1Character_Statics; \
public: \
	DECLARE_CLASS(Atest1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/test1"), NO_API) \
	DECLARE_SERIALIZER(Atest1Character)


#define test1_Source_test1_test1Character_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAtest1Character(); \
	friend struct Z_Construct_UClass_Atest1Character_Statics; \
public: \
	DECLARE_CLASS(Atest1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/test1"), NO_API) \
	DECLARE_SERIALIZER(Atest1Character)


#define test1_Source_test1_test1Character_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Atest1Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Atest1Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Atest1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Atest1Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Atest1Character(Atest1Character&&); \
	NO_API Atest1Character(const Atest1Character&); \
public:


#define test1_Source_test1_test1Character_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Atest1Character(Atest1Character&&); \
	NO_API Atest1Character(const Atest1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Atest1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Atest1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Atest1Character)


#define test1_Source_test1_test1Character_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(Atest1Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(Atest1Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(Atest1Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(Atest1Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(Atest1Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(Atest1Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(Atest1Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(Atest1Character, L_MotionController); }


#define test1_Source_test1_test1Character_h_17_PROLOG
#define test1_Source_test1_test1Character_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test1_Source_test1_test1Character_h_20_PRIVATE_PROPERTY_OFFSET \
	test1_Source_test1_test1Character_h_20_SPARSE_DATA \
	test1_Source_test1_test1Character_h_20_RPC_WRAPPERS \
	test1_Source_test1_test1Character_h_20_INCLASS \
	test1_Source_test1_test1Character_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define test1_Source_test1_test1Character_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test1_Source_test1_test1Character_h_20_PRIVATE_PROPERTY_OFFSET \
	test1_Source_test1_test1Character_h_20_SPARSE_DATA \
	test1_Source_test1_test1Character_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	test1_Source_test1_test1Character_h_20_INCLASS_NO_PURE_DECLS \
	test1_Source_test1_test1Character_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST1_API UClass* StaticClass<class Atest1Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID test1_Source_test1_test1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
