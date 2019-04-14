#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Child
{
	string name;
	string surname;
	int year;
public:
	void set_data()
	{
		cout << "vvedite name surname year" << endl;
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
	Child a, b;
	a.set_data();
	cout << a.get_data() << endl;
	b.set_data();
	cout << b.get_data() << endl;
	system("pause");
	return 0;
}