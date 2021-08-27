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

// WidgetBlueprintGeneratedClass WidgetPingWheel_Item.WidgetPingWheel_Item_C
// 0x0000
class UWidgetPingWheel_Item_C : public UWidget_PingWheelContext_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WidgetPingWheel_Item.WidgetPingWheel_Item_C");
		return ptr;
	}



	void UpdateFromContext();
	void OnActivate();
	void NotifySelectedChanged();
	void Construct();
	void ExecuteUbergraph_WidgetPingWheel_Item();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
