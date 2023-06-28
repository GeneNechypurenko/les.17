#include <iostream>

#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include "Hamster.h"

using namespace std;

//Створити базовий клас «Домашня тварина»
//
//і похідні класи «Собака», «Кішка»,«Папуга», «Хом’як».
//
//За допомогою конструктора встановити ім’я кожної тварини і її характеристики.
//
//Реалізуйте для кожного з класів функції :
//■ Sound — видає звук тварини(пишемо текстом в консоль);
//■ Show — виводить на екран ім’я тварини;
//■ Type — виводить на екран назву її підвиду.

int main()
{
	
	Pet* p = nullptr;

	p = new Dog("Buddy", 3, "Ginger");

	p->Sound();
	p->Show();
	p->Type();

	cout << endl << "---------------" << endl;

	p = new Cat("Felix", 2, "Black");

	p->Sound();
	p->Show();
	p->Type();

	cout << endl << "---------------" << endl;

	p = new Parrot("Bandit", 4, "Blue");

	p->Sound();
	p->Show();
	p->Type();

	cout << endl << "---------------" << endl;

	p = new Hamster("Stinky", 4, "Hazel");

	p->Sound();
	p->Show();
	p->Type();

	return 0;
}