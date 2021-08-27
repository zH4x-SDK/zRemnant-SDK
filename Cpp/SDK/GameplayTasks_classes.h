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

// Class GameplayTasks.GameplayTask
// 0x0000
class UGameplayTask : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask");
		return ptr;
	}



	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};

// Class GameplayTasks.GameplayTask_ClaimResource
// 0x0000
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_ClaimResource");
		return ptr;
	}



	void ClaimResources();
	void ClaimResource();
};

// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0000
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		return ptr;
	}



	void SpawnActor();
	void FinishSpawningActor();
	void BeginSpawningActor();
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// 0x0000
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_TimeLimitedExecution");
		return ptr;
	}



};

// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0000
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		return ptr;
	}



	void TaskWaitDelay();
	void TaskDelayDelegate__DelegateSignature();
};

// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000
class UGameplayTaskOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		return ptr;
	}



};

// Class GameplayTasks.GameplayTaskResource
// 0x0000
class UGameplayTaskResource : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		return ptr;
	}



};

// Class GameplayTasks.GameplayTasksComponent
// 0x0000
class UGameplayTasksComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		return ptr;
	}



	void OnRep_SimulatedTasks();
	void K2_RunGameplayTask();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
