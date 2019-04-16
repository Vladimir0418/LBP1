#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Animal
{	
protected:
	string name;
	int age;
public:
	Animal(string name, int age) : name(name), age(age) {};
	string getName() { return name; }
	int getAge() { return age; }
	virtual void golos() = 0;
};
class Dog : public Animal
{	
public:
	Dog(string name, int age) : Animal(name, age) {};
	void golos() { cout << "gav gav gav" << endl; }
};
class Cat : public Animal
{
public:
	Cat(string name, int age) : Animal(name, age) {};
	void golos() { cout << "myau" << endl; }
};
int main()
{
	string name;
	int age;
	cout << "kot" << endl;
	cout << "vvedite imya: ";
	cin >> name;
	cout << "vvedite god: ";
	cin >> age;
	Cat c(name, age);
	cout << endl << "sobaka" << endl;
	cout << "vvedite imya: ";
	cin >> name;
	cout << "vvedite god: ";
	cin >> age;
	Dog d(name, age);
	cout << endl << "tvoyua sobaka" << endl << "imya: " << d.getName() << endl << "god: " <<d.getAge() << endl;
	d.golos();
	cout << endl << "tvoy cot" << endl << "imya: " << c.getName() << endl << "god: " << c.getAge() << endl;
	c.golos();
	system("pause");
	return 0;
}