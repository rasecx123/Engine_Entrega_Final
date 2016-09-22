#pragma once
class VideoManager
{
public:
	VideoManager();
	
	void startUp();
	void shutDown();

	static VideoManager *getInstance();

private:
	static VideoManager *instance;
};

