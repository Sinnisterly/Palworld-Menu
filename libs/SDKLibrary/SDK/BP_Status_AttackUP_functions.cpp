#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_AttackUP

#include "Basic.hpp"

#include "BP_Status_AttackUP_classes.hpp"
#include "BP_Status_AttackUP_parameters.hpp"


namespace SDK
{

// Function BP_Status_AttackUP.BP_Status_AttackUP_C.ExecuteUbergraph_BP_Status_AttackUP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_AttackUP_C::ExecuteUbergraph_BP_Status_AttackUP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_AttackUP_C", "ExecuteUbergraph_BP_Status_AttackUP");

	Params::BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_AttackUP.BP_Status_AttackUP_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_AttackUP_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_AttackUP_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_AttackUP.BP_Status_AttackUP_C.OnEndStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_AttackUP_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_AttackUP_C", "OnEndStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_AttackUP.BP_Status_AttackUP_C.OnLoaded_FD22363D4A5A9DE9CE4C0BABF4CAA7C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_AttackUP_C::OnLoaded_FD22363D4A5A9DE9CE4C0BABF4CAA7C0(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_AttackUP_C", "OnLoaded_FD22363D4A5A9DE9CE4C0BABF4CAA7C0");

	Params::BP_Status_AttackUP_C_OnLoaded_FD22363D4A5A9DE9CE4C0BABF4CAA7C0 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}
