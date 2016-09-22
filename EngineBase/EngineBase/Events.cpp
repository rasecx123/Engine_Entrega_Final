#include "stdafx.h"
#include "Events.h"
#include <iostream>

Events::Events()
{
}

Events::~Events()
{
}

void Events::startUp()
{
	std::cout << "Events Starting....\n";
}

void Events::shutDown()
{
	std::cout << "Events Shutted Down....\n";
}
