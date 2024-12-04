// Fill out your copyright notice in the Description page of Project Settings.


#include "ToolsEjercicios/Public/UtilsLibrary.h"

void UUtilsLibrary::ExportStringArrayToFile(const TArray<FString>& AssetNameList, const FString& InFilename)
{
	if (AssetNameList.IsEmpty()) return;

	FString OutputText = "";

	for (const auto& AssetName : AssetNameList)
	{
		;
		OutputText.Append(AssetName + '\n');
	}

	OutputText = OutputText.Replace(TEXT("{Tab}"), TEXT("\t"), ESearchCase::CaseSensitive);
 
	// UnwrothyTextures_<Date>_<BuildID>.log

	const FString FileName = FPaths::ProjectSavedDir() / InFilename + FDateTime::Now().ToString() +
		TEXT(".txt");
	FFileHelper::SaveStringToFile(OutputText, *FileName);
}
