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

// WidgetBlueprintGeneratedClass Widget_TileDebug.Widget_TileDebug_C
// 0x0000
class UWidget_TileDebug_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TileDebug.Widget_TileDebug_C");
		return ptr;
	}



	void Get_TileDirection_Text_1();
	void Get_TileDistance_Text_1();
	void Get_TileRating_Visibility_1();
	void Get_NorthWest_Visibility_1();
	void Get_SouthWest_Visibility_1();
	void Get_SouthEast_Visibility_1();
	void Get_NorthEast_Visibility_1();
	void GetColorAndOpacity_1();
	void Get_TileRating_ColorAndOpacity_1();
	void Get_TileRating_Text_1();
	void Get_ID_Text_1();
	void Get_WestEdge_Visibility_1();
	void Get_SouthEdge_Visibility_1();
	void Get_EastEdge_Visibility_1();
	void Get_NorthEdge_Visibility_1();
	void Construct();
	void ExecuteUbergraph_Widget_TileDebug();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
