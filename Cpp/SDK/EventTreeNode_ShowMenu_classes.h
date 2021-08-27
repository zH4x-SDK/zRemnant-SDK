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

// BlueprintGeneratedClass EventTreeNode_ShowMenu.EventTreeNode_ShowMenu_C
// 0x0000
class UEventTreeNode_ShowMenu_C : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EventTreeNode_ShowMenu.EventTreeNode_ShowMenu_C");
		return ptr;
	}



	void GetEditorLabel();
	void Begin();
	void ExecuteUbergraph_EventTreeNode_ShowMenu();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
