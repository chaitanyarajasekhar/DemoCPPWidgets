// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "Components/TextBlock.h"

bool UMainMenuWidget::Initialize()
{
	UE_LOG(LogTemp, Warning, TEXT("In Initialize Block"));

	Super::Initialize();

	if (MessageTextBlock == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("No textblock class found"));
		return false;
	}

	MessageTextBlock->SetText(FText::FromString("Hello this is a change from c++"));

	return true;
}

