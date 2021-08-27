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

// WidgetBlueprintGeneratedClass Widget_EncounterGroup.Widget_EncounterGroup_C
// 0x0000
class UWidget_EncounterGroup_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_EncounterGroup.Widget_EncounterGroup_C");
		return ptr;
	}



	void Get_ActiveSpawns_Text_1();
	void Get_QueuedSpawns_Text_1();
	void Get_Active_Text_1();
	void Get_Name_Text_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
