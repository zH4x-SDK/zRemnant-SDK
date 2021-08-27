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

// WidgetBlueprintGeneratedClass Widget_AIDirector.Widget_AIDirector_C
// 0x0000
class UWidget_AIDirector_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_AIDirector.Widget_AIDirector_C");
		return ptr;
	}



	void Get_IntensityState_Text_1();
	void RefreshEncounterGroupList();
	void GetCurrentAIDirector();
	void GetVisibility_1();
	void OnGroupAdded_Event_1();
	void OnGroupRemoved_Event_1();
	void SetAIDirector();
	void Tick();
	void ExecuteUbergraph_Widget_AIDirector();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
