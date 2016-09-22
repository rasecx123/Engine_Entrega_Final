#include "stdafx.h"
#include "PhysicsManager.h"
#include <iostream>


PhysicsManager::PhysicsManager()
{
}

void PhysicsManager::startUp()
{
	std::cout << "PhysicsManager Starting....\n";
}

void PhysicsManager::physicsUpdate()
{
	std::cout << "PhysicsManager Updating....\n";
}

void PhysicsManager::shutDown()
{
	std::cout << "PhysicsManager Shutted Down....\n";
}

PhysicsManager * PhysicsManager::instance = nullptr;

PhysicsManager * PhysicsManager::getInstance()
{
	if (instance == nullptr) instance = new PhysicsManager();
	return instance;
}