#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPalLiftup

#include "Basic.hpp"

#include "BP_ActionPalLiftup_classes.hpp"
#include "BP_ActionPalLiftup_parameters.hpp"


namespace SDK
{

// Function BP_ActionPalLiftup.BP_ActionPalLiftup_C.ExecuteUbergraph_BP_ActionPalLiftup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPalLiftup_C::ExecuteUbergraph_BP_ActionPalLiftup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPalLiftup_C", "ExecuteUbergraph_BP_ActionPalLiftup");

	Params::BP_ActionPalLiftup_C_ExecuteUbergraph_BP_ActionPalLiftup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionPalLiftup.BP_ActionPalLiftup_C.OnBreakAction
// (Event, Public, BlueprintEvent)

void UBP_ActionPalLiftup_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPalLiftup_C", "OnBreakAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionPalLiftup.BP_ActionPalLiftup_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionPalLiftup_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPalLiftup_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionPalLiftup.BP_ActionPalLiftup_C.PlayStartLiftupMontage
// (Event, Protected, BlueprintEvent)

void UBP_ActionPalLiftup_C::PlayStartLiftupMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPalLiftup_C", "PlayStartLiftupMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionPalLiftup.BP_ActionPalLiftup_C.StopAnimation
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_ActionPalLiftup_C::StopAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPalLiftup_C", "StopAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}
