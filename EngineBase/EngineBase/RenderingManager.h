#pragma once
class RenderingManager
{
public:
	RenderingManager();
	
	void startUp();
	void shutDown();
	void renderingUpdate();

	static RenderingManager *getInstance();

private:
	static RenderingManager *instance;
	
};

