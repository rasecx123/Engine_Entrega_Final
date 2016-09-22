#pragma once
class TextureManager
{
public:
	TextureManager();
	
	void startUp();
	void shutDown();

	static TextureManager *getInstance();

private:
	static TextureManager *instance;
};

