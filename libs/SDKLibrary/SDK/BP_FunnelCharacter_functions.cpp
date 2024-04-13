#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FunnelCharacter

#include "Basic.hpp"

#include "BP_FunnelCharacter_classes.hpp"
#include "BP_FunnelCharacter_parameters.hpp"


namespace SDK
{

// Function BP_FunnelCharacter.BP_FunnelCharacter_C.ExecuteUbergraph_BP_FunnelCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FunnelCharacter_C::ExecuteUbergraph_BP_FunnelCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FunnelCharacter_C", "ExecuteUbergraph_BP_FunnelCharacter");

	Params::BP_FunnelCharacter_C_ExecuteUbergraph_BP_FunnelCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FunnelCharacter.BP_FunnelCharacter_C.OnActive
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FunnelCharacter_C::OnActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FunnelCharacter_C", "OnActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FunnelCharacter.BP_FunnelCharacter_C.OnInactive
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FunnelCharacter_C::OnInactive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FunnelCharacter_C", "OnInactive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FunnelCharacter.BP_FunnelCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FunnelCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FunnelCharacter_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FunnelCharacter.BP_FunnelCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FunnelCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FunnelCharacter_C", "ReceiveTick");

	Params::BP_FunnelCharacter_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FunnelCharacter.BP_FunnelCharacter_C.SetLocationNearTrainer
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FunnelCharacter_C::SetLocationNearTrainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FunnelCharacter_C", "SetLocationNearTrainer");

	UObject::ProcessEvent(Func, nullptr);
}

}
