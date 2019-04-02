#include "pch.h"
#include <iostream>
// в заголовочном файле <ctime> содержится прототип функции time()
#include <ctime> 
// в заголовочном файле <iomanip> содержится прототип функции setprecision()
#include <iomanip> 
using namespace std;
int main()
{
	int x=0,y;
	
	setlocale(LC_ALL, "Russian");
	while (x == 1)
	{


		srand(time(0)); // генерация случайных чисел
		int *a = new int[12]; // создание динамического массива вещественных чисел на десять элементов
		for (int c = 0; c < 12; c++)
			a[c] = (rand() % 10) / int((rand() % 10)); //заполнение массива случайными числами с масштабированием от 1 до 10
		cout << "array = ";
		for (int c = 0; c < 12; c++)
			cout << a[c] << "    ";
		

		for (int c = 0; c < 10; c + 2)
		{
			a[c] = a[c + 1];
			a[+1] = a[c];
		}


		cout << "array = ";
		for (int c = 0; c < 12; c++)
			cout << a[c] << "    ";
		delete[]a; // высвобождение памяти 
		cout << endl;
		cout << "повторить" << " " << "введите 0 выход 1";
		cin >> y;
		x = x + y;
	}
	system("pause");
	return 0;
}
