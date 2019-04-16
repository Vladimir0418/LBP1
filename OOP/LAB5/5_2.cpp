#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
class Vector 
{
double x, y, ugol;

public:
Vector() 
{
cout << "введите x и y кодинаты вектора" << endl;
cin >> x >> y;

	}
Vector(const Vector &other)
{
this->x = other.x;
this->y = other.y;
}
~Vector() {}
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
Vector summa(Vector &other)
{
this->x = this->x + other.x;
this->y = this->y + other.y;
return *this;
}
Vector raznost(Vector &other)
{
this->x = this->x - other.x;
this->y = this->y - other.y;
return *this;
}
double proizvsk(Vector &other)
{
return this->modul()*other.modul()*cos(ugol);
}
double proizvvec(Vector &other)
{
return this->modul()*other.modul()*sin(ugol);
}
friend ostream& operator<< (std::ostream &out, const Vector &vector)
{
out << "(" << vector.x << "," << vector.y << ")";
return out;
}
friend istream& operator>> (std::istream &in, Vector &vector)
{
cout << "введите  кодинаты x и y " << endl;
in >> vector.x;
in >> vector.y;
return in;
}
bool operator > (Vector & other)
{
if (this->modul() > other.modul())return true;
else return false;
}
bool operator < (Vector & other)
{
if (this->modul() < other.modul())return true;
else return false;
}
bool operator == (Vector & other)
{
if (this->modul() == other.modul())return true;
else return false;
	}
Vector& operator ++ ()
{
this->x = x + 1;
this->y = y + 1;
return *this;
}
Vector& operator -- () 
{
this->x = x - 1;
this->y = y - 1;
return *this;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
Vector a, b;
if (a > b)cout << a << "bolshe" << endl;
else if (a < b)cout << b << "bolshe" << endl;
else if (a == b)cout << "ravno";
cout << "incr a" << ++a << endl;
cout << "decr a" << --a << endl;
a.Set_ugol(b);
cout << "summa ravna" << a.summa(b) << endl;
cout << "raznost ravna" << a.raznost(b) << endl;
cout << "proizv skal ravna" << a.proizvsk(b) << endl;
cout << "proizv vec ravna" << a.proizvvec(b) << endl;
system("pause");
return 0;
}