#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionFunnel_Default

#include "Basic.hpp"

#include "BP_AIActionFunnel_Default_classes.hpp"
#include "BP_AIActionFunnel_Default_parameters.hpp"


namespace SDK
{

// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.CreateSkillActionModule
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UPalFunnelSkillModule>FunnelSkillModuleClass                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_AIActionFunnel_Default_C::CreateSkillActionModule(TSubclassOf<class UPalFunnelSkillModule> FunnelSkillModuleClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "CreateSkillActionModule");

	Params::BP_AIActionFunnel_Default_C_CreateSkillActionModule Parms{};

	Parms.FunnelSkillModuleClass = FunnelSkillModuleClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.ExecuteUbergraph_BP_AIActionFunnel_Default
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionFunnel_Default_C::ExecuteUbergraph_BP_AIActionFunnel_Default(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "ExecuteUbergraph_BP_AIActionFunnel_Default");

	Params::BP_AIActionFunnel_Default_C_ExecuteUbergraph_BP_AIActionFunnel_Default Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.OnTick_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionFunnel_Default_C::OnTick_BP(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "OnTick_BP");

	Params::BP_AIActionFunnel_Default_C_OnTick_BP Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.SetAction
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_Class                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UPalAIActionBase* UBP_AIActionFunnel_Default_C::SetAction(class UClass* Param_Class)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "SetAction");

	Params::BP_AIActionFunnel_Default_C_SetAction Parms{};

	Parms.Param_Class = Param_Class;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.SetActionFollowTrainer
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AIActionFunnel_Default_C::SetActionFollowTrainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "SetActionFollowTrainer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.SetActionSkill
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AIActionFunnel_Default_C::SetActionSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "SetActionSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.SetOtomoFollowAction
// (Event, Protected, BlueprintEvent)

void UBP_AIActionFunnel_Default_C::SetOtomoFollowAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "SetOtomoFollowAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.SetSkillAction
// (Event, Protected, BlueprintEvent)

void UBP_AIActionFunnel_Default_C::SetSkillAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "SetSkillAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionFunnel_Default.BP_AIActionFunnel_Default_C.ShouldSetSkillAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AIActionFunnel_Default_C::ShouldSetSkillAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionFunnel_Default_C", "ShouldSetSkillAction");

	Params::BP_AIActionFunnel_Default_C_ShouldSetSkillAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

