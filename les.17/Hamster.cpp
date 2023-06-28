#include "Hamster.h"

Hamster::Hamster(const string name, int age, const string color)
	:Pet(name, age, color)
{
}

void Hamster::Sound()
{
	cout << "Hamster don't making any sounds" << endl;
}

void Hamster::Show()
{
	cout << this->color << endl;
}

void Hamster::Type()
{
	cout << "Hamster" << endl;
}
