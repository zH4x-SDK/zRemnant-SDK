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

// BlueprintGeneratedClass BPI_Fusebox.BPI_Fusebox_C
// 0x0000
class UBPI_Fusebox_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Fusebox.BPI_Fusebox_C");
		return ptr;
	}



	void HasFuseInFusebox();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
