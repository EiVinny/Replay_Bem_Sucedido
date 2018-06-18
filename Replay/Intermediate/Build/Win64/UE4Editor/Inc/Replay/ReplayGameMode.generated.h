// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REPLAY_ReplayGameMode_generated_h
#error "ReplayGameMode.generated.h already included, missing '#pragma once' in ReplayGameMode.h"
#endif
#define REPLAY_ReplayGameMode_generated_h

#define Replay_Source_Replay_ReplayGameMode_h_12_RPC_WRAPPERS
#define Replay_Source_Replay_ReplayGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Replay_Source_Replay_ReplayGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReplayGameMode(); \
	friend REPLAY_API class UClass* Z_Construct_UClass_AReplayGameMode(); \
public: \
	DECLARE_CLASS(AReplayGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Replay"), REPLAY_API) \
	DECLARE_SERIALIZER(AReplayGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Replay_Source_Replay_ReplayGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAReplayGameMode(); \
	friend REPLAY_API class UClass* Z_Construct_UClass_AReplayGameMode(); \
public: \
	DECLARE_CLASS(AReplayGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Replay"), REPLAY_API) \
	DECLARE_SERIALIZER(AReplayGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Replay_Source_Replay_ReplayGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REPLAY_API AReplayGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReplayGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLAY_API, AReplayGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplayGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	REPLAY_API AReplayGameMode(AReplayGameMode&&); \
	REPLAY_API AReplayGameMode(const AReplayGameMode&); \
public:


#define Replay_Source_Replay_ReplayGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	REPLAY_API AReplayGameMode(AReplayGameMode&&); \
	REPLAY_API AReplayGameMode(const AReplayGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLAY_API, AReplayGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplayGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReplayGameMode)


#define Replay_Source_Replay_ReplayGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Replay_Source_Replay_ReplayGameMode_h_9_PROLOG
#define Replay_Source_Replay_ReplayGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Replay_Source_Replay_ReplayGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Replay_Source_Replay_ReplayGameMode_h_12_RPC_WRAPPERS \
	Replay_Source_Replay_ReplayGameMode_h_12_INCLASS \
	Replay_Source_Replay_ReplayGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Replay_Source_Replay_ReplayGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Replay_Source_Replay_ReplayGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Replay_Source_Replay_ReplayGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Replay_Source_Replay_ReplayGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Replay_Source_Replay_ReplayGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Replay_Source_Replay_ReplayGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
