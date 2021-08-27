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

// WidgetBlueprintGeneratedClass WidgetPingWheelCenter.WidgetPingWheelCenter_C
// 0x0000
class UWidgetPingWheelCenter_C : public UWidget_PingWheelContext_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WidgetPingWheelCenter.WidgetPingWheelCenter_C");
		return ptr;
	}



	void Update_Cooldown_Timer();
	void Update_Cooldown_Visibility();
	void Get_Cancel_Visibility_1();
	void OnActivate();
	void UpdateFromContext();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WidgetPingWheelCenter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
