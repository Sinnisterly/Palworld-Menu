#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_Electrical

#include "Basic.hpp"

#include "BP_Status_Electrical_classes.hpp"
#include "BP_Status_Electrical_parameters.hpp"


namespace SDK
{

// Function BP_Status_Electrical.BP_Status_Electrical_C.ExecuteUbergraph_BP_Status_Electrical
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Electrical_C::ExecuteUbergraph_BP_Status_Electrical(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Electrical_C", "ExecuteUbergraph_BP_Status_Electrical");

	Params::BP_Status_Electrical_C_ExecuteUbergraph_BP_Status_Electrical Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_Electrical.BP_Status_Electrical_C.OnBeginSomeStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_Electrical_C::OnBeginSomeStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Electrical_C", "OnBeginSomeStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Electrical.BP_Status_Electrical_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_Electrical_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Electrical_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_Electrical.BP_Status_Electrical_C.PlayElecShockAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Status_Electrical_C::PlayElecShockAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_Electrical_C", "PlayElecShockAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

