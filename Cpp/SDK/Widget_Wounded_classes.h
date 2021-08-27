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

// WidgetBlueprintGeneratedClass Widget_Wounded.Widget_Wounded_C
// 0x0000
class UWidget_Wounded_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Wounded.Widget_Wounded_C");
		return ptr;
	}



	void Get_ReviveRoot_ContentColorAndOpacity_1();
	void Get_KillYourselfBar_Percent_1();
	void Get_WoundedHealthBar_Percent_1();
	void GetPercent_1();
	void OnWoundedState_Event_1();
	void BndEvt__Suicide_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_Widget_Wounded();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
