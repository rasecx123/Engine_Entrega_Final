#pragma once
class Events
{
public:
	Events();
	~Events();

	int type;
	Events(int Itype) {
		type = Itype;
	}

	void startUp();
	void shutDown();

};

