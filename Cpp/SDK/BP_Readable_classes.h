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

// BlueprintGeneratedClass BP_Readable.BP_Readable_C
// 0x0000
class ABP_Readable_C : public ABP_Inspectable_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Readable.BP_Readable_C");
		return ptr;
	}



	void GetScrollPageWidget();
	void GetLore();
	void Assign_Render_Texture();
	void ReceiveBeginPlay();
	void InitLore();
	void BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature();
	void ExecuteUbergraph_BP_Readable();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
