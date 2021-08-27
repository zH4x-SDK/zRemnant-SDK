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

// WidgetBlueprintGeneratedClass Widget_PingWheelContext.Widget_PingWheelContext_C
// 0x0000
class UWidget_PingWheelContext_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PingWheelContext.Widget_PingWheelContext_C");
		return ptr;
	}



	void SetPing();
	void OnActivate();
	void NotifySelectedChanged();
	void UpdateFromContext();
	void SetContext();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
