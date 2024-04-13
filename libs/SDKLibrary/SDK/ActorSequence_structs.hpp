#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActorSequence

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ActorSequence.EActorSequenceObjectReferenceType
// NumValues: 0x0004
enum class EActorSequenceObjectReferenceType : uint8
{
	ContextActor                             = 0,
	ExternalActor                            = 1,
	Component                                = 2,
	EActorSequenceObjectReferenceType_MAX    = 3,
};

// ScriptStruct ActorSequence.ActorSequenceObjectReference
// 0x0028 (0x0028 - 0x0000)
struct FActorSequenceObjectReference final
{
public:
	EActorSequenceObjectReferenceType             Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_242B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  ActorId;                                           // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_242C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PathToComponent;                                   // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FActorSequenceObjectReference) == 0x000008, "Wrong alignment on FActorSequenceObjectReference");
static_assert(sizeof(FActorSequenceObjectReference) == 0x000028, "Wrong size on FActorSequenceObjectReference");
static_assert(offsetof(FActorSequenceObjectReference, Type) == 0x000000, "Member 'FActorSequenceObjectReference::Type' has a wrong offset!");
static_assert(offsetof(FActorSequenceObjectReference, ActorId) == 0x000004, "Member 'FActorSequenceObjectReference::ActorId' has a wrong offset!");
static_assert(offsetof(FActorSequenceObjectReference, PathToComponent) == 0x000018, "Member 'FActorSequenceObjectReference::PathToComponent' has a wrong offset!");

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
// 0x0010 (0x0010 - 0x0000)
struct FActorSequenceObjectReferences final
{
public:
	TArray<struct FActorSequenceObjectReference>  Array;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FActorSequenceObjectReferences) == 0x000008, "Wrong alignment on FActorSequenceObjectReferences");
static_assert(sizeof(FActorSequenceObjectReferences) == 0x000010, "Wrong size on FActorSequenceObjectReferences");
static_assert(offsetof(FActorSequenceObjectReferences, Array) == 0x000000, "Member 'FActorSequenceObjectReferences::Array' has a wrong offset!");

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// 0x0020 (0x0020 - 0x0000)
struct FActorSequenceObjectReferenceMap final
{
public:
	TArray<struct FGuid>                          BindingIds;                                        // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FActorSequenceObjectReferences> References;                                        // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FActorSequenceObjectReferenceMap) == 0x000008, "Wrong alignment on FActorSequenceObjectReferenceMap");
static_assert(sizeof(FActorSequenceObjectReferenceMap) == 0x000020, "Wrong size on FActorSequenceObjectReferenceMap");
static_assert(offsetof(FActorSequenceObjectReferenceMap, BindingIds) == 0x000000, "Member 'FActorSequenceObjectReferenceMap::BindingIds' has a wrong offset!");
static_assert(offsetof(FActorSequenceObjectReferenceMap, References) == 0x000010, "Member 'FActorSequenceObjectReferenceMap::References' has a wrong offset!");

}

