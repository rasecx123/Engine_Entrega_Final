#pragma once
class FileSystemManager
{
public:
	FileSystemManager();
	
	void startUp();
	void shutDown();

	static FileSystemManager *getInstance();

private:
	static FileSystemManager *instance;
};

