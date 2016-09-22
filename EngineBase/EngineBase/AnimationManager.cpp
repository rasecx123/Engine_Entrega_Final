#include "stdafx.h"
#include "AnimationManager.h"
#include <iostream>


AnimationManager::AnimationManager()
{
}

void AnimationManager::startUp()
{
	std::cout << "AnimationManager Starting....\n";
}

void AnimationManager::animationUpdate()
{
	std::cout << "AnimationManager Updating....\n";
}

void AnimationManager::shutDown()
{
	std::cout << "AnimationManager Shutted Down....\n";
}

AnimationManager * AnimationManager::instance = nullptr;

AnimationManager * AnimationManager::getInstance()
{
	if (instance == nullptr) instance = new AnimationManager();
	return instance;
}
