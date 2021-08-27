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

// BlueprintGeneratedClass BPI_Cryptolith.BPI_Cryptolith_C
// 0x0000
class UBPI_Cryptolith_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Cryptolith.BPI_Cryptolith_C");
		return ptr;
	}



	void SetPhase();
	void GetPhase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
