// Copyright Nori. All Rights Reserved.

#pragma once

#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "DataProviders/AIDataProvider.h"

#include "NoriEnvQueryGenerator_TriangleTessellation.generated.h"

/**
 * Ŀ������ ������ ��ŷ�� ���ﰢ�� �׼����̼� ������
 * https://www.researchgate.net/figure/Equilateral-triangle-tessellation-packing-into-a-coverage-circle-R-976-m_fig4_220471434
 */
UCLASS(meta = (DisplayName = "Points: Triangle Tessellation"))
class NORIENVIRONMENTQUERY_API UNoriEnvQueryGenerator_TriangleTessellation : public UEnvQueryGenerator_ProjectedPoints
{
	GENERATED_BODY()

public:
	UNoriEnvQueryGenerator_TriangleTessellation(const FObjectInitializer& ObjectInitializer);

private:
	virtual void GenerateItems(FEnvQueryInstance& QueryInstance) const final;

	virtual FText GetDescriptionTitle() const final;
	virtual FText GetDescriptionDetails() const final;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) final;
#endif // WITH_EDITOR

	float GetArcBisectorAngle(FEnvQueryInstance& QueryInstance) const;
	void GetEdgeVectors(float BisectAngleDegrees, float Edge, TArray<FVector>& OutVectors) const;
	int32 GetItemCount(float Radius, const FVector& FirstEdge, const FVector& SecondEdge, int32 StepsCount) const;
	bool IsAngleAllowed(const FVector& Point, float BisectAngleDegrees, float AngleRangeDegrees, bool bConstrainAngle) const;

private:
	/** ��ŷ�� ���� �������Դϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderFloatValue CircleRadius;

	/** �׼����̼ǵ� ���ﰢ���� ���� �����Դϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderFloatValue TriangleEdge;

	/** ������ ���� ���� �����Դϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator, meta = (EditCondition = "bDefineArc"))
	FEnvDirection ArcDirection;

	/** ��ä�� ����� �������� �����ϴ� ��� �̰����� ȣ ���� ������ �����մϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderFloatValue ArcAngle;

	/** �������� �����ϱ� ���� ���� ���Դϴ�. */
	UPROPERTY(EditAnywhere, Category = Generator)
	TSubclassOf<UEnvQueryContext> CircleCenter;

	/** �������� ������ �� CircleCenter�� ��ġ�� �������� �����Դϴ�. */
	UPROPERTY(EditAnywhere, Category = Generator)
	bool bIncludeContextLocation;

	UPROPERTY(EditAnywhere, Category = Generator, meta = (InlineEditConditionToggle))
	bool bDefineArc;
};
