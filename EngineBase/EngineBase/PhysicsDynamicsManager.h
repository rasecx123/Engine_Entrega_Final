#pragma once
class PhysicsDynamicsManager
{
public:
	PhysicsDynamicsManager();
	
	void startUp();
	void shutDown();
	void physicsDynamicsUpdate();

	static PhysicsDynamicsManager *getInstance();

private:
	static PhysicsDynamicsManager *instance;
};

