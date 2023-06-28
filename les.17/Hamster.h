#pragma once
#include <iostream>

#include "Pet.h"

using namespace std;

class Hamster :public Pet
{
private:

public:
	Hamster(const string name, int age, const string color);

	void Sound() override;
	void Show() override;
	void Type() override;
};

