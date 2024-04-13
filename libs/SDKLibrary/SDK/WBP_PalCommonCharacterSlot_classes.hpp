#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCommonCharacterSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_PalCharacterSlotBase_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalCommonCharacterSlot.WBP_PalCommonCharacterSlot_C
// 0x00C0 (0x05E0 - 0x0520)
class UWBP_PalCommonCharacterSlot_C final : public UWBP_PalCharacterSlotBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalCommonCharacterSlot_C;       // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_SeedIcon;                                      // 0x0528(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_LowHealthLoop;                                 // 0x0530(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_SleepIcon;                                     // 0x0538(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_MealIcon;                                      // 0x0540(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_WorkIcon;                                      // 0x0548(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background_circle_b;                               // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_64;                                          // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_229;                                         // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconPalWork;                                 // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Meal;                                        // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PalBattleImage;                              // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PalDying;                                    // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PalLowHealth;                                // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PalSleep;                                    // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Rare;                                        // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Strong;                                      // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Revive;                                    // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_HPPercent;                                    // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_ReviveTimer;                                  // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterIcon_C*          WBP_PalCommonCharacterIcon;                        // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          LastWorkDetail;                                    // 0x05D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBattleModeDisplay;                               // 0x05D1(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLowHealthBlink;                                  // 0x05D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDisplayHealthPercent;                            // 0x05D3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDisplayRarity;                                   // 0x05D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_478F[0x3];                                     // 0x05D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ChachedLastHPPercent;                              // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_BeginEat();
	void AnmEvent_BeginSleep();
	void AnmEvent_EndEat();
	void AnmEvent_EndSleep();
	void AnmEvent_EndWork();
	void AnmEvent_StartLowHealthLoop();
	void AnmEvent_StartWork();
	void AnmEvent_StopLowHeathLoop();
	void ExecuteUbergraph_WBP_PalCommonCharacterSlot(int32 EntryPoint);
	void On_Set_Rarity_Binded(bool IsBoss, bool IsRare);
	void OnNotifyBattleModeChanged_Binded(bool IsBattleMode);
	void OnNotifyWorkDetail_Binded(bool IsWorking);
	void OnSetEmpty_Binded();
	void OnSetValidSlot_Binded();
	void OnTargetCharacterBeginEat();
	void OnTargetCharacterEndEat();
	void OnTargetCharcaterBeginSleep();
	void OnTargetCharcaterEndSleep();
	void OnUpdateHP_Binded(int64 NowHP, int64 NowMaxHP);
	void OnUpdateReviveTimer_Binded(double NowTimer);
	void OnUpdateSlot_Binded(class UPalIndividualCharacterSlot* Param_TargetSlot);
	void OnInitialized();
	void RegisterCharacterIconWidget(class UWBP_PalCharacterIconBase_C** IconWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCommonCharacterSlot_C">();
	}
	static class UWBP_PalCommonCharacterSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCommonCharacterSlot_C>();
	}
};
static_assert(alignof(UWBP_PalCommonCharacterSlot_C) == 0x000008, "Wrong alignment on UWBP_PalCommonCharacterSlot_C");
static_assert(sizeof(UWBP_PalCommonCharacterSlot_C) == 0x0005E0, "Wrong size on UWBP_PalCommonCharacterSlot_C");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, UberGraphFrame_WBP_PalCommonCharacterSlot_C) == 0x000520, "Member 'UWBP_PalCommonCharacterSlot_C::UberGraphFrame_WBP_PalCommonCharacterSlot_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Anm_SeedIcon) == 0x000528, "Member 'UWBP_PalCommonCharacterSlot_C::Anm_SeedIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Anm_LowHealthLoop) == 0x000530, "Member 'UWBP_PalCommonCharacterSlot_C::Anm_LowHealthLoop' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Anm_SleepIcon) == 0x000538, "Member 'UWBP_PalCommonCharacterSlot_C::Anm_SleepIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Anm_MealIcon) == 0x000540, "Member 'UWBP_PalCommonCharacterSlot_C::Anm_MealIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Anm_WorkIcon) == 0x000548, "Member 'UWBP_PalCommonCharacterSlot_C::Anm_WorkIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Background) == 0x000550, "Member 'UWBP_PalCommonCharacterSlot_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Background_circle_b) == 0x000558, "Member 'UWBP_PalCommonCharacterSlot_C::Background_circle_b' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Image_64) == 0x000560, "Member 'UWBP_PalCommonCharacterSlot_C::Image_64' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Image_229) == 0x000568, "Member 'UWBP_PalCommonCharacterSlot_C::Image_229' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Image_IconPalWork) == 0x000570, "Member 'UWBP_PalCommonCharacterSlot_C::Image_IconPalWork' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Image_Meal) == 0x000578, "Member 'UWBP_PalCommonCharacterSlot_C::Image_Meal' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Image_PalBattleImage) == 0x000580, "Member 'UWBP_PalCommonCharacterSlot_C::Image_PalBattleImage' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Image_PalDying) == 0x000588, "Member 'UWBP_PalCommonCharacterSlot_C::Image_PalDying' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Image_PalLowHealth) == 0x000590, "Member 'UWBP_PalCommonCharacterSlot_C::Image_PalLowHealth' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Image_PalSleep) == 0x000598, "Member 'UWBP_PalCommonCharacterSlot_C::Image_PalSleep' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Image_Rare) == 0x0005A0, "Member 'UWBP_PalCommonCharacterSlot_C::Image_Rare' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Image_Strong) == 0x0005A8, "Member 'UWBP_PalCommonCharacterSlot_C::Image_Strong' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Overlay_Revive) == 0x0005B0, "Member 'UWBP_PalCommonCharacterSlot_C::Overlay_Revive' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Text_HPPercent) == 0x0005B8, "Member 'UWBP_PalCommonCharacterSlot_C::Text_HPPercent' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, Text_ReviveTimer) == 0x0005C0, "Member 'UWBP_PalCommonCharacterSlot_C::Text_ReviveTimer' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, WBP_PalCommonCharacterIcon) == 0x0005C8, "Member 'UWBP_PalCommonCharacterSlot_C::WBP_PalCommonCharacterIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, LastWorkDetail) == 0x0005D0, "Member 'UWBP_PalCommonCharacterSlot_C::LastWorkDetail' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, IsBattleModeDisplay) == 0x0005D1, "Member 'UWBP_PalCommonCharacterSlot_C::IsBattleModeDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, IsLowHealthBlink) == 0x0005D2, "Member 'UWBP_PalCommonCharacterSlot_C::IsLowHealthBlink' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, IsDisplayHealthPercent) == 0x0005D3, "Member 'UWBP_PalCommonCharacterSlot_C::IsDisplayHealthPercent' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, IsDisplayRarity) == 0x0005D4, "Member 'UWBP_PalCommonCharacterSlot_C::IsDisplayRarity' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterSlot_C, ChachedLastHPPercent) == 0x0005D8, "Member 'UWBP_PalCommonCharacterSlot_C::ChachedLastHPPercent' has a wrong offset!");

}

