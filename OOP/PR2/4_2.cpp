#include "pch.h"
#include <iostream>
// � ������������ ����� <ctime> ���������� �������� ������� time()
#include <ctime> 
// � ������������ ����� <iomanip> ���������� �������� ������� setprecision()
#include <iomanip> 
using namespace std;
int main()
{
	int x=0,y;
	
	setlocale(LC_ALL, "Russian");
	while (x == 1)
	{


		srand(time(0)); // ��������� ��������� �����
		int *a = new int[12]; // �������� ������������� ������� ������������ ����� �� ������ ���������
		for (int c = 0; c < 12; c++)
			a[c] = (rand() % 10) / int((rand() % 10)); //���������� ������� ���������� ������� � ���������������� �� 1 �� 10
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
		delete[]a; // ������������� ������ 
		cout << endl;
		cout << "���������" << " " << "������� 0 ����� 1";
		cin >> y;
		x = x + y;
	}
	system("pause");
	return 0;
}
