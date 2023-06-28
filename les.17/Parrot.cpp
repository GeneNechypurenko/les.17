#include "Parrot.h"

Parrot::Parrot(const string name, int age, const string color)
	:Pet(name, age, color)
{
}

void Parrot::Sound()
{
	cout << "Wasssup!" << endl;
}

void Parrot::Show()
{
	cout << this->color << endl;
}

void Parrot::Type()
{
	cout << "Parrot" << endl;
}
