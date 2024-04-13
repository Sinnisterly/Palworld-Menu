#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_Wetness

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Status_Wetness.BP_Status_Wetness_C.ExecuteUbergraph_BP_Status_Wetness
// 0x0060 (0x0060 - 0x0000)
struct BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIgnoreElement_Ignore;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40FE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40FF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4100[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOwnerActivate_IsActivate;               // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4101[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_DurationTimer_BP_ImplicitCast;  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_DurationTimer_BP_ImplicitCast_1; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness) == 0x000008, "Wrong alignment on BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness");
static_assert(sizeof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness) == 0x000060, "Wrong size on BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, EntryPoint) == 0x000000, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, CallFunc_IsIgnoreElement_Ignore) == 0x000004, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::CallFunc_IsIgnoreElement_Ignore' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, K2Node_Event_DeltaTime) == 0x000018, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, CallFunc_GetOwner_ReturnValue_1) == 0x000020, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000028, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, CallFunc_IsOwnerActivate_IsActivate) == 0x000041, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::CallFunc_IsOwnerActivate_IsActivate' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, CallFunc_Not_PreBool_ReturnValue) == 0x000042, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, CallFunc_BooleanOR_ReturnValue) == 0x000043, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000048, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, K2Node_VariableSet_DurationTimer_BP_ImplicitCast) == 0x000050, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::K2Node_VariableSet_DurationTimer_BP_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness, K2Node_VariableSet_DurationTimer_BP_ImplicitCast_1) == 0x000058, "Member 'BP_Status_Wetness_C_ExecuteUbergraph_BP_Status_Wetness::K2Node_VariableSet_DurationTimer_BP_ImplicitCast_1' has a wrong offset!");

// Function BP_Status_Wetness.BP_Status_Wetness_C.IsOwnerActivate
// 0x0030 (0x0030 - 0x0000)
struct BP_Status_Wetness_C_IsOwnerActivate final
{
public:
	bool                                          IsActivate;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4102[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4103[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActiveActorFlag_ReturnValue;           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Wetness_C_IsOwnerActivate) == 0x000008, "Wrong alignment on BP_Status_Wetness_C_IsOwnerActivate");
static_assert(sizeof(BP_Status_Wetness_C_IsOwnerActivate) == 0x000030, "Wrong size on BP_Status_Wetness_C_IsOwnerActivate");
static_assert(offsetof(BP_Status_Wetness_C_IsOwnerActivate, IsActivate) == 0x000000, "Member 'BP_Status_Wetness_C_IsOwnerActivate::IsActivate' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_IsOwnerActivate, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_Status_Wetness_C_IsOwnerActivate::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_IsOwnerActivate, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Status_Wetness_C_IsOwnerActivate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_IsOwnerActivate, CallFunc_GetOwner_ReturnValue_1) == 0x000018, "Member 'BP_Status_Wetness_C_IsOwnerActivate::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_IsOwnerActivate, K2Node_DynamicCast_AsPal_Character) == 0x000020, "Member 'BP_Status_Wetness_C_IsOwnerActivate::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_IsOwnerActivate, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_Status_Wetness_C_IsOwnerActivate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Status_Wetness_C_IsOwnerActivate, CallFunc_GetActiveActorFlag_ReturnValue) == 0x000029, "Member 'BP_Status_Wetness_C_IsOwnerActivate::CallFunc_GetActiveActorFlag_ReturnValue' has a wrong offset!");

// Function BP_Status_Wetness.BP_Status_Wetness_C.TickStatus
// 0x0004 (0x0004 - 0x0000)
struct BP_Status_Wetness_C_TickStatus final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Wetness_C_TickStatus) == 0x000004, "Wrong alignment on BP_Status_Wetness_C_TickStatus");
static_assert(sizeof(BP_Status_Wetness_C_TickStatus) == 0x000004, "Wrong size on BP_Status_Wetness_C_TickStatus");
static_assert(offsetof(BP_Status_Wetness_C_TickStatus, DeltaTime) == 0x000000, "Member 'BP_Status_Wetness_C_TickStatus::DeltaTime' has a wrong offset!");

}
