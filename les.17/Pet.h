#pragma once
#include <iostream>

using namespace std;

class Pet
{
protected:
	string name;
	string color;
	int age;

public:
	Pet(const string name, int age, const string color);

	virtual void Sound() = 0;
	virtual void Show() = 0;
	virtual void Type() = 0;
};

