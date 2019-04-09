
#include "pch.h"
#include <iostream>

#include <cmath>

#include <string>

using namespace std;



class Vehicle {

protected:int massa;

		  int skorost;

		  string name;

public:Vehicle() {

	cout << "введите массу скорость название" << endl;

	cin >> massa >> skorost >> name;

}

	   virtual  void kto_ya() = 0;

};

class Bycicle :public Vehicle {

public:

	Bycicle() :Vehicle() {  }

	void kto_ya() {

		cout << " velosiped:" << name << ' ' << skorost << "km/h " << massa << "kg" << endl;

	}



};



class Bus :public Vehicle {

public:

	Bus() :Vehicle() {}

	void kto_ya() {

		cout << " avtobus:" << name << ' ' << skorost << "km/h " << massa << "kg" << endl;

	}



};



class Avto :public Vehicle {

public:

	Avto() :Vehicle() { }

	void kto_ya() {

		cout << " mashina:" << name << ' ' << skorost << "km/h " << massa << "kg" << endl;

	}



};











int main()

{
	setlocale(LC_ALL, "Russian");
	string z;

	cout << "введите транспортное средство (bus, bycicle, avto)" << endl;

	cin >> z;

	if (z == "bus") {
		Bus a; a.kto_ya();

	}

	else if (z == "avto") {

		Avto a; a.kto_ya();

	}

	else if (z == "bycicle") {

		Bycicle a; a.kto_ya();

	}

	system("pause");

	return 0;

}