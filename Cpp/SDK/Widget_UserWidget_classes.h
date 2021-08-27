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

// WidgetBlueprintGeneratedClass Widget_UserWidget.Widget_UserWidget_C
// 0x0000
class UWidget_UserWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_UserWidget.Widget_UserWidget_C");
		return ptr;
	}



	void GetRelevantPlayerPawn();
	void GetLegacyProgression();
	void IsDialogPushed();
	void GetProgression();
	void GetTraitsComponent();
	void EndDialog();
	void BeginDialog();
	void GetContextInventory();
	void GetHud();
	void GetCrafting();
	void GetInventory();
	void GetContextActor();
	void OnPushDialog();
	void OnPopDialog();
	void ExecuteUbergraph_Widget_UserWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
