// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingEscape.h"
#include "PositionReport.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
	
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();
	FString objectName = GetOwner()->GetName();
	FString objPos = GetOwner()->GetTransform().GetLocation().ToString();
	// ...
	UE_LOG(LogTemp, Warning, TEXT("%s est a la position %s"), *objectName, *objPos);
}


// Called every frame
void UPositionReport::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

