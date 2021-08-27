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

// WidgetBlueprintGeneratedClass Widget_Debug_Properties.Widget_Debug_Properties_C
// 0x0000
class UWidget_Debug_Properties_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Debug_Properties.Widget_Debug_Properties_C");
		return ptr;
	}



	void SetComponent();
	void ClearProperties();
	void AddProperty();
	void Construct();
	void ExecuteUbergraph_Widget_Debug_Properties();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
