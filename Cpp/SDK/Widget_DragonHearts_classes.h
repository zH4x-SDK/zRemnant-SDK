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

// WidgetBlueprintGeneratedClass Widget_DragonHearts.Widget_DragonHearts_C
// 0x0000
class UWidget_DragonHearts_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DragonHearts.Widget_DragonHearts_C");
		return ptr;
	}



	void RefreshDragonHearts();
	void RefreshCharacter();
	void Construct();
	void InitCharacter();
	void Destruct();
	void ExecuteUbergraph_Widget_DragonHearts();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
