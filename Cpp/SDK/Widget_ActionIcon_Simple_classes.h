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

// WidgetBlueprintGeneratedClass Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C
// 0x0000
class UWidget_ActionIcon_Simple_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ActionIcon_Simple.Widget_ActionIcon_Simple_C");
		return ptr;
	}



	void SetBarStyle();
	void SetStacks();
	void DrawStacks();
	void Construct();
	void Tick();
	void ExecuteUbergraph_Widget_ActionIcon_Simple();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
