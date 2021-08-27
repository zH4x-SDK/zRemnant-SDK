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

// BlueprintGeneratedClass BPI_RemnantPlayerController.BPI_RemnantPlayerController_C
// 0x0000
class UBPI_RemnantPlayerController_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_RemnantPlayerController.BPI_RemnantPlayerController_C");
		return ptr;
	}



	void ValidateItemRemoval();
	void ShowPlayerInfusionMenu();
	void ShowPlayerUpgradingMenu();
	void ShowPlayerCraftingMenu();
	void ShowPlayerLootContainer();
	void ShowPlayerDialogue();
	void EndPlayerDialog();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
