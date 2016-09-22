#include "stdafx.h"
#include "VideoManager.h"
#include <iostream>


VideoManager::VideoManager()
{
}

void VideoManager::startUp()
{
	std::cout << "VideoManager Starting....\n";
}

void VideoManager::shutDown()
{
	std::cout << "VideoManager Shutted Down....\n";
}

VideoManager * VideoManager::instance = nullptr;

VideoManager * VideoManager::getInstance()
{
	if (instance == nullptr) instance = new VideoManager();
	return instance;
}
