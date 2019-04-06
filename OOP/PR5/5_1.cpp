#include "pch.h"

#include <iostream>
#include <ctime>
using namespace std;
void puz(int, int *);
void puzfloat(int , float *);
void puzint(int , int *);
void puz(int k, int *);
void puz(int k, float *);
int main()
{
	
	int array[1000],k;
	float a[1000];
	setlocale(LC_ALL, "Russian");
	cout<<"введите кол-во элементов массива";
	cin >> k;
	cout << "до сорт"<<endl;
	puzint(k, array);
    puzfloat(k, a);
	cout << "после сорт" << endl;
	cout << "массив инт" << endl;
	puz( k, array);
	cout << "массив флоат" << endl;
	puz(k, a);
	system("pause");
	return 0;
}
void puzint(int k,int *arra)
{
	for (int i = 0;i<k;i++)
	{
		arra[i] = rand() % 100 + 1;
		cout << arra[i] << "\t";
	}
	cout << endl;
}
void puzfloat(int k, float *a)
{
	for (int i = 0; i < k; i++)
	{
		a[i] = (rand() % 100 + 1)*0.1;
		cout << a[i]<<"\t";
	}
	cout << endl;
}
void puz(int k, int *orr)
{
	int n;
	n = 1;
	while (n!=0)
	{
		n = 0;
		for (int i = 0; i < k-1; i++)
		{
			if (orr[i] > orr[i + 1])
			{
				n = n + 1;
				swap(orr[i], orr[i + 1]);
			}
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << orr[i] << "\t";
	}
	cout << endl;
}
void puz(int k, float *orr)
{
	int n;
	n = 1;
	while (n != 0)
	{
		n = 0;
		for (int i = 0; i < k-1; i++)
		{
			if (orr[i] > orr[i + 1])
			{
				n = n + 1;
				swap(orr[i], orr[i + 1]);
			}
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << orr[i] << "\t";
	}
	cout << endl;
}
