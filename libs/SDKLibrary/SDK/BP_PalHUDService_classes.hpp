#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalHUDService

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalHUDService.BP_PalHUDService_C
// 0x0000 (0x0108 - 0x0108)
class UBP_PalHUDService_C final : public UPalHUDService
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalHUDService_C">();
	}
	static class UBP_PalHUDService_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalHUDService_C>();
	}
};
static_assert(alignof(UBP_PalHUDService_C) == 0x000008, "Wrong alignment on UBP_PalHUDService_C");
static_assert(sizeof(UBP_PalHUDService_C) == 0x000108, "Wrong size on UBP_PalHUDService_C");

}
