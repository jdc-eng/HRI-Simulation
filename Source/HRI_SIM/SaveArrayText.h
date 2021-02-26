// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveArrayText.generated.h"

/**
 * 
 */
UCLASS()
class HRI_SIM_API USaveArrayText : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (keywords = "Save"))
	static bool SaveArrayData(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting);

};
