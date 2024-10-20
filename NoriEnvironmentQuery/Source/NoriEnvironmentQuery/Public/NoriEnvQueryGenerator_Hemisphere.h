// Copyright Nori. All Rights Reserved.

#pragma once

#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"

#include "NoriEnvQueryGenerator_Hemisphere.generated.h"

/**
 * �ݱ� ������
 */
UCLASS(meta = (DisplayName = "Points: Hemisphere"))
class NORIENVIRONMENTQUERY_API UNoriEnvQueryGenerator_Hemisphere : public UEnvQueryGenerator
{
	GENERATED_BODY()

public:
	UNoriEnvQueryGenerator_Hemisphere(const FObjectInitializer& ObjectInitializer);

private:
	virtual void GenerateItems(FEnvQueryInstance& QueryInstance) const final;

	virtual FText GetDescriptionTitle() const final;
	virtual FText GetDescriptionDetails() const final;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) final;
#endif // WITH_EDITOR

	float GetArcBisectorAngle(FEnvQueryInstance& QueryInstance) const;
	int32 GetItemCount(float SphereRadius, float ItemSpace, int32 RingCount, float CircleAngleDelta) const;
	bool IsAngleAllowed(float TestAngleRadians, float BisectAngleDegrees, float AngleRangeDegrees) const;
	void StoreNavPoints(const TArray<FNavLocation>& Points, FEnvQueryInstance& QueryInstance) const;

private:
	/** �ݱ��� �������Դϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderFloatValue Radius;

	/** �ݱ��� ���� ���� �����۵��� ���� ȣ�� �����Դϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderFloatValue SpaceBetween;

	/** �ݱ��� ���� ���� �����Դϴ�. 1 �̻��̾�� �մϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderIntValue NumberOfRings;

	/** �ݱ��� ������ ���� �������� �����ϴ� ��� �̰����� ȣ ���� ������ �����մϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator, meta = (EditCondition = "bDefineArc"))
	FEnvDirection ArcDirection;

	/** �ݱ��� ������ ���� �������� �����ϴ� ��� �̰����� ȣ ���� ������ �����մϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderFloatValue ArcAngle;

	/** �ݱ��� ������ �������� ���� ���� ������ �����մϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderFloatValue ConeVerticalAngle;

	/** CenterActor�κ��� CenterOffsetZ ��ŭ ���� �����۵��� �����մϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderFloatValue CenterOffsetZ;

	/** �������� �����ϱ� ���� ���� ���Դϴ�. */
	UPROPERTY(EditAnywhere, Category = Generator)
	TSubclassOf<UEnvQueryContext> CenterActor;

	UPROPERTY(EditAnywhere, Category = Generator, meta = (InlineEditConditionToggle))
	bool bDefineArc;
};
