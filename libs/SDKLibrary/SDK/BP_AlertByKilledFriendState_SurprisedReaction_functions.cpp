#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AlertByKilledFriendState_SurprisedReaction

#include "Basic.hpp"

#include "BP_AlertByKilledFriendState_SurprisedReaction_classes.hpp"
#include "BP_AlertByKilledFriendState_SurprisedReaction_parameters.hpp"


namespace SDK
{

// Function BP_AlertByKilledFriendState_SurprisedReaction.BP_AlertByKilledFriendState_SurprisedReaction_C.ExecuteUbergraph_BP_AlertByKilledFriendState_SurprisedReaction
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AlertByKilledFriendState_SurprisedReaction_C::ExecuteUbergraph_BP_AlertByKilledFriendState_SurprisedReaction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_SurprisedReaction_C", "ExecuteUbergraph_BP_AlertByKilledFriendState_SurprisedReaction");

	Params::BP_AlertByKilledFriendState_SurprisedReaction_C_ExecuteUbergraph_BP_AlertByKilledFriendState_SurprisedReaction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AlertByKilledFriendState_SurprisedReaction.BP_AlertByKilledFriendState_SurprisedReaction_C.StateEnter
// (Event, Public, BlueprintEvent)

void UBP_AlertByKilledFriendState_SurprisedReaction_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_SurprisedReaction_C", "StateEnter");

	UObject::ProcessEvent(Func, nullptr);
}

}

