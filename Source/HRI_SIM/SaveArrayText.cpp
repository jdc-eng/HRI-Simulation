// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveArrayText.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool USaveArrayText::SaveArrayData(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting = false)

{
	//set file path
	SaveDirectory += "\\";
	SaveDirectory += FileName;

	if (!AllowOverWriting) 
	{
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory)) 
		{
			return false;
		}
	}

	FString FinalString = "";
	for (FString& Each : SaveText)
	{
		FinalString += Each;
		FinalString += LINE_TERMINATOR;
	}
	return FFileHelper::SaveStringToFile(FinalString, *SaveDirectory);
}

//First get the data that you need every delta t, (timestep, room, x,y coord and click events. Add this all to 








