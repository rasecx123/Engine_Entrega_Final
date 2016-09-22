#pragma once
#include "Events.h"
#include <queue>
#include <list>
#include "EventsList.h"

using std::queue;
using std::list;

class InputManager
{
public:
	InputManager();
	
	Events tempQ;

	queue<Events> Tail;
	list<EventsList> List;

	void main();
	void startUp();
	void shutDown();
	void inputUpdate();

	static InputManager *getInstance();

private:
	static InputManager *instance;
};

