
#include "pch.h"
#include <iostream>

using namespace std;
class Property 
{	// класс собственность

protected:

	float worth;

public:

	Property(float worth)
	{

		this->worth = worth;

	}



	virtual float calculateTax() = 0;



	virtual ~Property()
	{

	}

};
class Appartment : public Property
{	//класс квартира

public:

	Appartment(float worth) : Property(worth) {};

	float calculateTax()
	{

		return worth / 1000;

	}

};
class Car : public Property
{	// класс Авто

public:

	Car(float worth) : Property(worth) {};

	float calculateTax() 
	{

		return worth / 200;

	}

};
class CountryHouse : public Property 
{	// класс дача

public:

	CountryHouse(float worth) : Property(worth) {};

	float calculateTax() 
	{

		return worth / 500;

	}

};
int main()
{

	Property *p[7];


	setlocale(LC_ALL, "russian");
	for (int i = 0; i < 7; i++) 
	{

		float worth;

		if (i < 3) 
		{
			cout << "Введите стоимость кварты " << i + 1 << " : ";

			cin >> worth;

			p[i] = new Appartment(worth);

		}
		else {

			if (i < 5)
			{
				cout << "Введите стоимость машины " << i + 1 << " : ";

				cin >> worth;

				p[i] = new Car(worth);

			}
			else 
			{
				cout << "Введите стоимость дачи " << i + 1 << " : ";

				cin >> worth;
				p[i] = new CountryHouse(worth);

			}

		}

	}



	cout << "Taxes:" << endl;

	for (int i = 0; i < 7; i++)
	{

		cout << i + 1 << ". " << p[i]->calculateTax() << endl;

	}



	system("pause");

	delete[] p;

	return 0;

}