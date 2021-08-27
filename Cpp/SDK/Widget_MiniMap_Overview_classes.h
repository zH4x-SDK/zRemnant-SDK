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

// WidgetBlueprintGeneratedClass Widget_MiniMap_Overview.Widget_MiniMap_Overview_C
// 0x0000
class UWidget_MiniMap_Overview_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MiniMap_Overview.Widget_MiniMap_Overview_C");
		return ptr;
	}



	void TryUnregisterPanel();
	void InitMiniMapWidget();
	void Destruct();
	void ExecuteUbergraph_Widget_MiniMap_Overview();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
