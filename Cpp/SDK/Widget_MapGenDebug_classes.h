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

// WidgetBlueprintGeneratedClass Widget_MapGenDebug.Widget_MapGenDebug_C
// 0x0000
class UWidget_MapGenDebug_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MapGenDebug.Widget_MapGenDebug_C");
		return ptr;
	}



	void GetText_1();
	void UpdateQuestInfo();
	void UpdateMapGenInfo();
	void UpdateTileInfo();
	void SetZone();
	void Tick();
	void ExecuteUbergraph_Widget_MapGenDebug();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
