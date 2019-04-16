#include "pch.h"
#include "Complex.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"russian");
	double r, i;
	cout << "введите Re ,  Im: ";
	cin >> r >> i;
	Complex c1(r, i);
	cout << "\nвведите второе число : ";
	cin >> r >> i;
	Complex c2(r, i);
	Complex res;
	res = c1 + c2;
	cout << "\nрезультат : ";
	cout << "\nA + B = ";
	res.getnum();
	res = c1 - c2;
	cout << "\n\nA - B = ";
	res.getnum();
	res = c1 * c2;
	cout << "\n\nA * B = ";
	res.getnum();
	res = c1 / c2;
	cout << "\n\nA / B = ";
	res.getnum();
	system("pause");
	return 0;
}
