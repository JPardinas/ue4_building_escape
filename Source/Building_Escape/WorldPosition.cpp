// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	/*FString Log = TEXT("This is a log warning");
	FString* PrtLog = &Log;
	(*PrtLog).Len();*/
	//UE_LOG(LogTemp, Display, TEXT("This is a log!"));
	//UE_LOG(LogTemp, Warning, TEXT("%s"), **PrtLog);
	//UE_LOG(LogTemp, Error, TEXT("This is a error!"));
	//FString name = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("Object name is %s"), *GetOwner()->GetName());

	FString ObjectPosition = *GetOwner()->GetActorLocation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("Object %s position is %s"), *GetOwner()->GetName(), *ObjectPosition);

}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

