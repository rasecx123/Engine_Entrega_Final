#pragma once
class AnimationManager
{
public:
	AnimationManager();
		
	void startUp();
	void shutDown();
	void animationUpdate();

	static AnimationManager *getInstance();

private:
	static AnimationManager *instance;
};

