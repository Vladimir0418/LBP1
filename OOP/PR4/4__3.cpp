
#include "pch.h"

#include <iostream>

#include <ctime>

using namespace std;



void fillArray(int **, int, int);	// Заполняет массив случайными числами



void printArray(int **, int, int);	// Выводит массив на экран



int main() 
{
	int x, y;
	setlocale(LC_ALL, "Russian");
	x = 1;

	while (x == 1)

	{
	srand(time(NULL));



	int m, n;

	cout << "строка столбец";

	cin >> n >> m;



	int **arr = new int*[n];

	for (int i = 0; i < n; i++) {

		arr[i] = new int[m];

	}



	fillArray(arr, n, m);

	printArray(arr, n, m);



	for (int i = 0; i < n; i++) {

		delete[] arr[i];

	}

	delete[] arr;


	cout << endl;

	cout << "повторить" << " " << "введите 0 выход 1";

	cin >> y;

	x = x + y;

	}
	system("pause");

	return 0;

}



void fillArray(int **arr, int n, int m) {

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			arr[i][j] = rand() % 41 + 10;

		}

	}

}



void printArray(int **arr, int n, int m) {

	cout << "Array:" << endl;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			cout << arr[i][j] << ' ';

		}

		cout << endl;

	}

}