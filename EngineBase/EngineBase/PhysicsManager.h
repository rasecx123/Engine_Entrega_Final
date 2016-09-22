#pragma once
class PhysicsManager
{
public:
	PhysicsManager();
	
	void startUp();
	void shutDown();
	void physicsUpdate();

	static PhysicsManager *getInstance();

private:
	static PhysicsManager *instance;
};

