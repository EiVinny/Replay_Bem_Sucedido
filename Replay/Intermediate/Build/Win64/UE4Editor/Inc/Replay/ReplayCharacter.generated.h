// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REPLAY_ReplayCharacter_generated_h
#error "ReplayCharacter.generated.h already included, missing '#pragma once' in ReplayCharacter.h"
#endif
#define REPLAY_ReplayCharacter_generated_h

#define Replay_Source_Replay_ReplayCharacter_h_14_RPC_WRAPPERS
#define Replay_Source_Replay_ReplayCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Replay_Source_Replay_ReplayCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReplayCharacter(); \
	friend REPLAY_API class UClass* Z_Construct_UClass_AReplayCharacter(); \
public: \
	DECLARE_CLASS(AReplayCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Replay"), NO_API) \
	DECLARE_SERIALIZER(AReplayCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Replay_Source_Replay_ReplayCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAReplayCharacter(); \
	friend REPLAY_API class UClass* Z_Construct_UClass_AReplayCharacter(); \
public: \
	DECLARE_CLASS(AReplayCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Replay"), NO_API) \
	DECLARE_SERIALIZER(AReplayCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Replay_Source_Replay_ReplayCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReplayCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReplayCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReplayCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplayCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReplayCharacter(AReplayCharacter&&); \
	NO_API AReplayCharacter(const AReplayCharacter&); \
public:


#define Replay_Source_Replay_ReplayCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReplayCharacter(AReplayCharacter&&); \
	NO_API AReplayCharacter(const AReplayCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReplayCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplayCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReplayCharacter)


#define Replay_Source_Replay_ReplayCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AReplayCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AReplayCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AReplayCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AReplayCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AReplayCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AReplayCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AReplayCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AReplayCharacter, L_MotionController); }


#define Replay_Source_Replay_ReplayCharacter_h_11_PROLOG
#define Replay_Source_Replay_ReplayCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Replay_Source_Replay_ReplayCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Replay_Source_Replay_ReplayCharacter_h_14_RPC_WRAPPERS \
	Replay_Source_Replay_ReplayCharacter_h_14_INCLASS \
	Replay_Source_Replay_ReplayCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Replay_Source_Replay_ReplayCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Replay_Source_Replay_ReplayCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Replay_Source_Replay_ReplayCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Replay_Source_Replay_ReplayCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Replay_Source_Replay_ReplayCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Replay_Source_Replay_ReplayCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
