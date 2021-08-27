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

// Class AnimationSharing.AnimSharingStateInstance
// 0x0000
class UAnimSharingStateInstance : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingStateInstance");
		return ptr;
	}



	void GetInstancedActors();
};

// Class AnimationSharing.AnimSharingTransitionInstance
// 0x0000
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingTransitionInstance");
		return ptr;
	}



};

// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x0000
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingAdditiveInstance");
		return ptr;
	}



};

// Class AnimationSharing.AnimSharingInstance
// 0x0000
class UAnimSharingInstance : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingInstance");
		return ptr;
	}



};

// Class AnimationSharing.AnimationSharingManager
// 0x0000
class UAnimationSharingManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingManager");
		return ptr;
	}



	void RegisterActorWithSkeletonBP();
	void GetAnimationSharingManager();
	void CreateAnimationSharingManager();
	void AnimationSharingEnabled();
};

// Class AnimationSharing.AnimationSharingSetup
// 0x0000
class UAnimationSharingSetup : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingSetup");
		return ptr;
	}



};

// Class AnimationSharing.AnimationSharingStateProcessor
// 0x0000
class UAnimationSharingStateProcessor : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingStateProcessor");
		return ptr;
	}



	void ProcessActorState();
	void GetAnimationStateEnum();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
