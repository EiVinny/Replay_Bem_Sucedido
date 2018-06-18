// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REPLAY_PC_ReplaySpectator_generated_h
#error "PC_ReplaySpectator.generated.h already included, missing '#pragma once' in PC_ReplaySpectator.h"
#endif
#define REPLAY_PC_ReplaySpectator_generated_h

#define Replay_Source_Replay_PC_ReplaySpectator_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurrentReplayPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentReplayPlayRate(Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentReplayTimeToSeconds) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Seconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentReplayTimeToSeconds(Z_Param_Seconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayCurrentTimeInSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReplayCurrentTimeInSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayTotalTimeInSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReplayTotalTimeInSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentReplayPausedState) \
	{ \
		P_GET_UBOOL(Z_Param_bDoPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetCurrentReplayPausedState(Z_Param_bDoPause); \
		P_NATIVE_END; \
	}


#define Replay_Source_Replay_PC_ReplaySpectator_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrentReplayPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentReplayPlayRate(Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentReplayTimeToSeconds) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Seconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentReplayTimeToSeconds(Z_Param_Seconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayCurrentTimeInSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReplayCurrentTimeInSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentReplayTotalTimeInSeconds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReplayTotalTimeInSeconds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentReplayPausedState) \
	{ \
		P_GET_UBOOL(Z_Param_bDoPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetCurrentReplayPausedState(Z_Param_bDoPause); \
		P_NATIVE_END; \
	}


#define Replay_Source_Replay_PC_ReplaySpectator_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPC_ReplaySpectator(); \
	friend REPLAY_API class UClass* Z_Construct_UClass_APC_ReplaySpectator(); \
public: \
	DECLARE_CLASS(APC_ReplaySpectator, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Replay"), NO_API) \
	DECLARE_SERIALIZER(APC_ReplaySpectator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Replay_Source_Replay_PC_ReplaySpectator_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAPC_ReplaySpectator(); \
	friend REPLAY_API class UClass* Z_Construct_UClass_APC_ReplaySpectator(); \
public: \
	DECLARE_CLASS(APC_ReplaySpectator, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Replay"), NO_API) \
	DECLARE_SERIALIZER(APC_ReplaySpectator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Replay_Source_Replay_PC_ReplaySpectator_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APC_ReplaySpectator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APC_ReplaySpectator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APC_ReplaySpectator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APC_ReplaySpectator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APC_ReplaySpectator(APC_ReplaySpectator&&); \
	NO_API APC_ReplaySpectator(const APC_ReplaySpectator&); \
public:


#define Replay_Source_Replay_PC_ReplaySpectator_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APC_ReplaySpectator(APC_ReplaySpectator&&); \
	NO_API APC_ReplaySpectator(const APC_ReplaySpectator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APC_ReplaySpectator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APC_ReplaySpectator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APC_ReplaySpectator)


#define Replay_Source_Replay_PC_ReplaySpectator_h_28_PRIVATE_PROPERTY_OFFSET
#define Replay_Source_Replay_PC_ReplaySpectator_h_14_PROLOG
#define Replay_Source_Replay_PC_ReplaySpectator_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Replay_Source_Replay_PC_ReplaySpectator_h_28_PRIVATE_PROPERTY_OFFSET \
	Replay_Source_Replay_PC_ReplaySpectator_h_28_RPC_WRAPPERS \
	Replay_Source_Replay_PC_ReplaySpectator_h_28_INCLASS \
	Replay_Source_Replay_PC_ReplaySpectator_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Replay_Source_Replay_PC_ReplaySpectator_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Replay_Source_Replay_PC_ReplaySpectator_h_28_PRIVATE_PROPERTY_OFFSET \
	Replay_Source_Replay_PC_ReplaySpectator_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Replay_Source_Replay_PC_ReplaySpectator_h_28_INCLASS_NO_PURE_DECLS \
	Replay_Source_Replay_PC_ReplaySpectator_h_28_ENHANCED_CONSTRUCTORS \
protected: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Replay_Source_Replay_PC_ReplaySpectator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
