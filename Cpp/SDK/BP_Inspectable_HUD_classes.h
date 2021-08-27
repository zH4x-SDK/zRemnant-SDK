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

// BlueprintGeneratedClass BP_Inspectable_HUD.BP_Inspectable_HUD_C
// 0x0000
class ABP_Inspectable_HUD_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Inspectable_HUD.BP_Inspectable_HUD_C");
		return ptr;
	}



	void TogglePageTurnBindings();
	void ClearInspectable();
	void Set_Display_Message();
	void Set_Inspectable();
	void ReceiveBeginPlay();
	void OnBeginDialog();
	void PageNext();
	void PagePrev();
	void RequestEndInspectWithContext();
	void ExecuteUbergraph_BP_Inspectable_HUD();
	void ForceUpdateUI__DelegateSignature();
	void OnDialogPrev__DelegateSignature();
	void OnDialogNext__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
