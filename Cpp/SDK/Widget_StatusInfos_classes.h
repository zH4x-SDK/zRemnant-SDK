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

// WidgetBlueprintGeneratedClass Widget_StatusInfos.Widget_StatusInfos_C
// 0x0000
class UWidget_StatusInfos_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatusInfos.Widget_StatusInfos_C");
		return ptr;
	}



	void CanAddAction();
	void Init();
	void RemoveAction();
	void AddAction();
	void Construct();
	void OnActionAdded_Event_1();
	void OnActionRemoved_Event_1();
	void ExecuteUbergraph_Widget_StatusInfos();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
