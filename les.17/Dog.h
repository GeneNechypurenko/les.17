#pragma once
#include <iostream>

#include "Pet.h"

using namespace std;

class Dog:public Pet
{
private:

public:
	Dog(const string name, int age, const string color);

	void Sound() override;
	void Show() override;
	void Type() override;
};

