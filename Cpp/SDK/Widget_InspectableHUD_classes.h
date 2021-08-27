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

// WidgetBlueprintGeneratedClass Widget_InspectableHUD.Widget_InspectableHUD_C
// 0x0000
class UWidget_InspectableHUD_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_InspectableHUD.Widget_InspectableHUD_C");
		return ptr;
	}



	void EndInspectWithContext();
	void CheckReadUIAutoOpen();
	void ToggleInspectableInfo();
	void ShowInspectableInfo();
	void ClearInspectable();
	void Toggle_Quest_Inventory();
	void Show_Quest_Inventory();
	void Set_Inspectable_Mode();
	void Set_Inspectable();
	void Construct();
	void OnInteractive_Event_1();
	void OnUpdatePageUI();
	void OnUseItemFail_Event_1();
	void ExecuteUbergraph_Widget_InspectableHUD();
	void OnInspectableInfoToggled__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
