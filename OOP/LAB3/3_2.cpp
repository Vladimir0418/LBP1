#include "pch.h"
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
a.brand = "caf1";
a.price = 999;
a.size_h = 20;
a.size_w = 20;
cout << a.get_Data() << endl;
b.brand = "caf2";
b.price = 3000;
b.size_h = 40;
b.size_w = 50;
cout << b.get_Data() << endl;
system("pause");
return 0;
}
