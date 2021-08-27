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

// WidgetBlueprintGeneratedClass Widget_PartyMember.Widget_PartyMember_C
// 0x0000
class UWidget_PartyMember_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PartyMember.Widget_PartyMember_C");
		return ptr;
	}



	void OnRequestExpired();
	void OnRequestPing();
	void Get_PlayerHealth_Visibility_2();
	void Get_PlayerHealth_Visibility_1();
	void GetText_1();
	void Get_PlayerName_Text_1();
	void Get_PlayerHealth_Percent_1();
	void OnDead_Event_1();
	void OnWoundedState_Event_1();
	void OnWounded();
	void OnDead();
	void OnNormal();
	void OnWoundedState_Event_2();
	void OnReviving();
	void OnPawnChanged_Event_1();
	void OnTalkingChanged_Event_1();
	void OnPlayerNameChanged_Event_1();
	void OnChatRestrictionChanged_Event_1();
	void InitCharacter();
	void Construct();
	void LocalPlayerTargetChanged();
	void RefreshName();
	void ExecuteUbergraph_Widget_PartyMember();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
