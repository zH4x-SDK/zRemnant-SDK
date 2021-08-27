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

// WidgetBlueprintGeneratedClass Widget_KeyInput.Widget_KeyInput_C
// 0x0000
class UWidget_KeyInput_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_KeyInput.Widget_KeyInput_C");
		return ptr;
	}



	void Init();
	void Construct();
	void ExecuteUbergraph_Widget_KeyInput();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
