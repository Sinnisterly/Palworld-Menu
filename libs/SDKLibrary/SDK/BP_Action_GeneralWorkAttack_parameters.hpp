#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_GeneralWorkAttack

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_GeneralWorkAttack.BP_Action_GeneralWorkAttack_C.OnSpawnEffect
// 0x02C8 (0x02C8 - 0x0000)
struct BP_Action_GeneralWorkAttack_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Param_Effect;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_373F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3740[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_1;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_GeneralWork_C*          K2Node_DynamicCast_AsBP_Skill_Effect_General_Work; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3741[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_2;            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_3;            // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_GeneralWork_C*          K2Node_DynamicCast_AsBP_Skill_Effect_General_Work_1; // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3742[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3743[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_4;            // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                     CallFunc_LineTraceMulti_OutHits;                   // 0x00E8(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceMulti_ReturnValue;               // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3744[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_Array_Get_Item;                           // 0x0100(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3745[0x1];                                     // 0x01EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3746[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0268(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3747[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x02A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_Action_GeneralWorkAttack_C_OnSpawnEffect");
static_assert(sizeof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect) == 0x0002C8, "Wrong size on BP_Action_GeneralWorkAttack_C_OnSpawnEffect");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, Param_Effect) == 0x000000, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::Param_Effect' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_GetActionTarget_ReturnValue) == 0x000010, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_GetActionTarget_ReturnValue_1) == 0x000020, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_GetActionTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, K2Node_DynamicCast_AsBP_Skill_Effect_General_Work) == 0x000040, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::K2Node_DynamicCast_AsBP_Skill_Effect_General_Work' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_GetActionTarget_ReturnValue_2) == 0x000050, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_GetActionTarget_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000058, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_GetActionTarget_ReturnValue_3) == 0x000070, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_GetActionTarget_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, K2Node_DynamicCast_AsBP_Skill_Effect_General_Work_1) == 0x000078, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::K2Node_DynamicCast_AsBP_Skill_Effect_General_Work_1' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, Temp_int_Loop_Counter_Variable) == 0x000084, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_GetActionCharacter_ReturnValue) == 0x000088, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, K2Node_MakeArray_Array) == 0x000090, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_Add_IntInt_ReturnValue) == 0x0000A0, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_GetActionCharacter_ReturnValue_1) == 0x0000A8, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_GetActionTarget_ReturnValue_4) == 0x0000B0, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_GetActionTarget_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0000B8, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x0000D0, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_LineTraceMulti_OutHits) == 0x0000E8, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_LineTraceMulti_OutHits' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_LineTraceMulti_ReturnValue) == 0x0000F8, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_LineTraceMulti_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_Array_Length_ReturnValue) == 0x0000FC, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_Array_Get_Item) == 0x000100, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_Less_IntInt_ReturnValue) == 0x0001E8, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_bBlockingHit) == 0x0001E9, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001EA, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_Time) == 0x0001EC, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_Distance) == 0x0001F0, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_Location) == 0x0001F8, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_ImpactPoint) == 0x000210, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_Normal) == 0x000228, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_ImpactNormal) == 0x000240, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_PhysMat) == 0x000258, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_HitActor) == 0x000260, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_HitComponent) == 0x000268, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_HitBoneName) == 0x000270, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_BoneName) == 0x000278, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_HitItem) == 0x000280, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_ElementIndex) == 0x000284, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_FaceIndex) == 0x000288, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_TraceStart) == 0x000290, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_BreakHitResult_TraceEnd) == 0x0002A8, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_Action_GeneralWorkAttack_C_OnSpawnEffect, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002C0, "Member 'BP_Action_GeneralWorkAttack_C_OnSpawnEffect::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

}
