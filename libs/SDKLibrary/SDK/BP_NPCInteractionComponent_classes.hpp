#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCInteractionComponent

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPCInteractionComponent.BP_NPCInteractionComponent_C
// 0x0000 (0x0178 - 0x0178)
class UBP_NPCInteractionComponent_C final : public UPalNPCInteractionComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCInteractionComponent_C">();
	}
	static class UBP_NPCInteractionComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NPCInteractionComponent_C>();
	}
};
static_assert(alignof(UBP_NPCInteractionComponent_C) == 0x000008, "Wrong alignment on UBP_NPCInteractionComponent_C");
static_assert(sizeof(UBP_NPCInteractionComponent_C) == 0x000178, "Wrong size on UBP_NPCInteractionComponent_C");

}
