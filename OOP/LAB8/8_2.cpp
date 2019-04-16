#include "pch.h"
#include <iostream>
#include <string>
#include<cmath>
#include<list>
using namespace std;
class Complex 
{
	double Re, Im;
public:

	Complex()
	{
		cout << "введите действительную часть " << endl;
		cin >> Re;
		cout << "введите мнимую часть" << endl;
		cin >> Im;
	}
	Complex(double im, double re) 
	{
		this->Im = im;
		this->Re = re;
	}
	Complex(const Complex &other)
	{
		this->Re = other.Re;
		this->Im = other.Im;
	}
	~Complex() {};
	void set_c()
	{
		cout << "введите действительную часть" << endl;
		cin >> Re;
		cout << "введите мнимую часть" << endl;
		cin >> Im;
	}
	string get_c()
	{
		return to_string(Re) + "+" + to_string(Im) + "i";
	}
	double modul()
	{
		return sqrt(Re*Re + Im * Im);
	}
	double arg()
	{
		return atan(Im / Re);
	}
	friend istream& operator>> (std::istream &in, Complex &point)
	{
		cout << "введите действительную мнимую часть" << endl;
		in >> point.Re;
		in >> point.Im;
		return in;
	}
	friend ostream& operator<< (std::ostream &out, const Complex &point)
	{
		out << point.Re << "+i*" << point.Im;
		return out;
	}
	bool operator <(Complex &other)
	{
		if (this->modul() < other.modul())return true;
		else return false;
	}
	bool operator >(Complex &other)
	{
		if (this->modul() > other.modul())return true;
		else return false;
	}
	bool operator ==(Complex &other)
	{
		if (this->modul() == other.modul())return true;
		else return false;
	}
	Complex& operator ++()
	{
		this->Re++;
		return *this;
	}
	Complex& operator --()
	{
		this->Re--;
		return *this;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	list<Complex> a;
	a.push_back(Complex());
	auto it = a.begin();
	int z = -1;
	do {
		cout << "введите 1 для добавления 0-выход" << endl;
		cin >> z;
		if (z == 1)a.push_back(Complex());
	} while (z != 0);
	for (it = a.begin(); it != a.end(); ++it)cout << *it << endl;
	system("pause");
	return 0;
}