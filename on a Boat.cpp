// on a Boat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>


using namespace std;


class Tank
{
public:
	const float getCapacity() { return capacity; };
	float getMeter() { return meter; };
	bool isEmpty();
	void refill(float);
protected:
	Tank(float);
	~Tank() {}
	float capacity;
	float meter;
private:
	Tank() {}
};

Tank::Tank(float cap)
{
	capacity = cap;
}

bool Tank::isEmpty()
{
	if (meter == 0)
		return true;
	return false;
}

void Tank::refill(float gallons)
{
	meter += gallons;
}


int main()
{
	Tank *t1p = new Tank(20);
	if (t1p->isEmpty)
	{
		t1p->refill(20);
	}
	return 0;
}