// Copyright Nori. All Rights Reserved.

#pragma once

#include "GameplayTask.h"
#include "EnvironmentQuery/EnvQueryTypes.h"

#include "NoriGameplayTask_RunEQSQueryAndGetAsLocations.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNoriOnQueryFinishedDelegate, const TArray<FVector>&, Locations);

/**
 *
 */
UCLASS()
class NORIENVIRONMENTQUERY_API UNoriGameplayTask_RunEQSQueryAndGetAsLocations final : public UGameplayTask
{
	GENERATED_BODY()

public:
	UNoriGameplayTask_RunEQSQueryAndGetAsLocations(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Nori|GameplayTasks", meta = (AdvancedDisplay = "QueryParams, bShuffle", DefaultToSelf = "TaskOwner", AutoCreateRefTerm = "QueryParams", BlueprintInternalUseOnly = "true"))
	static UNoriGameplayTask_RunEQSQueryAndGetAsLocations* RunEQSQueryAndGetAsLocations(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UEnvQuery* QueryTemplate, const TArray<FEnvNamedValue>& QueryParams, int32 MaxCount = 0, bool bShuffle = true);

private:
	virtual void Activate() override final;

	void OnQueryFinished(TSharedPtr<FEnvQueryResult> Result);

protected:
	UPROPERTY(BlueprintAssignable)
	FNoriOnQueryFinishedDelegate OnQueryFinishedEvent;

private:
	UPROPERTY()
	TObjectPtr<UEnvQuery> QueryTemplate;
	TArray<FEnvNamedValue> QueryParams;
	int32 MaxCount;
	bool bShuffle;
};
