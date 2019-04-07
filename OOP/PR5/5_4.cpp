#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

	float a, b, s;
	int c, x, y, z, n, b1, c1;
	setlocale(LC_ALL, "Russian");

	x = 0;
	cout << "введите число" << endl;
	cin >> a;
	cout << "выберите знак 1)+ 2)- 3)* 4)/";
	cin >> c;
	cout << "введите число" << endl;
	cin >> b;
	switch (c)
	{
	case 1:
	{
		s = a + b;
		break;
	}
	case 2:
	{
		s = a - b;
		break;
	}
	case 3:
	{
		s = a * b;
		break;
	}
	case 4:
	{
		s = a / b;
		break;
	}
	}
	cout << s << endl;
	while (x < 1)
	{


		z = 0;
		cout << endl;
		cout << "1)обнулить сумму" << "2)продолжить  " << endl;
		cin >> z;
		if (z == 1)
		{
			s = 0;
		}
		else
		{

			cout << "выберите знак 1)+ 2)- 3)* 4)/" << endl;
			cin >> c1;
			cout << "введите число" << endl;
			cin >> b1;
			switch (c1)
			{
			case 1:
			{
				s = s + b1;
				break;
			}
			case 2:
			{
				s = s - b1;
				break;
			}
			case 3:
			{
				s = s * b1;
				break;
			}
			case 4:
			{
				s = s / b1;
				break;
			}
			}
			cout << endl;
			cout << s;
		}

		cout << endl;
		cout << "породолжить" << " " << "введите 0 выход 1";
		cin >> y;
		x = x + y;
	}
		system("pause");
		return 0;
	
}
