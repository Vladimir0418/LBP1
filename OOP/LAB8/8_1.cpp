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
		cout << "введите имя фамилию год рождения" << endl;
		cin >> name;
		cin >> surname;
		cin >> year;
	}
	string get_Data()
	{
		return name + surname + to_string(year);
	}
	friend ostream& operator<< (std::ostream &out, const Student &student)
	{
		out << student.name << student.surname << student.year;
		return out;
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
		cout << "ввеите почту и телефон" << endl;
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
	setlocale(LC_ALL, "russian");
	Student a;
	vector<Student> p;
	p.push_back(a);
	p.push_back(a);
	p.push_back(a);
	p.push_back(a);
	cout << "studenty:" << endl;
	for (int i = 0; i < p.size(); i++)cout << p[i] << endl;
	cout << "starosta:" << endl;
	Headman b;
	cout << b.get_HData() << endl;
	system("pause");
	return 0;
}