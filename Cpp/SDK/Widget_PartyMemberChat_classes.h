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

// WidgetBlueprintGeneratedClass Widget_PartyMemberChat.Widget_PartyMemberChat_C
// 0x0000
class UWidget_PartyMemberChat_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PartyMemberChat.Widget_PartyMemberChat_C");
		return ptr;
	}



	void Get_PlayerName_Text_1();
	void OnTalkingChanged_Event_1();
	void OnPlayerNameChanged_Event_1();
	void Construct();
	void OnChatRestrictionChanged_Event_1();
	void FinishFadeOut();
	void RefreshName();
	void ExecuteUbergraph_Widget_PartyMemberChat();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
