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

// BlueprintGeneratedClass EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C
// 0x0000
class UEventTreeNode_RemoveItem_C : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C");
		return ptr;
	}



	void Begin();
	void ExecuteUbergraph_EventTreeNode_RemoveItem();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
