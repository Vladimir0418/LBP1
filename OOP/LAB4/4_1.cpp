﻿#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Child
{
string name;
string surname;
int year;

public:

Child(string name, string surname, int year) {

this->name = name;
this->surname = surname;
this->year = year;

	}
Child(const Child &other)
{
this->name = other.name;
this->surname = other.surname;
this->year = other.year;
}
~Child() {};
void reset_data() 
{
cout << "введите имя фамилию кол-во лет" << endl;
cin >> name;
cin >> surname;
cin >> year;
}
string get_data()
{
return name + ' ' + surname + ' ' + to_string(year);
}
};
int main()
{
	setlocale(LC_ALL,"Russian");
Child a("gdh", "fgdf", 45), b("", "", 0);
cout << a.get_data() << endl;
a.reset_data();
cout << a.get_data() << endl;
b = a;
cout << b.get_data() << endl;
system("pause");
return 0;
}
