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

// WidgetBlueprintGeneratedClass Widget_FadeOut.Widget_FadeOut_C
// 0x0000
class UWidget_FadeOut_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_FadeOut.Widget_FadeOut_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_Widget_FadeOut();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
