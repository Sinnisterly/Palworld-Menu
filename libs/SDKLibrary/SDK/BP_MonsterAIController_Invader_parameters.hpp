#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MonsterAIController_Invader

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.BindOnInvaderArrivedDelegate
// 0x0010 (0x0010 - 0x0000)
struct BP_MonsterAIController_Invader_C_BindOnInvaderArrivedDelegate final
{
public:
	TDelegate<void()>                             Event;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_Invader_C_BindOnInvaderArrivedDelegate) == 0x000004, "Wrong alignment on BP_MonsterAIController_Invader_C_BindOnInvaderArrivedDelegate");
static_assert(sizeof(BP_MonsterAIController_Invader_C_BindOnInvaderArrivedDelegate) == 0x000010, "Wrong size on BP_MonsterAIController_Invader_C_BindOnInvaderArrivedDelegate");
static_assert(offsetof(BP_MonsterAIController_Invader_C_BindOnInvaderArrivedDelegate, Event) == 0x000000, "Member 'BP_MonsterAIController_Invader_C_BindOnInvaderArrivedDelegate::Event' has a wrong offset!");

// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.ExecuteUbergraph_BP_MonsterAIController_Invader
// 0x00E0 (0x00E0 - 0x0000)
struct BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_Event_Event;                                // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalCharacter* InCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C1[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C2[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_CustomEvent_InCharacter;                    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDeadInfo                           K2Node_CustomEvent_DeadInfo;                       // 0x0070(0x0050)(NoDestructor)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue;             // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_3;                 // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader) == 0x000008, "Wrong alignment on BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader");
static_assert(sizeof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader) == 0x0000E0, "Wrong size on BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, EntryPoint) == 0x000000, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, K2Node_Event_Event) == 0x000004, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::K2Node_Event_Event' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, K2Node_Event_PossessedPawn) == 0x000038, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, CallFunc_K2_GetPawn_ReturnValue) == 0x000040, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, K2Node_DynamicCast_AsPal_Character) == 0x000048, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, K2Node_CustomEvent_InCharacter) == 0x000058, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::K2Node_CustomEvent_InCharacter' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue) == 0x000060, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000068, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, K2Node_CustomEvent_DeadInfo) == 0x000070, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::K2Node_CustomEvent_DeadInfo' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, CallFunc_GetComponentByClass_ReturnValue) == 0x0000C0, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, CallFunc_GetBattleManager_ReturnValue) == 0x0000C8, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, CallFunc_K2_GetPawn_ReturnValue_2) == 0x0000D0, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader, CallFunc_K2_GetPawn_ReturnValue_3) == 0x0000D8, "Member 'BP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader::CallFunc_K2_GetPawn_ReturnValue_3' has a wrong offset!");

// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.GetLeaderBB
// 0x0020 (0x0020 - 0x0000)
struct BP_MonsterAIController_Invader_C_GetLeaderBB final
{
public:
	class UBP_PalAIBlackboard_Common_C*           LeaderPalBrackboard;                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                   CallFunc_GetLeaderPalBlackboard_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_Invader_C_GetLeaderBB) == 0x000008, "Wrong alignment on BP_MonsterAIController_Invader_C_GetLeaderBB");
static_assert(sizeof(BP_MonsterAIController_Invader_C_GetLeaderBB) == 0x000020, "Wrong size on BP_MonsterAIController_Invader_C_GetLeaderBB");
static_assert(offsetof(BP_MonsterAIController_Invader_C_GetLeaderBB, LeaderPalBrackboard) == 0x000000, "Member 'BP_MonsterAIController_Invader_C_GetLeaderBB::LeaderPalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_GetLeaderBB, CallFunc_GetLeaderPalBlackboard_ReturnValue) == 0x000008, "Member 'BP_MonsterAIController_Invader_C_GetLeaderBB::CallFunc_GetLeaderPalBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_GetLeaderBB, K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common) == 0x000010, "Member 'BP_MonsterAIController_Invader_C_GetLeaderBB::K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_GetLeaderBB, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_MonsterAIController_Invader_C_GetLeaderBB::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.GetMyBB
// 0x0020 (0x0020 - 0x0000)
struct BP_MonsterAIController_Invader_C_GetMyBB final
{
public:
	class UBP_PalAIBlackboard_Common_C*           PalBrackboard;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                   CallFunc_GetMyPalBlackboard_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_Invader_C_GetMyBB) == 0x000008, "Wrong alignment on BP_MonsterAIController_Invader_C_GetMyBB");
