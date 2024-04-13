#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionReaction_ElectricShock

#include "Basic.hpp"

#include "BP_ActionReaction_ElectricShock_classes.hpp"
#include "BP_ActionReaction_ElectricShock_parameters.hpp"


namespace SDK
{

// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.ChangeFacial
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalFacialEyeType                       Eye                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionReaction_ElectricShock_C::ChangeFacial(EPalFacialEyeType Eye)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionReaction_ElectricShock_C", "ChangeFacial");

	Params::BP_ActionReaction_ElectricShock_C_ChangeFacial Parms{};

	Parms.Eye = Eye;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.ExecuteUbergraph_BP_ActionReaction_ElectricShock
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionReaction_ElectricShock_C::ExecuteUbergraph_BP_ActionReaction_ElectricShock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionReaction_ElectricShock_C", "ExecuteUbergraph_BP_ActionReaction_ElectricShock");

	Params::BP_ActionReaction_ElectricShock_C_ExecuteUbergraph_BP_ActionReaction_ElectricShock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.FindMontage
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                     NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionReaction_ElectricShock_C::FindMontage(class UAnimMontage** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionReaction_ElectricShock_C", "FindMontage");

	Params::BP_ActionReaction_ElectricShock_C_FindMontage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionReaction_ElectricShock_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionReaction_ElectricShock_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionReaction_ElectricShock_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionReaction_ElectricShock_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.ResetMeshLocation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ActionReaction_ElectricShock_C::ResetMeshLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionReaction_ElectricShock_C", "ResetMeshLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.SetDisable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionReaction_ElectricShock_C::SetDisable(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionReaction_ElectricShock_C", "SetDisable");

	Params::BP_ActionReaction_ElectricShock_C_SetDisable Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionReaction_ElectricShock_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionReaction_ElectricShock_C", "TickAction");

	Params::BP_ActionReaction_ElectricShock_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C.UpdateMeshLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ActionReaction_ElectricShock_C::UpdateMeshLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionReaction_ElectricShock_C", "UpdateMeshLocation");

	UObject::ProcessEvent(Func, nullptr);
}

}

