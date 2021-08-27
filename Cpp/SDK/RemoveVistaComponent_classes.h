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

// BlueprintGeneratedClass RemoveVistaComponent.RemoveVistaComponent_C
// 0x0000
class URemoveVistaComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RemoveVistaComponent.RemoveVistaComponent_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_RemoveVistaComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
