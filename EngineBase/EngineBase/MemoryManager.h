#pragma once
class MemoryManager
{
public:
	MemoryManager();
	
	void startUp();
	void shutDown();

	static MemoryManager *getInstance();

private:
	static MemoryManager *instance;
};

