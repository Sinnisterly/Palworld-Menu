#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_Status_Vines

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_VisualEffect_Status_Vines.BP_VisualEffect_Status_Vines_C.ExecuteUbergraph_BP_VisualEffect_Status_Vines
// 0x0150 (0x0150 - 0x0000)
struct BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41EE[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41EF[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_GetAttachInformationByBodyLocation_attachComponent; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetAttachInformationByBodyLocation_attachBoneName; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41F0[0x8];                                     // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform; // 0x0050(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAttachInformationByBodyLocation_ReturnValue; // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41F1[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      K2Node_DynamicCast_AsCapsule_Collision;            // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41F2[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41F3[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines) == 0x000010, "Wrong alignment on BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines");
static_assert(sizeof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines) == 0x000150, "Wrong size on BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, EntryPoint) == 0x000000, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, K2Node_Event_DeltaTime) == 0x000004, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_GetFloatValue_ReturnValue) == 0x00002C, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_GetAttachInformationByBodyLocation_attachComponent) == 0x000038, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_GetAttachInformationByBodyLocation_attachComponent' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_GetAttachInformationByBodyLocation_attachBoneName) == 0x000040, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_GetAttachInformationByBodyLocation_attachBoneName' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform) == 0x000050, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_GetAttachInformationByBodyLocation_ReturnValue) == 0x0000B0, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_GetAttachInformationByBodyLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_BreakTransform_Location) == 0x0000B8, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_BreakTransform_Rotation) == 0x0000D0, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_BreakTransform_Scale) == 0x0000E8, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_GetOwner_ReturnValue_1) == 0x000100, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000108, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000110, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, K2Node_DynamicCast_AsCapsule_Collision) == 0x000118, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::K2Node_DynamicCast_AsCapsule_Collision' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000128, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000130, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000138, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000140, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000148, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x00014C, "Member 'BP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");

// Function BP_VisualEffect_Status_Vines.BP_VisualEffect_Status_Vines_C.TerminatingTickVisualEffect
// 0x0004 (0x0004 - 0x0000)
struct BP_VisualEffect_Status_Vines_C_TerminatingTickVisualEffect final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VisualEffect_Status_Vines_C_TerminatingTickVisualEffect) == 0x000004, "Wrong alignment on BP_VisualEffect_Status_Vines_C_TerminatingTickVisualEffect");
static_assert(sizeof(BP_VisualEffect_Status_Vines_C_TerminatingTickVisualEffect) == 0x000004, "Wrong size on BP_VisualEffect_Status_Vines_C_TerminatingTickVisualEffect");
static_assert(offsetof(BP_VisualEffect_Status_Vines_C_TerminatingTickVisualEffect, DeltaTime) == 0x000000, "Member 'BP_VisualEffect_Status_Vines_C_TerminatingTickVisualEffect::DeltaTime' has a wrong offset!");

}
