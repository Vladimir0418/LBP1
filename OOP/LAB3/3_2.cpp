﻿#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Tiles
{
public:
	string brand;
	int size_h, size_w, price;
	string get_Data() 
	{
		return brand + " " + to_string(size_h) + " " + to_string(size_w) + " " + to_string(price);
	}
};
int main()
{
Tiles a, b;
a.brand = "pl";
a.price = 1000;
a.size_h = 10;
a.size_w = 10;
cout << a.get_Data() << endl;
b.brand = "ga";
b.price = 2000;
b.size_h = 20;
b.size_w = 30;
cout << b.get_Data() << endl;
system("pause");
return 0;
}