// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TEST1_test1Projectile_generated_h
#error "test1Projectile.generated.h already included, missing '#pragma once' in test1Projectile.h"
#endif
#define TEST1_test1Projectile_generated_h

#define test1_Source_test1_test1Projectile_h_15_SPARSE_DATA
#define test1_Source_test1_test1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define test1_Source_test1_test1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define test1_Source_test1_test1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtest1Projectile(); \
	friend struct Z_Construct_UClass_Atest1Projectile_Statics; \
public: \
	DECLARE_CLASS(Atest1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/test1"), NO_API) \
	DECLARE_SERIALIZER(Atest1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define test1_Source_test1_test1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAtest1Projectile(); \
	friend struct Z_Construct_UClass_Atest1Projectile_Statics; \
public: \
	DECLARE_CLASS(Atest1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/test1"), NO_API) \
	DECLARE_SERIALIZER(Atest1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define test1_Source_test1_test1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Atest1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Atest1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Atest1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Atest1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Atest1Projectile(Atest1Projectile&&); \
	NO_API Atest1Projectile(const Atest1Projectile&); \
public:


#define test1_Source_test1_test1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Atest1Projectile(Atest1Projectile&&); \
	NO_API Atest1Projectile(const Atest1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Atest1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Atest1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Atest1Projectile)


#define test1_Source_test1_test1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(Atest1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(Atest1Projectile, ProjectileMovement); }


#define test1_Source_test1_test1Projectile_h_12_PROLOG
#define test1_Source_test1_test1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test1_Source_test1_test1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	test1_Source_test1_test1Projectile_h_15_SPARSE_DATA \
	test1_Source_test1_test1Projectile_h_15_RPC_WRAPPERS \
	test1_Source_test1_test1Projectile_h_15_INCLASS \
	test1_Source_test1_test1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define test1_Source_test1_test1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test1_Source_test1_test1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	test1_Source_test1_test1Projectile_h_15_SPARSE_DATA \
	test1_Source_test1_test1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	test1_Source_test1_test1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	test1_Source_test1_test1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST1_API UClass* StaticClass<class Atest1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID test1_Source_test1_test1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
