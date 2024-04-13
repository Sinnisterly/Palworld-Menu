#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettings_ListContentSwitch

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_OptionSettings_ListContentSwitch.WBP_OptionSettings_ListContentSwitch_C.Setup
// 0x0001 (0x0001 - 0x0000)
struct WBP_OptionSettings_ListContentSwitch_C_Setup final
{
public:
	bool                                          Param_IsOn;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContentSwitch_C_Setup) == 0x000001, "Wrong alignment on WBP_OptionSettings_ListContentSwitch_C_Setup");
static_assert(sizeof(WBP_OptionSettings_ListContentSwitch_C_Setup) == 0x000001, "Wrong size on WBP_OptionSettings_ListContentSwitch_C_Setup");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_Setup, Param_IsOn) == 0x000000, "Member 'WBP_OptionSettings_ListContentSwitch_C_Setup::Param_IsOn' has a wrong offset!");

// Function WBP_OptionSettings_ListContentSwitch.WBP_OptionSettings_ListContentSwitch_C.OnSwitcherChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_OptionSettings_ListContentSwitch_C_OnSwitcherChanged__DelegateSignature final
{
public:
	bool                                          Param_IsOn;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContentSwitch_C_OnSwitcherChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_OptionSettings_ListContentSwitch_C_OnSwitcherChanged__DelegateSignature");
static_assert(sizeof(WBP_OptionSettings_ListContentSwitch_C_OnSwitcherChanged__DelegateSignature) == 0x000001, "Wrong size on WBP_OptionSettings_ListContentSwitch_C_OnSwitcherChanged__DelegateSignature");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_OnSwitcherChanged__DelegateSignature, Param_IsOn) == 0x000000, "Member 'WBP_OptionSettings_ListContentSwitch_C_OnSwitcherChanged__DelegateSignature::Param_IsOn' has a wrong offset!");

// Function WBP_OptionSettings_ListContentSwitch.WBP_OptionSettings_ListContentSwitch_C.IsOn
// 0x0001 (0x0001 - 0x0000)
struct WBP_OptionSettings_ListContentSwitch_C_IsOn final
{
public:
	bool                                          Param_IsOn;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContentSwitch_C_IsOn) == 0x000001, "Wrong alignment on WBP_OptionSettings_ListContentSwitch_C_IsOn");
static_assert(sizeof(WBP_OptionSettings_ListContentSwitch_C_IsOn) == 0x000001, "Wrong size on WBP_OptionSettings_ListContentSwitch_C_IsOn");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_IsOn, Param_IsOn) == 0x000000, "Member 'WBP_OptionSettings_ListContentSwitch_C_IsOn::Param_IsOn' has a wrong offset!");

// Function WBP_OptionSettings_ListContentSwitch.WBP_OptionSettings_ListContentSwitch_C.ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch
// 0x0068 (0x0068 - 0x0000)
struct WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44AB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_2;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_3;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsOn;                           // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default_1;                           // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44AC[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_5;               // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_4;               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_3;               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_2;               // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch) == 0x000008, "Wrong alignment on WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch");
static_assert(sizeof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch) == 0x000068, "Wrong size on WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, EntryPoint) == 0x000000, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, Temp_bool_Variable) == 0x000010, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, Temp_byte_Variable) == 0x000011, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, Temp_byte_Variable_1) == 0x000012, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, Temp_bool_Variable_1) == 0x000013, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, Temp_byte_Variable_2) == 0x000014, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, Temp_byte_Variable_3) == 0x000015, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, K2Node_CustomEvent_IsOn) == 0x000016, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::K2Node_CustomEvent_IsOn' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, K2Node_Select_Default) == 0x000017, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000030, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, K2Node_Select_Default_1) == 0x000031, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, CallFunc_PlayAnimation_ReturnValue_3) == 0x000038, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, K2Node_ComponentBoundEvent_Button_5) == 0x000040, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::K2Node_ComponentBoundEvent_Button_5' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, K2Node_ComponentBoundEvent_Button_4) == 0x000048, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::K2Node_ComponentBoundEvent_Button_4' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, K2Node_ComponentBoundEvent_Button_3) == 0x000050, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::K2Node_ComponentBoundEvent_Button_3' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, K2Node_ComponentBoundEvent_Button_2) == 0x000058, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch, K2Node_ComponentBoundEvent_Button_1) == 0x000060, "Member 'WBP_OptionSettings_ListContentSwitch_C_ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");

// Function WBP_OptionSettings_ListContentSwitch.WBP_OptionSettings_ListContentSwitch_C.BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_OptionSettings_ListContentSwitch.WBP_OptionSettings_ListContentSwitch_C.BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_OptionSettings_ListContentSwitch.WBP_OptionSettings_ListContentSwitch_C.BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_OptionSettings_ListContentSwitch.WBP_OptionSettings_ListContentSwitch_C.BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_OptionSettings_ListContentSwitch.WBP_OptionSettings_ListContentSwitch_C.BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_OptionSettings_ListContentSwitch.WBP_OptionSettings_ListContentSwitch_C.BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_OptionSettings_ListContentSwitch_C_BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

}

