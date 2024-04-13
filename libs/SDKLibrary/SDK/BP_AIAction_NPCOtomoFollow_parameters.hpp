#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_NPCOtomoFollow

#include "Basic.hpp"

#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionAbort
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_ActionAbort final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_ActionAbort) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_ActionAbort");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_ActionAbort) == 0x000008, "Wrong size on BP_AIAction_NPCOtomoFollow_C_ActionAbort");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionAbort, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionAbort::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_ActionFinished");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_NPCOtomoFollow_C_ActionFinished");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_ActionTick");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_NPCOtomoFollow_C_ActionTick");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ExecuteUbergraph_BP_AIAction_NPCOtomoFollow
// 0x0120 (0x0120 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E64[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E65[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MonsterAIController_NPCOtomo_C*     K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E66[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard;     // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E67[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E68[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalAIBlackboard_Common_C*           CallFunc_GetLeaderBB_LeaderPalBrackboard;          // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetSquadLeader_ReturnValue;               // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E69[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalAIController*                       K2Node_DynamicCast_AsPal_AIController;             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E6A[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHate*                               CallFunc_GetHateSystem_ReturnValue;                // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FindMostHateTarget_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E6B[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_4;                     // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E6C[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_3;                     // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoActorWithRadius_ReturnValue;     // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E6D[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E6E[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E6F[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E70[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_3;              // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue_4;              // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MonsterAIController_NPCOtomo_C*     K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo_1; // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow) == 0x000120, "Wrong size on BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, EntryPoint) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_CustomEvent_MovementResult_1) == 0x000010, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo) == 0x000018, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard) == 0x000028, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetLeaderBB_LeaderPalBrackboard) == 0x000050, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetLeaderBB_LeaderPalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetSquadLeader_ReturnValue) == 0x000058, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetSquadLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetController_ReturnValue_1) == 0x000060, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_AsPal_AIController) == 0x000070, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_AsPal_AIController' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetHateSystem_ReturnValue) == 0x000080, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetHateSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_FindMostHateTarget_ReturnValue) == 0x000088, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_FindMostHateTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_CustomEvent_MovementResult) == 0x000090, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, Temp_byte_Variable) == 0x000091, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_ControlledPawn_4) == 0x000098, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_ControlledPawn_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_DeltaSeconds) == 0x0000A0, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_ControlledPawn_3) == 0x0000A8, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_ControlledPawn_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_IsNearTwoActorWithRadius_ReturnValue) == 0x0000B1, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_IsNearTwoActorWithRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B4, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_ControlledPawn_2) == 0x0000C8, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x0000D0, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_IsValid_ReturnValue_2) == 0x0000D8, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_ControlledPawn_1) == 0x0000E0, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetController_ReturnValue_2) == 0x0000E8, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_ControlledPawn) == 0x0000F0, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_Event_WithResult) == 0x0000F8, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetController_ReturnValue_3) == 0x000100, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, CallFunc_GetController_ReturnValue_4) == 0x000108, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::CallFunc_GetController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo_1) == 0x000110, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_AsBP_Monster_AIController_NPCOtomo_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow, K2Node_DynamicCast_bSuccess_3) == 0x000118, "Member 'BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF) == 0x000001, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF) == 0x000001, "Wrong size on BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF, MovementResult) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF::MovementResult' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF
// 0x0001 (0x0001 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF) == 0x000001, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF) == 0x000001, "Wrong size on BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF, MovementResult) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF::MovementResult' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionPause
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_ActionPause final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_ActionPause) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_ActionPause");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_ActionPause) == 0x000008, "Wrong size on BP_AIAction_NPCOtomoFollow_C_ActionPause");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionPause, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionPause::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_NPCOtomoFollow_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_NPCOtomoFollow_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_NPCOtomoFollow_C_ActionStart");
static_assert(sizeof(BP_AIAction_NPCOtomoFollow_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_NPCOtomoFollow_C_ActionStart");
static_assert(offsetof(BP_AIAction_NPCOtomoFollow_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_NPCOtomoFollow_C_ActionStart::ControlledPawn' has a wrong offset!");

}
