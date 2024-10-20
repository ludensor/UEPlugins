// Copyright Nori. All Rights Reserved.

#pragma once

#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "DataProviders/AIDataProvider.h"

#include "NoriEnvQueryGenerator_Voxel.generated.h"

/**
 * ���� ������
 */
UCLASS(meta = (DisplayName = "Points: Voxel"))
class NORIENVIRONMENTQUERY_API UNoriEnvQueryGenerator_Voxel : public UEnvQueryGenerator
{
	GENERATED_BODY()
	
public:
	UNoriEnvQueryGenerator_Voxel(const FObjectInitializer& ObjectInitializer);

private:
	virtual void GenerateItems(FEnvQueryInstance& QueryInstance) const final;

	virtual FText GetDescriptionTitle() const final;
	virtual FText GetDescriptionDetails() const final;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) final;
#endif // WITH_EDITOR

	void StoreNavPoints(const TArray<FNavLocation>& Points, FEnvQueryInstance& QueryInstance) const;

private:
	/** �������� ���� ���簢�� ������ �����Դϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator, meta = (DisplayName = "Grid Half Size"))
	FAIDataProviderFloatValue GridSize;

	/** ���� ���� �е��Դϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderFloatValue HorizontalSpaceBetween;

	/** ���� ���� �е��Դϴ�. */
	UPROPERTY(EditDefaultsOnly, Category = Generator)
	FAIDataProviderFloatValue VerticalSpaceBetween;

	/** �������� �����ϱ� ���� ���� ���Դϴ�. */
	UPROPERTY(EditAnywhere, Category = Generator)
	TSubclassOf<UEnvQueryContext> GenerateAround;
};
