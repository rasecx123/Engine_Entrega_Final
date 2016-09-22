#include "stdafx.h"
#include "EventsList.h"
#include <iostream>

using namespace std;

EventsList::EventsList()
{
}

EventsList::~EventsList()
{
}

bool EventsList::Callback()
{
	switch (type)
	{
	case 1:
		cout << "soy 1\n";
		return true;
		break;
	case 2:
		cout << "soy 2\n";
		return false;
		break;
	case 3:
		cout << "soy 3\n";
		return true;
		break;
	}
}

void EventsList::startUp()
{
	std::cout << "EventsList Starting....\n";
}

void EventsList::shutDown()
{
	std::cout << "EventsList Shutted Down....\n";
}
