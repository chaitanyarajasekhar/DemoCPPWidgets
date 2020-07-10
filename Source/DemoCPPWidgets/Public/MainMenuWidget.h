// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class DEMOCPPWIDGETS_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	virtual bool  Initialize();

private:

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* MessageTextBlock;

	UPROPERTY(meta = (BindWidget))
		class UCanvasPanel* MenuCanvasPanel;


	
};
