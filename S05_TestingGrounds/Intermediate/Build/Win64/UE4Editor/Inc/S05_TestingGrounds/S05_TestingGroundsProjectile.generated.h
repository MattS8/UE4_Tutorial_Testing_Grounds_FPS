// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
#ifdef S05_TESTINGGROUNDS_S05_TestingGroundsProjectile_generated_h
#error "S05_TestingGroundsProjectile.generated.h already included, missing '#pragma once' in S05_TestingGroundsProjectile.h"
#endif
#define S05_TESTINGGROUNDS_S05_TestingGroundsProjectile_generated_h

#define S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAS05_TestingGroundsProjectile(); \
	friend struct Z_Construct_UClass_AS05_TestingGroundsProjectile_Statics; \
public: \
	DECLARE_CLASS(AS05_TestingGroundsProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/S05_TestingGrounds"), NO_API) \
	DECLARE_SERIALIZER(AS05_TestingGroundsProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAS05_TestingGroundsProjectile(); \
	friend struct Z_Construct_UClass_AS05_TestingGroundsProjectile_Statics; \
public: \
	DECLARE_CLASS(AS05_TestingGroundsProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/S05_TestingGrounds"), NO_API) \
	DECLARE_SERIALIZER(AS05_TestingGroundsProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AS05_TestingGroundsProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AS05_TestingGroundsProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AS05_TestingGroundsProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AS05_TestingGroundsProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AS05_TestingGroundsProjectile(AS05_TestingGroundsProjectile&&); \
	NO_API AS05_TestingGroundsProjectile(const AS05_TestingGroundsProjectile&); \
public:


#define S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AS05_TestingGroundsProjectile(AS05_TestingGroundsProjectile&&); \
	NO_API AS05_TestingGroundsProjectile(const AS05_TestingGroundsProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AS05_TestingGroundsProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AS05_TestingGroundsProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AS05_TestingGroundsProjectile)


#define S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AS05_TestingGroundsProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AS05_TestingGroundsProjectile, ProjectileMovement); }


#define S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_9_PROLOG
#define S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_RPC_WRAPPERS \
	S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_INCLASS \
	S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_INCLASS_NO_PURE_DECLS \
	S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> S05_TESTINGGROUNDS_API UClass* StaticClass<class AS05_TestingGroundsProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID S05_TestingGrounds_Source_S05_TestingGrounds_S05_TestingGroundsProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
