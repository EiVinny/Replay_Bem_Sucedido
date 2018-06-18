// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REPLAY_Teste_generated_h
#error "Teste.generated.h already included, missing '#pragma once' in Teste.h"
#endif
#define REPLAY_Teste_generated_h

#define Replay_Source_Replay_Teste_h_15_RPC_WRAPPERS
#define Replay_Source_Replay_Teste_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Replay_Source_Replay_Teste_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTeste(); \
	friend REPLAY_API class UClass* Z_Construct_UClass_UTeste(); \
public: \
	DECLARE_CLASS(UTeste, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Replay"), NO_API) \
	DECLARE_SERIALIZER(UTeste) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Replay_Source_Replay_Teste_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTeste(); \
	friend REPLAY_API class UClass* Z_Construct_UClass_UTeste(); \
public: \
	DECLARE_CLASS(UTeste, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Replay"), NO_API) \
	DECLARE_SERIALIZER(UTeste) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Replay_Source_Replay_Teste_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTeste(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTeste) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTeste); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTeste); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTeste(UTeste&&); \
	NO_API UTeste(const UTeste&); \
public:


#define Replay_Source_Replay_Teste_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTeste(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTeste(UTeste&&); \
	NO_API UTeste(const UTeste&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTeste); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTeste); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTeste)


#define Replay_Source_Replay_Teste_h_15_PRIVATE_PROPERTY_OFFSET
#define Replay_Source_Replay_Teste_h_12_PROLOG
#define Replay_Source_Replay_Teste_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Replay_Source_Replay_Teste_h_15_PRIVATE_PROPERTY_OFFSET \
	Replay_Source_Replay_Teste_h_15_RPC_WRAPPERS \
	Replay_Source_Replay_Teste_h_15_INCLASS \
	Replay_Source_Replay_Teste_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Replay_Source_Replay_Teste_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Replay_Source_Replay_Teste_h_15_PRIVATE_PROPERTY_OFFSET \
	Replay_Source_Replay_Teste_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Replay_Source_Replay_Teste_h_15_INCLASS_NO_PURE_DECLS \
	Replay_Source_Replay_Teste_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Replay_Source_Replay_Teste_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
