#include "stdafx.h"
#include "TextureManager.h"
#include <iostream>


TextureManager::TextureManager()
{
}

void TextureManager::startUp()
{
	std::cout << "TextureManager Starting....\n";
}

void TextureManager::shutDown()
{
	std::cout << "TextureManager Shutted Down....\n";
}

TextureManager * TextureManager::instance = nullptr;

TextureManager * TextureManager::getInstance()
{
	if (instance == nullptr) instance = new TextureManager();
	return instance;
}
