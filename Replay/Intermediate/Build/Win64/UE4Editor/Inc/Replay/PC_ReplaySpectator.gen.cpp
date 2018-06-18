// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PC_ReplaySpectator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePC_ReplaySpectator() {}
// Cross Module References
	REPLAY_API UClass* Z_Construct_UClass_APC_ReplaySpectator_NoRegister();
	REPLAY_API UClass* Z_Construct_UClass_APC_ReplaySpectator();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Replay();
	REPLAY_API UFunction* Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds();
	REPLAY_API UFunction* Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds();
	REPLAY_API UFunction* Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState();
	REPLAY_API UFunction* Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate();
	REPLAY_API UFunction* Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds();
// End Cross Module References
	void APC_ReplaySpectator::StaticRegisterNativesAPC_ReplaySpectator()
	{
		UClass* Class = APC_ReplaySpectator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentReplayCurrentTimeInSeconds", &APC_ReplaySpectator::execGetCurrentReplayCurrentTimeInSeconds },
			{ "GetCurrentReplayTotalTimeInSeconds", &APC_ReplaySpectator::execGetCurrentReplayTotalTimeInSeconds },
			{ "SetCurrentReplayPausedState", &APC_ReplaySpectator::execSetCurrentReplayPausedState },
			{ "SetCurrentReplayPlayRate", &APC_ReplaySpectator::execSetCurrentReplayPlayRate },
			{ "SetCurrentReplayTimeToSeconds", &APC_ReplaySpectator::execSetCurrentReplayTimeToSeconds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds()
	{
		struct PC_ReplaySpectator_eventGetCurrentReplayCurrentTimeInSeconds_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PC_ReplaySpectator_eventGetCurrentReplayCurrentTimeInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CurrentReplay" },
				{ "ModuleRelativePath", "PC_ReplaySpectator.h" },
				{ "ToolTip", "Gets the Second we are currently watching in the Replay" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_ReplaySpectator, "GetCurrentReplayCurrentTimeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PC_ReplaySpectator_eventGetCurrentReplayCurrentTimeInSeconds_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds()
	{
		struct PC_ReplaySpectator_eventGetCurrentReplayTotalTimeInSeconds_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PC_ReplaySpectator_eventGetCurrentReplayTotalTimeInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CurrentReplay" },
				{ "ModuleRelativePath", "PC_ReplaySpectator.h" },
				{ "ToolTip", "Gets the Max Number of Seconds that were recorded in the current Replay" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_ReplaySpectator, "GetCurrentReplayTotalTimeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PC_ReplaySpectator_eventGetCurrentReplayTotalTimeInSeconds_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState()
	{
		struct PC_ReplaySpectator_eventSetCurrentReplayPausedState_Parms
		{
			bool bDoPause;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PC_ReplaySpectator_eventSetCurrentReplayPausedState_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PC_ReplaySpectator_eventSetCurrentReplayPausedState_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bDoPause_SetBit = [](void* Obj){ ((PC_ReplaySpectator_eventSetCurrentReplayPausedState_Parms*)Obj)->bDoPause = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoPause = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoPause", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PC_ReplaySpectator_eventSetCurrentReplayPausedState_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoPause_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoPause,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CurrentReplay" },
				{ "ModuleRelativePath", "PC_ReplaySpectator.h" },
				{ "ToolTip", "Set the Paused State of the Running Replay to bDoPause. Return new Pause State" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_ReplaySpectator, "SetCurrentReplayPausedState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PC_ReplaySpectator_eventSetCurrentReplayPausedState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate()
	{
		struct PC_ReplaySpectator_eventSetCurrentReplayPlayRate_Parms
		{
			float PlayRate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PC_ReplaySpectator_eventSetCurrentReplayPlayRate_Parms, PlayRate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CurrentReplay" },
				{ "CPP_Default_PlayRate", "1.000000" },
				{ "ModuleRelativePath", "PC_ReplaySpectator.h" },
				{ "ToolTip", "Changes the PlayRate of the Replay we are watching, enabling FastForward or SlowMotion" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_ReplaySpectator, "SetCurrentReplayPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PC_ReplaySpectator_eventSetCurrentReplayPlayRate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds()
	{
		struct PC_ReplaySpectator_eventSetCurrentReplayTimeToSeconds_Parms
		{
			int32 Seconds;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seconds = { UE4CodeGen_Private::EPropertyClass::Int, "Seconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PC_ReplaySpectator_eventSetCurrentReplayTimeToSeconds_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Seconds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CurrentReplay" },
				{ "ModuleRelativePath", "PC_ReplaySpectator.h" },
				{ "ToolTip", "Jumps to the specified Second in the Replay we are watching" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APC_ReplaySpectator, "SetCurrentReplayTimeToSeconds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PC_ReplaySpectator_eventSetCurrentReplayTimeToSeconds_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APC_ReplaySpectator_NoRegister()
	{
		return APC_ReplaySpectator::StaticClass();
	}
	UClass* Z_Construct_UClass_APC_ReplaySpectator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_Replay,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayCurrentTimeInSeconds, "GetCurrentReplayCurrentTimeInSeconds" }, // 1272515265
				{ &Z_Construct_UFunction_APC_ReplaySpectator_GetCurrentReplayTotalTimeInSeconds, "GetCurrentReplayTotalTimeInSeconds" }, // 2884788115
				{ &Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPausedState, "SetCurrentReplayPausedState" }, // 2340154274
				{ &Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayPlayRate, "SetCurrentReplayPlayRate" }, // 2659890083
				{ &Z_Construct_UFunction_APC_ReplaySpectator_SetCurrentReplayTimeToSeconds, "SetCurrentReplayTimeToSeconds" }, // 2757730788
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PC_ReplaySpectator.h" },
				{ "ModuleRelativePath", "PC_ReplaySpectator.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APC_ReplaySpectator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APC_ReplaySpectator::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APC_ReplaySpectator, 2379646395);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APC_ReplaySpectator(Z_Construct_UClass_APC_ReplaySpectator, &APC_ReplaySpectator::StaticClass, TEXT("/Script/Replay"), TEXT("APC_ReplaySpectator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APC_ReplaySpectator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
