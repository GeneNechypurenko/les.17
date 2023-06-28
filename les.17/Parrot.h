#pragma once
#include <iostream>

#include "Pet.h"

using namespace std;

class Parrot :public Pet
{
private:

public:
	Parrot(const string name, int age, const string color);

	void Sound() override;
	void Show() override;
	void Type() override;
};

