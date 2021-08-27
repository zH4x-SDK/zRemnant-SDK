#pragma once

// Name: Remnant, Version: 1.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class ActorSequence_EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor = 0,
	EActorSequenceObjectReferenceType__ExternalActor = 1,
	EActorSequenceObjectReferenceType__Component = 2,
	EActorSequenceObjectReferenceType__EActorSequenceObjectReferenceType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// 0x0000
struct FActorSequenceObjectReferenceMap
{

};

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
// 0x0000
struct FActorSequenceObjectReferences
{

};

// ScriptStruct ActorSequence.ActorSequenceObjectReference
// 0x0000
struct FActorSequenceObjectReference
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