static_assert(sizeof(BP_MonsterAIController_Invader_C_GetMyBB) == 0x000020, "Wrong size on BP_MonsterAIController_Invader_C_GetMyBB");
static_assert(offsetof(BP_MonsterAIController_Invader_C_GetMyBB, PalBrackboard) == 0x000000, "Member 'BP_MonsterAIController_Invader_C_GetMyBB::PalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_GetMyBB, CallFunc_GetMyPalBlackboard_ReturnValue) == 0x000008, "Member 'BP_MonsterAIController_Invader_C_GetMyBB::CallFunc_GetMyPalBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_GetMyBB, K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common) == 0x000010, "Member 'BP_MonsterAIController_Invader_C_GetMyBB::K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_GetMyBB, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_MonsterAIController_Invader_C_GetMyBB::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_MonsterAIController_Invader_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_Invader_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_MonsterAIController_Invader_C_ReceivePossess");
static_assert(sizeof(BP_MonsterAIController_Invader_C_ReceivePossess) == 0x000008, "Wrong size on BP_MonsterAIController_Invader_C_ReceivePossess");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_MonsterAIController_Invader_C_ReceivePossess::PossessedPawn' has a wrong offset!");

// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.ReturnSpawnedPoint
// 0x0080 (0x0080 - 0x0000)
struct BP_MonsterAIController_Invader_C_ReturnSpawnedPoint final
{
public:
	struct FVector                                GoalLocation;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0018(0x0050)(NoDestructor)
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C3[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_Invader_C_ReturnSpawnedPoint) == 0x000008, "Wrong alignment on BP_MonsterAIController_Invader_C_ReturnSpawnedPoint");
static_assert(sizeof(BP_MonsterAIController_Invader_C_ReturnSpawnedPoint) == 0x000080, "Wrong size on BP_MonsterAIController_Invader_C_ReturnSpawnedPoint");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ReturnSpawnedPoint, GoalLocation) == 0x000000, "Member 'BP_MonsterAIController_Invader_C_ReturnSpawnedPoint::GoalLocation' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ReturnSpawnedPoint, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000018, "Member 'BP_MonsterAIController_Invader_C_ReturnSpawnedPoint::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ReturnSpawnedPoint, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x000068, "Member 'BP_MonsterAIController_Invader_C_ReturnSpawnedPoint::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ReturnSpawnedPoint, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_MonsterAIController_Invader_C_ReturnSpawnedPoint::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_ReturnSpawnedPoint, CallFunc_SetActionClassParameter_ReturnValue) == 0x000078, "Member 'BP_MonsterAIController_Invader_C_ReturnSpawnedPoint::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");

// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.Setup
// 0x0018 (0x0018 - 0x0000)
struct BP_MonsterAIController_Invader_C_Setup final
{
public:
	struct FVector                                BaseCampPos;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_Invader_C_Setup) == 0x000008, "Wrong alignment on BP_MonsterAIController_Invader_C_Setup");
static_assert(sizeof(BP_MonsterAIController_Invader_C_Setup) == 0x000018, "Wrong size on BP_MonsterAIController_Invader_C_Setup");
static_assert(offsetof(BP_MonsterAIController_Invader_C_Setup, BaseCampPos) == 0x000000, "Member 'BP_MonsterAIController_Invader_C_Setup::BaseCampPos' has a wrong offset!");

// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.StartMartch
// 0x00D8 (0x00D8 - 0x0000)
struct BP_MonsterAIController_Invader_C_StartMartch final
{
public:
	struct FVector                                GoalPosition;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0020(0x0050)(NoDestructor)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter_1;   // 0x0070(0x0050)(NoDestructor)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue_1;    // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_Invader_C_StartMartch) == 0x000008, "Wrong alignment on BP_MonsterAIController_Invader_C_StartMartch");
static_assert(sizeof(BP_MonsterAIController_Invader_C_StartMartch) == 0x0000D8, "Wrong size on BP_MonsterAIController_Invader_C_StartMartch");
static_assert(offsetof(BP_MonsterAIController_Invader_C_StartMartch, GoalPosition) == 0x000000, "Member 'BP_MonsterAIController_Invader_C_StartMartch::GoalPosition' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_StartMartch, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_MonsterAIController_Invader_C_StartMartch::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_StartMartch, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000020, "Member 'BP_MonsterAIController_Invader_C_StartMartch::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_StartMartch, K2Node_MakeStruct_PalAIActionDynamicParameter_1) == 0x000070, "Member 'BP_MonsterAIController_Invader_C_StartMartch::K2Node_MakeStruct_PalAIActionDynamicParameter_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_StartMartch, CallFunc_SetActionClassParameter_ReturnValue) == 0x0000C0, "Member 'BP_MonsterAIController_Invader_C_StartMartch::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_StartMartch, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0000C8, "Member 'BP_MonsterAIController_Invader_C_StartMartch::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Invader_C_StartMartch, CallFunc_SetActionClassParameter_ReturnValue_1) == 0x0000D0, "Member 'BP_MonsterAIController_Invader_C_StartMartch::CallFunc_SetActionClassParameter_ReturnValue_1' has a wrong offset!");

// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.�������_1
// 0x0008 (0x0008 - 0x0000)
struct BP_MonsterAIController_Invader_C__________1 final
{
public:
	class APalCharacter*                          InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_Invader_C__________1) == 0x000008, "Wrong alignment on BP_MonsterAIController_Invader_C__________1");
static_assert(sizeof(BP_MonsterAIController_Invader_C__________1) == 0x000008, "Wrong size on BP_MonsterAIController_Invader_C__________1");
static_assert(offsetof(BP_MonsterAIController_Invader_C__________1, InCharacter) == 0x000000, "Member 'BP_MonsterAIController_Invader_C__________1::InCharacter' has a wrong offset!");

// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.�������_OnDead
// 0x0050 (0x0050 - 0x0000)
struct BP_MonsterAIController_Invader_C__________OnDead final
{
public:
	struct FPalDeadInfo                           DeadInfo;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_MonsterAIController_Invader_C__________OnDead) == 0x000008, "Wrong alignment on BP_MonsterAIController_Invader_C__________OnDead");
static_assert(sizeof(BP_MonsterAIController_Invader_C__________OnDead) == 0x000050, "Wrong size on BP_MonsterAIController_Invader_C__________OnDead");
static_assert(offsetof(BP_MonsterAIController_Invader_C__________OnDead, DeadInfo) == 0x000000, "Member 'BP_MonsterAIController_Invader_C__________OnDead::DeadInfo' has a wrong offset!");

}

