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

// WidgetBlueprintGeneratedClass Widget_PartyStatus.Widget_PartyStatus_C
// 0x0000
class UWidget_PartyStatus_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PartyStatus.Widget_PartyStatus_C");
		return ptr;
	}



	void PlayerLeft();
	void PlayerJoined();
	void OnPlayerJoined_Event_1();
	void OnPlayerLeft_Event_1();
	void RebuildList();
	void Tick();
	void Init();
	void TryInit();
	void Construct();
	void ExecuteUbergraph_Widget_PartyStatus();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
