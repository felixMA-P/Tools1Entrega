
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilsLibrary.generated.h"

UCLASS()
class TOOLSEJERCICIOS_API UUtilsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()



	UFUNCTION(BlueprintCallable, Category="Utils")
	static void ExportStringArrayToFile(const TArray<FString>& AssetNameList, const FString& InFilename);

};
