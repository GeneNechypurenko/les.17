#include "Cat.h"

Cat::Cat(const string name, int age, const string color)
	:Pet(name, age, color)
{
}

void Cat::Sound()
{
	cout << "Meooow!" << endl;
}

void Cat::Show()
{
	cout << this->color << endl;
}

void Cat::Type()
{
	cout << "Cat" << endl;
}
