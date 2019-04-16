#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student 
{

protected:
	string name;
	string surname;
	int year;
public:
	Student(string &name, string &surname, int year)
	{
		this->name = name;
		this->surname = surname;
		this->year = year;
	}
	Student()
	{
		cout << "введите имя фамлию и год рождения" << endl;
		cin >> name;
		cin >> surname;
		cin >> year;
	}
	string get_Data()
	{
		return name + surname + to_string(year);
	}
};
class Headman :public Student
{
	string email;
	int phone;
public:
	Headman(string& email, int phone) :Student(name, surname, year)
	{
		this->email = email;
		this->phone = phone;
	}
	Headman() :Student()
	{
		cout << "введите почту и телефон" << endl;
		cin >> email;
		cin >> phone;
	}
	string get_HData()
	{
		return get_Data() + email + to_string(phone);
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
Student a;
cout << a.get_Data() << endl;
Headman b;
cout << b.get_HData() << endl;
system("pause");
return 0;
}