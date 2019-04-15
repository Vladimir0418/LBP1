#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Tiles
{
	string brand;
	int size_h, size_w, price;
public:
	Tiles()
	{
		cout << "введите название бренда длину ширину и цену" << endl;
		cin >> brand;
		cin >> size_h >> size_w >> price;
	}
	Tiles(const Tiles &other)
	{
		this->brand = other.brand;
		this->size_h = other.size_h;
		this->size_w = other.size_w;
		this->price = other.price;
	}
	~Tiles() {};
	string get_Data()
	{
		return brand + " " + to_string(size_h) + " " + to_string(size_w) + " " + to_string(price);
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Tiles a;
	cout << "a=" << a.get_Data() << endl;
	Tiles b = a;
	cout << "b=" << b.get_Data() << endl;
	system("pause");
	return 0;
}