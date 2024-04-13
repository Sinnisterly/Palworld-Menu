#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HumanCryComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HumanCryComponent.BP_HumanCryComponent_C
// 0x0018 (0x00B8 - 0x00A0)
class UBP_HumanCryComponent_C final : public UPalCryComponentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                          CryingCharacter;                                   // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CurrentActionClass;                                // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BP_HumanCryComponent_AutoGenFunc(const class UPalActionBase* Action);
	void ExecuteUbergraph_BP_HumanCryComponent(int32 EntryPoint);
	void Initialize();
	void PlayCry(class UAkAudioEvent* AkEvent);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HumanCryComponent_C">();
	}
	static class UBP_HumanCryComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HumanCryComponent_C>();
	}
};
static_assert(alignof(UBP_HumanCryComponent_C) == 0x000008, "Wrong alignment on UBP_HumanCryComponent_C");
static_assert(sizeof(UBP_HumanCryComponent_C) == 0x0000B8, "Wrong size on UBP_HumanCryComponent_C");
static_assert(offsetof(UBP_HumanCryComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_HumanCryComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_HumanCryComponent_C, CryingCharacter) == 0x0000A8, "Member 'UBP_HumanCryComponent_C::CryingCharacter' has a wrong offset!");
static_assert(offsetof(UBP_HumanCryComponent_C, CurrentActionClass) == 0x0000B0, "Member 'UBP_HumanCryComponent_C::CurrentActionClass' has a wrong offset!");

}
