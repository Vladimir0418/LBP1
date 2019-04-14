#include "pch.h"
#include <iostream>

using namespace std;

int summa(int a, int b)
{
	return a + b;
}
int proizv(int a, int b)
{
	return a * b;
}
int raznost(int a, int b)
{
return a - b;
}
int(*p)(int a, int b);
int main()
{
int a, b,c;
setlocale(LC_ALL, "Russian");
cout << "введите а " << endl;
cin >> a;
cout << "введите b " << endl;
cin >> b;
cout << "1-raznost 2-summa 3-proizvedenie" << endl;
cin >> c;
switch (c)

	{

	case 1:
	{
		p = raznost;
		break;
	}
	case 2:
	{
		p = summa;
		break;
	}	
	case 3:
	{
		p = proizv;
		break;
	}
	default:
		break;
	}

	cout << p(a, b) << endl;

	system("pause");

	return 0;

}