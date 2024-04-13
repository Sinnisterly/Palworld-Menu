#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_BaseCampRecoverHungry

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_BaseCampRecoverHungry_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCampRecoverHungry_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_BaseCampRecoverHungry_C_ActionFinished");
static_assert(sizeof(BP_AIAction_BaseCampRecoverHungry_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_BaseCampRecoverHungry_C_ActionFinished");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_BaseCampRecoverHungry_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_BaseCampRecoverHungry_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_BaseCampRecoverHungry_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCampRecoverHungry_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_BaseCampRecoverHungry_C_ActionStart");
static_assert(sizeof(BP_AIAction_BaseCampRecoverHungry_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_BaseCampRecoverHungry_C_ActionStart");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_BaseCampRecoverHungry_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C.Change Recover Hungry Action
// 0x0018 (0x0018 - 0x0000)
struct BP_AIAction_BaseCampRecoverHungry_C_Change_Recover_Hungry_Action final
{
public:
	class UClass*                                 ChildActionClass;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawnActionsComponent*                  CallFunc_GetOwnerComponent_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBaseCampRecoverHungryChildBase* CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCampRecoverHungry_C_Change_Recover_Hungry_Action) == 0x000008, "Wrong alignment on BP_AIAction_BaseCampRecoverHungry_C_Change_Recover_Hungry_Action");
static_assert(sizeof(BP_AIAction_BaseCampRecoverHungry_C_Change_Recover_Hungry_Action) == 0x000018, "Wrong size on BP_AIAction_BaseCampRecoverHungry_C_Change_Recover_Hungry_Action");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_Change_Recover_Hungry_Action, ChildActionClass) == 0x000000, "Member 'BP_AIAction_BaseCampRecoverHungry_C_Change_Recover_Hungry_Action::ChildActionClass' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_Change_Recover_Hungry_Action, CallFunc_GetOwnerComponent_ReturnValue) == 0x000008, "Member 'BP_AIAction_BaseCampRecoverHungry_C_Change_Recover_Hungry_Action::CallFunc_GetOwnerComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_Change_Recover_Hungry_Action, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'BP_AIAction_BaseCampRecoverHungry_C_Change_Recover_Hungry_Action::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C.ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry
// 0x0028 (0x0028 - 0x0000)
struct BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalMapBaseCampWorkerOrderType                K2Node_Event_OrderType;                            // 0x0010(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBattleOrderType_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C5[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry) == 0x000008, "Wrong alignment on BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry");
static_assert(sizeof(BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry) == 0x000028, "Wrong size on BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry, EntryPoint) == 0x000000, "Member 'BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry, K2Node_Event_ControlledPawn_1) == 0x000008, "Member 'BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry, K2Node_Event_OrderType) == 0x000010, "Member 'BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry::K2Node_Event_OrderType' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry, CallFunc_IsBattleOrderType_ReturnValue) == 0x000011, "Member 'BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry::CallFunc_IsBattleOrderType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry, K2Node_Event_ControlledPawn) == 0x000018, "Member 'BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry, K2Node_Event_WithResult) == 0x000020, "Member 'BP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry::K2Node_Event_WithResult' has a wrong offset!");

// Function BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C.NotifyOrderCommand
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_BaseCampRecoverHungry_C_NotifyOrderCommand final
{
public:
	EPalMapBaseCampWorkerOrderType                OrderType;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCampRecoverHungry_C_NotifyOrderCommand) == 0x000001, "Wrong alignment on BP_AIAction_BaseCampRecoverHungry_C_NotifyOrderCommand");
static_assert(sizeof(BP_AIAction_BaseCampRecoverHungry_C_NotifyOrderCommand) == 0x000001, "Wrong size on BP_AIAction_BaseCampRecoverHungry_C_NotifyOrderCommand");
static_assert(offsetof(BP_AIAction_BaseCampRecoverHungry_C_NotifyOrderCommand, OrderType) == 0x000000, "Member 'BP_AIAction_BaseCampRecoverHungry_C_NotifyOrderCommand::OrderType' has a wrong offset!");

}

