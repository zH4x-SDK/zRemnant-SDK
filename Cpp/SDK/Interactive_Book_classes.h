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

// BlueprintGeneratedClass Interactive_Book.Interactive_Book_C
// 0x0000
class AInteractive_Book_C : public ABP_Inspectable_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Book.Interactive_Book_C");
		return ptr;
	}



	void CheckReadNotify();
	void UpdatePageTurnUI();
	void GetLore();
	void OnRep_Page_Turns();
	void Update_All_Materials();
	void Update_Page_Material();
	void Update_Material();
	void Get_Current_Page_Index();
	void Assign_All_Render_Textures();
	void GetBookWidget();
	void Update_Pages();
	void Assign_Render_Texture();
	void PrevPage();
	void NextPage();
	void ReceiveBeginPlay();
	void Single_Page_Ready();
	void Page_4_Set();
	void Update_Pages_Delayed();
	void OnNextDialog();
	void OnPrevDialog();
	void InitLore();
	void OnHUDInit();
	void ServerBeginInspect();
	void OnHUDUpdate();
	void CacheUIPage();
	void OnInspectEnd();
	void ExecuteUbergraph_Interactive_Book();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
