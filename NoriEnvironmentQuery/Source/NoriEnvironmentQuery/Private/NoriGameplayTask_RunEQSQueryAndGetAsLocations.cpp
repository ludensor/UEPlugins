// Copyright Nori. All Rights Reserved.

#include "NoriGameplayTask_RunEQSQueryAndGetAsLocations.h"

#include "EnvironmentQuery/EnvQueryManager.h"

UNoriGameplayTask_RunEQSQueryAndGetAsLocations::UNoriGameplayTask_RunEQSQueryAndGetAsLocations(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, MaxCount(0)
	, bShuffle(true)
{

}

UNoriGameplayTask_RunEQSQueryAndGetAsLocations* UNoriGameplayTask_RunEQSQueryAndGetAsLocations::RunEQSQueryAndGetAsLocations(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UEnvQuery* QueryTemplate, const TArray<FEnvNamedValue>& QueryParams, int32 MaxCount /*= 0*/, bool bShuffle /*= true*/)
{
	UNoriGameplayTask_RunEQSQueryAndGetAsLocations* MyTask = NewTask<UNoriGameplayTask_RunEQSQueryAndGetAsLocations>(TaskOwner, TEXT("RunEQSQueryAndGetAsLocations"));
	MyTask->QueryTemplate = QueryTemplate;
	MyTask->QueryParams = QueryParams;
	MyTask->MaxCount = MaxCount;
	MyTask->bShuffle = bShuffle;
	return MyTask;
}

void UNoriGameplayTask_RunEQSQueryAndGetAsLocations::Activate()
{
	Super::Activate();

	AActor* Querier = GetAvatarActor();
	if (QueryTemplate && Querier)
	{
		FEnvQueryRequest QueryResult(QueryTemplate, Querier);
		QueryResult.SetNamedParams(QueryParams);
		QueryResult.Execute(EEnvQueryRunMode::AllMatching, this, &ThisClass::OnQueryFinished);
	}
	else
	{
		EndTask();
	}
}

void UNoriGameplayTask_RunEQSQueryAndGetAsLocations::OnQueryFinished(TSharedPtr<FEnvQueryResult> Result)
{
	TArray<FVector> Locations;
	Result->GetAllAsLocations(Locations);

	if (bShuffle)
	{
		const int32 LastIndex = Locations.Num() - 1;
		for (int32 Index = 0; Index <= LastIndex; ++Index)
		{
			const int32 RandomIndex = FMath::RandRange(Index, LastIndex);
			if (Index != RandomIndex)
			{
				Locations.Swap(Index, RandomIndex);
			}
		}
	}

	TArray<FVector> DesiredLocations;
	DesiredLocations.Reserve(MaxCount);
	if (MaxCount > 0)
	{
		const int32 ClampedCount = FMath::Min(MaxCount, Locations.Num());
		for (int32 Index = 0; Index < ClampedCount; ++Index)
		{
			DesiredLocations.Add(Locations[Index]);
		}
	}
	else
	{
		DesiredLocations = Locations;
	}

	OnQueryFinishedEvent.Broadcast(DesiredLocations);
	EndTask();
}
