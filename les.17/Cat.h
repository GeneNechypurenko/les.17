#pragma once
#include <iostream>

#include "Pet.h"

using namespace std;

class Cat :public Pet
{
private:

public:
	Cat (const string name, int age, const string color);

	void Sound() override;
	void Show() override;
	void Type() override;
};

