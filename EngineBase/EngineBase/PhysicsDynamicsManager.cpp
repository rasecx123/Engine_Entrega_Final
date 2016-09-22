#include "stdafx.h"
#include "PhysicsDynamicsManager.h"
#include <iostream>


PhysicsDynamicsManager::PhysicsDynamicsManager()
{

}

void PhysicsDynamicsManager::startUp()
{
	std::cout << "PhysicsDynamicsManager Starting....\n";
}

void PhysicsDynamicsManager::physicsDynamicsUpdate()
{
	std::cout << "PhysicsDynamicsManager Updating....\n";
}

void PhysicsDynamicsManager::shutDown()
{
	std::cout << "PhysicsDynamicsManager Starting....\n";
}

PhysicsDynamicsManager * PhysicsDynamicsManager::instance = nullptr;

PhysicsDynamicsManager * PhysicsDynamicsManager::getInstance()
{
	if (instance == nullptr) instance = new PhysicsDynamicsManager();
	return instance;
}
