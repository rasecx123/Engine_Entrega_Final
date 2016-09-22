#pragma once
class EventsList
{
public:
	EventsList();
	~EventsList();

	int type;
	EventsList(int Itype) {
		type = Itype;
	}

	bool Callback();

	void startUp();
	void shutDown();
};

