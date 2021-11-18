// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateMachine/Public/StateMachineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateMachineComponent() {}
// Cross Module References
	STATEMACHINE_API UFunction* Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StateMachine();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATEMACHINE_API UFunction* Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature();
	STATEMACHINE_API UFunction* Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature();
	STATEMACHINE_API UFunction* Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature();
	STATEMACHINE_API UClass* Z_Construct_UClass_UStateMachineComponent_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_UStateMachineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics
	{
		struct _Script_StateMachine_eventTickStateSignature_Parms
		{
			float DeltaTime;
			FGameplayTag StateTag;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StateMachine_eventTickStateSignature_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::NewProp_StateTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::NewProp_StateTag = { "StateTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StateMachine_eventTickStateSignature_Parms, StateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::NewProp_StateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::NewProp_StateTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::NewProp_StateTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StateMachine, nullptr, "TickStateSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_StateMachine_eventTickStateSignature_Parms), Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics
	{
		struct _Script_StateMachine_eventEndStateSignature_Parms
		{
			FGameplayTag StateTag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::NewProp_StateTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::NewProp_StateTag = { "StateTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StateMachine_eventEndStateSignature_Parms, StateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::NewProp_StateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::NewProp_StateTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::NewProp_StateTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StateMachine, nullptr, "EndStateSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_StateMachine_eventEndStateSignature_Parms), Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics
	{
		struct _Script_StateMachine_eventInitStateSignature_Parms
		{
			FGameplayTag StateTag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::NewProp_StateTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::NewProp_StateTag = { "StateTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StateMachine_eventInitStateSignature_Parms, StateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::NewProp_StateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::NewProp_StateTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::NewProp_StateTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StateMachine, nullptr, "InitStateSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_StateMachine_eventInitStateSignature_Parms), Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics
	{
		struct _Script_StateMachine_eventStateChangedSignature_Parms
		{
			FGameplayTag NewStateTag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewStateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewStateTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::NewProp_NewStateTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::NewProp_NewStateTag = { "NewStateTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StateMachine_eventStateChangedSignature_Parms, NewStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::NewProp_NewStateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::NewProp_NewStateTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::NewProp_NewStateTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StateMachine, nullptr, "StateChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_StateMachine_eventStateChangedSignature_Parms), Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UStateMachineComponent::execSwitchState)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param__StateTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchState(Z_Param__StateTag);
		P_NATIVE_END;
	}
	void UStateMachineComponent::StaticRegisterNativesUStateMachineComponent()
	{
		UClass* Class = UStateMachineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwitchState", &UStateMachineComponent::execSwitchState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics
	{
		struct StateMachineComponent_eventSwitchState_Parms
		{
			FGameplayTag _StateTag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__StateTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::NewProp__StateTag = { "_StateTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateMachineComponent_eventSwitchState_Parms, _StateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StateMachineComponent_eventSwitchState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StateMachineComponent_eventSwitchState_Parms), &Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::NewProp__StateTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateMachineComponent, nullptr, "SwitchState", nullptr, nullptr, sizeof(StateMachineComponent_eventSwitchState_Parms), Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateMachineComponent_SwitchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateMachineComponent_SwitchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStateMachineComponent_NoRegister()
	{
		return UStateMachineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStateMachineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitStateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InitStateDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndStateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndStateDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickStateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TickStateDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StateChangedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialStateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialStateTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateHistory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateHistory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateHistoryLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateHistoryLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateMachineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StateMachine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateMachineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateMachineComponent_SwitchState, "SwitchState" }, // 4067498333
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StateMachineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_InitStateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_InitStateDelegate = { "InitStateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateMachineComponent, InitStateDelegate), Z_Construct_UDelegateFunction_StateMachine_InitStateSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_InitStateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_InitStateDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_EndStateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_EndStateDelegate = { "EndStateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateMachineComponent, EndStateDelegate), Z_Construct_UDelegateFunction_StateMachine_EndStateSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_EndStateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_EndStateDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_TickStateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_TickStateDelegate = { "TickStateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateMachineComponent, TickStateDelegate), Z_Construct_UDelegateFunction_StateMachine_TickStateSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_TickStateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_TickStateDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateChangedDelegate = { "StateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateMachineComponent, StateChangedDelegate), Z_Construct_UDelegateFunction_StateMachine_StateChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateChangedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateTag_MetaData[] = {
		{ "Category", "StateMachineComponent" },
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateTag = { "StateTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateMachineComponent, StateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_InitialStateTag_MetaData[] = {
		{ "Category", "StateMachineComponent" },
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_InitialStateTag = { "InitialStateTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateMachineComponent, InitialStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_InitialStateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_InitialStateTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "StateMachineComponent" },
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UStateMachineComponent*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStateMachineComponent), &Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_bDebug_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateHistory_Inner = { "StateHistory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateHistory_MetaData[] = {
		{ "Category", "StateMachineComponent" },
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateHistory = { "StateHistory", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateMachineComponent, StateHistory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateHistory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateHistoryLength_MetaData[] = {
		{ "Category", "StateMachineComponent" },
		{ "ModuleRelativePath", "Public/StateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateHistoryLength = { "StateHistoryLength", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateMachineComponent, StateHistoryLength), METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateHistoryLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateHistoryLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateMachineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_InitStateDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_EndStateDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_TickStateDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_InitialStateTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateHistory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineComponent_Statics::NewProp_StateHistoryLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateMachineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateMachineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStateMachineComponent_Statics::ClassParams = {
		&UStateMachineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStateMachineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStateMachineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateMachineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStateMachineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStateMachineComponent, 2438787192);
	template<> STATEMACHINE_API UClass* StaticClass<UStateMachineComponent>()
	{
		return UStateMachineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStateMachineComponent(Z_Construct_UClass_UStateMachineComponent, &UStateMachineComponent::StaticClass, TEXT("/Script/StateMachine"), TEXT("UStateMachineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateMachineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
