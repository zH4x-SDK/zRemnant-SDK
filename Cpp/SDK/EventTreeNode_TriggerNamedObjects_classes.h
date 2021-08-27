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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTreeNode_TriggerNamedObjects.EventTreeNode_TriggerNamedObjects_C
// 0x0000
class UEventTreeNode_TriggerNamedObjects_C : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EventTreeNode_TriggerNamedObjects.EventTreeNode_TriggerNamedObjects_C");
		return ptr;
	}



	void Begin();
	void ExecuteUbergraph_EventTreeNode_TriggerNamedObjects();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
