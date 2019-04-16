#include "pch.h"
#include <iostream>
#include <string>
#include<cmath>
#include<queue>
using namespace std;
class avto
{
	int skorost;
	int god;
	string nazvanie;
public:

	avto()
	{
		cout << "введите год выпуска" << endl;
		cin >> this->god;
		cout << "введите макс скороть" << endl;
		cin >> this->skorost;
		cout << "введите название" << endl;
		cin >> this->nazvanie;
	}
	void set_avto()
	{
		cout << "введите год выпуска" << endl;
		cin >> this->god;
		cout << "введите макс скорость" << endl;
		cin >> this->skorost;
		cout << "введите название" << endl;
		cin >> this->nazvanie;
	}
	void get_avto()
	{
		cout << god << endl;
		cout << skorost << "km/h" << endl;
		cout << nazvanie << endl;
	}
	friend ostream& operator<< (std::ostream &out, const avto &avto)
	{
		out << avto.god << endl << avto.skorost << "km/h" << endl << avto.nazvanie << endl;
		return out;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	queue<avto> a;
	int z;
	do {
		cout << "1-захеть 2-выехать" << endl;
		cin >> z;
		switch (z)
		{
		case 1: a.push(avto());
			cout << "авто в очереди" << endl;
			break;
		case 2:
			cout << a.front() << "авто вышло из очереди" << endl;
		default:
			break;
		}
	} while (z != 0);
	system("pause");
	return 0;
}