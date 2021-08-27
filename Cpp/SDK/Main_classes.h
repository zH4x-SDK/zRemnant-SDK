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

// BlueprintGeneratedClass Main.Main_C
// 0x0000
class AMain_C : public ALevelScriptActorGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Main.Main_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Main();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
