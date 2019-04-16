#include "pch.h"
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class Complex
{
	double Re, Im;
public:

	Complex() 
	{
cout << "введите действительную часть" << endl;
cin >> Re;
cout << "введите мнимую часть" << endl;
cin >> Im;
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
cout << "введите действительную и мнимую часть" << endl;

in >> point.Re;
in >> point.Im;
return in;
}
friend ostream& operator<< (std::ostream &out, const Complex &point)
{
// поскольку operator<< является другом класса Point, то мы имеем прямой доступ к членам Point
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
	Complex a;
	Complex b = a;
	cout << "a-constructora" << a << endl;
	cout << "b=a" << b << endl;
	cin >> a;
	cout << "a-izmenennoye" << a << endl;
	cout << "modul a" << a.modul() << endl;
	cout << "argument a" << a.arg() << endl;
	cout << "a++ " << ++a << endl;
	cout << "a-- " << --a << endl;
	if (a > b)cout << a << "a bolshe b" << endl;
	else if (a < b)cout << b << "a bolshe b" << endl;
	else if (a == b)cout << "a ravno b";
	system("pause");
	return 0;
}