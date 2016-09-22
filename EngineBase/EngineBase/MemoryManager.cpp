#include "stdafx.h"
#include "MemoryManager.h"
#include <iostream>


MemoryManager::MemoryManager()
{
}

void MemoryManager::startUp()
{
	std::cout << "MemoryManager Starting....\n";
}

void MemoryManager::shutDown()
{
	std::cout << "MemoryManager Starting....\n";
}

MemoryManager * MemoryManager::instance = nullptr;

MemoryManager * MemoryManager::getInstance()
{
	if (instance == nullptr) instance = new MemoryManager();
	return instance;
}