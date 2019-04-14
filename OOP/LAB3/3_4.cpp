#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
class Vector
{
	double x, y, ugol;

public:
	void set_Vector() 
	{
		cout << "введите x и y кодинаты вектора" << endl;
		cin >> x >> y;
	}
	double modul()
	{
		return sqrt(x*x + y * y);
	}
	void Set_ugol(Vector &other) 
	{
		ugol = this->x*other.x + this->y*other.y / (this->modul()*other.modul());
	}
	string summa(Vector &other) 
	{
		return to_string(this->x + other.x) + "+" + to_string(this->y + other.y);
	}
	string raznost(Vector &other)
	{
		return to_string(this->x - other.x) + "-" + to_string(this->y - other.y);
	}
	double proizvsk(Vector &other)
	{
		return this->modul()*other.modul()*cos(ugol);
	}
	double proizvvec(Vector &other)
	{
		return this->modul()*other.modul()*sin(ugol);
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Vector a, b;
	a.set_Vector();
	b.set_Vector();
	a.Set_ugol(b);
	cout << "summa ravna" << a.summa(b) << endl;
	cout << "raznost ravna" << a.raznost(b) << endl;
	cout << "proizv skal ravna" << a.proizvsk(b) << endl;
	cout << "proizv vec ravna" << a.proizvvec(b) << endl;
	system("pause");
	return 0;
}