#include "stdafx.h"
#include "RenderingManager.h"
#include <iostream>


RenderingManager::RenderingManager()
{

}

void RenderingManager::startUp()
{
	std::cout << "RenderingManager Starting....\n";
}

void RenderingManager::renderingUpdate()
{
	std::cout << "RenderingManager Updating....\n";
}

void RenderingManager::shutDown()
{
	std::cout << "RenderingManager Shutted Down....\n";
}



RenderingManager * RenderingManager::instance = nullptr;

RenderingManager * RenderingManager::getInstance()
{
	if (instance == nullptr) instance = new RenderingManager();
	return instance;
}