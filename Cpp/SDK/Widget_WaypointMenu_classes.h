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

// WidgetBlueprintGeneratedClass Widget_WaypointMenu.Widget_WaypointMenu_C
// 0x0000
class UWidget_WaypointMenu_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_WaypointMenu.Widget_WaypointMenu_C");
		return ptr;
	}



	void Init();
	void FocusFirst();
	void Get_Load_Visibility_1();
	void BuildList();
	void OnFocusWaypoint();
	void BndEvt__Load_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void OnClickedWaypoint();
	void ExecuteUbergraph_Widget_WaypointMenu();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
