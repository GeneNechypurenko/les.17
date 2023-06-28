#include "Dog.h"

Dog::Dog(const string name, int age, const string color)
	:Pet(name, age, color)
{
}

void Dog::Sound()
{
	cout << "Bow wow!" << endl;
}

void Dog::Show()
{
	cout << this->color << endl;
}

void Dog::Type()
{
	cout << "Doge" << endl;
}
