#include "pch.h"
#include <iostream>

#include<ctime>

#include<string>

using namespace std;

int compare(const void * x1, const void * x2)   // функция сравнения элементов массива
{
	return (*(int*)x1 - *(int*)x2);
}
int comp2(const void * a, const void * b)
{
	return (*(int*)b - *(int*)a);
}
void f1(int *a, int n)
{
	for (int i = n - 1; i > -1; i--)
	{
		cout << a[i];
		cout << endl;
	}
}
void f2(int *a, int n)
{
	qsort(a, n, sizeof(int), compare);
};
void f3(int *a, int n)
{
	qsort(a, n, sizeof(int), comp2);
};
void(*func(int*a, int n))(int*a, int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
		sum += a[i];
	if (sum == a[0])
	{
		return f1;
	}
	else if (sum > a[0])
	{
		return f2;
	}
	else
	{
		return f3;
	}
}
int main()
{
setlocale(LC_ALL, "Russian");
srand(time(0));
int n, l;
cout << "кол-во элементов" << endl;
cin >> n;
int *a = new int[n];
for (int i = 0; i < n; i++)
{
a[i] = rand() % 100 + 1;
cout << a[i] << endl;
}
cout << "введите 1 чтобы задать своё значение a[0]" << endl;
cin >> l;
if (l == 1)
{
cin >> a[0];
}
func(a, n)(a, n);
for (int i = 0; i < n; i++)
{
cout << a[i] << " ";
}

cout << endl;
delete[] a;
system("pause");
return 0;
}