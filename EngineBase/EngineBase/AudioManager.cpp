#include "stdafx.h"
#include "AudioManager.h"
#include <iostream>


AudioManager::AudioManager()
{
}

void AudioManager::startUp()
{
	std::cout << "AudioManager Starting....\n";
}

void AudioManager::audioUpdate()
{
	std::cout << "AudioManager Updating....\n";
}

void AudioManager::shutDown()
{
	std::cout << "AudioManager Shutted Down....\n";
}

AudioManager * AudioManager::instance = nullptr;

AudioManager * AudioManager::getInstance()
{
	if (instance == nullptr) instance = new AudioManager();
	return instance;
}
