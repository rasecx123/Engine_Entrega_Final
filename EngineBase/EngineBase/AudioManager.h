#pragma once
class AudioManager
{
public:
	AudioManager();
	
	void startUp();
	void shutDown();
	void audioUpdate();

	static AudioManager *getInstance();

private:
	static AudioManager *instance;
};

