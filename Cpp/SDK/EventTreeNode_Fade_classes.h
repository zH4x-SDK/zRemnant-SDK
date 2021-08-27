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

// BlueprintGeneratedClass EventTreeNode_Fade.EventTreeNode_Fade_C
// 0x0000
class UEventTreeNode_Fade_C : public UEventTreeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EventTreeNode_Fade.EventTreeNode_Fade_C");
		return ptr;
	}



	void Begin();
	void ExecuteUbergraph_EventTreeNode_Fade();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
