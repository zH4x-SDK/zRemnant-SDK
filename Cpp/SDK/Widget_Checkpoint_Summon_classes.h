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

// WidgetBlueprintGeneratedClass Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C
// 0x0000
class UWidget_Checkpoint_Summon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Checkpoint_Summon.Widget_Checkpoint_Summon_C");
		return ptr;
	}



	void OnSummonStatusChanged();
	void HideNotification();
	void ShowNotification();
	void Construct();
	void Tick();
	void ExecuteUbergraph_Widget_Checkpoint_Summon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
