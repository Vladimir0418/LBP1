#include "pch.h"

#include <iostream>
#include <ctime>
using namespace std;
void puz(int, int *);
void puzfloat(int , float *);
void puzint(int , int *);
void  vebor(int k, int *);
void  vebor(int k, float *);
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
	vebor( k, array);
	cout << "массив флоатее" << endl;
	vebor(k, a);
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
void vebor(int k, int *orr)
{
	int n,x;
	n = 1000000;
	x = 0;
	for (int i = 0; i < k; i++)
	{

		for (int j = x; j < k; i++)
		{

			if (orr[j] < n)
			{
				n = j;
			}
		}
		swap(orr[i], orr[n])
			x = x + 1;
	}
	
	for (int i = 0; i < k; i++)
	{
		cout << orr[i] << "\t";
	}
	cout << endl;
}
void vebor(int k,  *orr)
{
	int n, x;
	n = 1000000;
	x = 0;
	for (int i = 0; i < k; i++)
	{

		for (int j = x; j < k; i++)
		{

			if (orr[j] < n)
			{
				n = j;
			}
		}
		swap(orr[i], orr[n])
			x = x + 1;
	}

	for (int i = 0; i < k; i++)
	{
		cout << orr[i] << "\t";
	}
	cout << endl;
}
