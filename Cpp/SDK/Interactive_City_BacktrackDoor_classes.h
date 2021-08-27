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

// BlueprintGeneratedClass Interactive_City_BacktrackDoor.Interactive_City_BacktrackDoor_C
// 0x0000
class AInteractive_City_BacktrackDoor_C : public AInteractive_Door_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_City_BacktrackDoor.Interactive_City_BacktrackDoor_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void AttemptedOpen();
	void ExecuteUbergraph_Interactive_City_BacktrackDoor();
	void PlayerAttemptedToOpen__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
