#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FunnelCharacterAIController

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C.ExecuteUbergraph_BP_FunnelCharacterAIController
// 0x0004 (0x0004 - 0x0000)
struct BP_FunnelCharacterAIController_C_ExecuteUbergraph_BP_FunnelCharacterAIController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FunnelCharacterAIController_C_ExecuteUbergraph_BP_FunnelCharacterAIController) == 0x000004, "Wrong alignment on BP_FunnelCharacterAIController_C_ExecuteUbergraph_BP_FunnelCharacterAIController");
static_assert(sizeof(BP_FunnelCharacterAIController_C_ExecuteUbergraph_BP_FunnelCharacterAIController) == 0x000004, "Wrong size on BP_FunnelCharacterAIController_C_ExecuteUbergraph_BP_FunnelCharacterAIController");
static_assert(offsetof(BP_FunnelCharacterAIController_C_ExecuteUbergraph_BP_FunnelCharacterAIController, EntryPoint) == 0x000000, "Member 'BP_FunnelCharacterAIController_C_ExecuteUbergraph_BP_FunnelCharacterAIController::EntryPoint' has a wrong offset!");

// Function BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C.OnActive
// 0x0040 (0x0040 - 0x0000)
struct BP_FunnelCharacterAIController_C_OnActive final
{
public:
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalFunnelCharacter*                    K2Node_DynamicCast_AsPal_Funnel_Character;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3766[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3767[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionCompositeBase*              CallFunc_GetCompositeRoot_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionFunnelCharacterDefault*     K2Node_DynamicCast_AsPal_AIAction_Funnel_Character_Default; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FunnelCharacterAIController_C_OnActive) == 0x000008, "Wrong alignment on BP_FunnelCharacterAIController_C_OnActive");
static_assert(sizeof(BP_FunnelCharacterAIController_C_OnActive) == 0x000040, "Wrong size on BP_FunnelCharacterAIController_C_OnActive");
static_assert(offsetof(BP_FunnelCharacterAIController_C_OnActive, CallFunc_K2_GetPawn_ReturnValue) == 0x000000, "Member 'BP_FunnelCharacterAIController_C_OnActive::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_OnActive, K2Node_DynamicCast_AsPal_Funnel_Character) == 0x000008, "Member 'BP_FunnelCharacterAIController_C_OnActive::K2Node_DynamicCast_AsPal_Funnel_Character' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_OnActive, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_FunnelCharacterAIController_C_OnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_OnActive, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x000018, "Member 'BP_FunnelCharacterAIController_C_OnActive::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_OnActive, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'BP_FunnelCharacterAIController_C_OnActive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_OnActive, CallFunc_GetCompositeRoot_ReturnValue) == 0x000028, "Member 'BP_FunnelCharacterAIController_C_OnActive::CallFunc_GetCompositeRoot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_OnActive, K2Node_DynamicCast_AsPal_AIAction_Funnel_Character_Default) == 0x000030, "Member 'BP_FunnelCharacterAIController_C_OnActive::K2Node_DynamicCast_AsPal_AIAction_Funnel_Character_Default' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_OnActive, K2Node_DynamicCast_bSuccess_2) == 0x000038, "Member 'BP_FunnelCharacterAIController_C_OnActive::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C.PlayDefaultAction
// 0x0018 (0x0018 - 0x0000)
struct BP_FunnelCharacterAIController_C_PlayDefaultAction final
{
public:
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3768[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionCompositeBase*              CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FunnelCharacterAIController_C_PlayDefaultAction) == 0x000008, "Wrong alignment on BP_FunnelCharacterAIController_C_PlayDefaultAction");
static_assert(sizeof(BP_FunnelCharacterAIController_C_PlayDefaultAction) == 0x000018, "Wrong size on BP_FunnelCharacterAIController_C_PlayDefaultAction");
static_assert(offsetof(BP_FunnelCharacterAIController_C_PlayDefaultAction, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x000000, "Member 'BP_FunnelCharacterAIController_C_PlayDefaultAction::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_PlayDefaultAction, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'BP_FunnelCharacterAIController_C_PlayDefaultAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_PlayDefaultAction, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'BP_FunnelCharacterAIController_C_PlayDefaultAction::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C.SetEnableReticleTargetFlag
// 0x0048 (0x0048 - 0x0000)
struct BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3769[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_FunnelCharacter_C*                  K2Node_DynamicCast_AsBP_Funnel_Character;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_376A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetOwnerPal_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetTrainerPlayer_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_376B[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag) == 0x000008, "Wrong alignment on BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag");
static_assert(sizeof(BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag) == 0x000048, "Wrong size on BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag");
static_assert(offsetof(BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag, Enable) == 0x000000, "Member 'BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag::Enable' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag, CallFunc_K2_GetPawn_ReturnValue) == 0x000008, "Member 'BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag, K2Node_DynamicCast_AsBP_Funnel_Character) == 0x000010, "Member 'BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag::K2Node_DynamicCast_AsBP_Funnel_Character' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag, CallFunc_GetOwnerPal_ReturnValue) == 0x000020, "Member 'BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag::CallFunc_GetOwnerPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag, CallFunc_GetTrainerPlayer_ReturnValue) == 0x000028, "Member 'BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag::CallFunc_GetTrainerPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C.StopAction
// 0x0020 (0x0020 - 0x0000)
struct BP_FunnelCharacterAIController_C_StopAction final
{
public:
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMovementComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FunnelCharacterAIController_C_StopAction) == 0x000008, "Wrong alignment on BP_FunnelCharacterAIController_C_StopAction");
static_assert(sizeof(BP_FunnelCharacterAIController_C_StopAction) == 0x000020, "Wrong size on BP_FunnelCharacterAIController_C_StopAction");
static_assert(offsetof(BP_FunnelCharacterAIController_C_StopAction, CallFunc_K2_GetPawn_ReturnValue) == 0x000000, "Member 'BP_FunnelCharacterAIController_C_StopAction::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_StopAction, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_FunnelCharacterAIController_C_StopAction::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_StopAction, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x000010, "Member 'BP_FunnelCharacterAIController_C_StopAction::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_FunnelCharacterAIController_C_StopAction, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_FunnelCharacterAIController_C_StopAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
