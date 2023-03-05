// Copyright©2023 Vishal Ahirwar. All rights reserved.


#include "../Public/PathSpawner.h"


// Sets default values
APathSpawner::APathSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APathSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APathSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

