#include "stdafx.h"
#include "FileSystemManager.h"
#include <iostream>


FileSystemManager::FileSystemManager()
{
}

void FileSystemManager::startUp()
{
	std::cout << "FileSystemManager Starting....\n";
}

void FileSystemManager::shutDown()
{
	std::cout << "FileSystemManager Shutted Down....\n";
}

FileSystemManager * FileSystemManager::instance = nullptr;

FileSystemManager * FileSystemManager::getInstance()
{
	if (instance == nullptr) instance = new FileSystemManager();
	return instance;
}