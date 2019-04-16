#include "pch.h"
#include "Complex.h"
#include <iostream>
using namespace std;
int main()
{
	double r, i;
	cout << "Hello, user!\nenter your number (Re first, then Im): ";
	cin >> r >> i;
	Complex c1(r, i);
	cout << "\nThanks, got it! Now the second one : ";
	cin >> r >> i;
	Complex c2(r, i);
	Complex res;
	res = c1 + c2;
	cout << "\nOkay, here you go, lad : ";
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