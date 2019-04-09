#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
class Animal {

protected:

	string name;

	int year;

public:

	Animal(string name, int year) {

		this->name = name;

		this->year = year;
	}
	Animal() {
		cout << "введите имя кол-во лет " << endl;
		cin >> name;
		cin >> year;
	}
	virtual void golos() = 0;
	void get_Data() {
		cout << "да " << name << " " << year << endl;
	}
};



class Cat : public Animal {
public:
	Cat(string name, int year) :Animal(name, year) {}
	Cat() :Animal() {}
	void golos() {
		cout << "мяяяууууу" << endl;
	}
};
class Dog : public Animal {
public:
	Dog(string name, int year) :Animal(name, year) {}
	Dog() :Animal() {}
	void golos() {
		cout << "гаааввв гааавв гааавв" << endl;
	}
};
class Parrot : public Animal {
public:
	Parrot(string name, int year) :Animal(name, year) {}
	Parrot() :Animal() {}
	void golos() {
		cout << "дорова" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Cat a;
	a.get_Data();
	a.golos();
	Dog b;
	b.get_Data();
	b.golos();
	Parrot c;
	c.get_Data();
	c.golos();
	system("pause");

	return 0;

}