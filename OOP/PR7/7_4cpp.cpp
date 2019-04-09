
#include "pch.h"
#include <iostream>

using namespace std;



class Screen {	// Базовый абстрактный класс "Экран"

protected:

	double razr;

public:

	Screen(double size) { this->razr = size; }

	virtual void izmScreen(double size) = 0;	// Виртуальный метод заены экрана

};



class Keyboard {	// Базовый абстрактный класс Клавиатура

protected:
int buttons;
public:
	Keyboard(int buttons) { this->buttons = buttons; }
	virtual void izmKeyboard(int buttons) = 0;	// Виртуальный метод замены клавиатуры

};



class Computer : public Screen, Keyboard {	// Класс "Стационарный компьютер"
public:
Computer(double razr, int buttons) : Screen(razr), Keyboard(buttons) {};
void izmScreen(double size) {
cout << "экран " << razr <<" был изменен на" << size << " размер" << endl;
razr = size;
}
void izmKeyboard(int buttons) {
cout << "клавиатура s  " << this->buttons << " knopkami " <<"byla izmenena na " << buttons << " knopok" << endl;
this->buttons = buttons;
}

~Computer() {}

};



class Notebook : public Screen, Keyboard {	// Класс "Ноутбук"

public:

	Notebook(double razr, int buttons) : Screen(razr), Keyboard(buttons) {};



	void izmScreen(double size) {

		if (razr == size) {

			cout << "ekran byl izmenen" << endl;

		}

		else {

			cout << "экр" << endl;

		}

	}



	void izmKeyboard(int buttons) {

		if (this->buttons == buttons) {

			cout << "klaviatura byla izmenena" << endl;

		}

		else {

			cout << "klaviatura u niutbuka ne byla izmenena" << endl;

		}

	}



	~Notebook() {}

};



class Phone : public Screen, Keyboard {	// Класс "Телефон"

public:

	Phone(double razr, int buttons) : Screen(razr), Keyboard(buttons) {};



	void izmScreen(double size) {

		if (razr == size) {

			cout << "ekran telefona byl izmenen" << endl;

		}

		else {

			cout << "ekran telefona ne byl izmenen" << endl;

		}

	}



	void izmKeyboard(int buttons) {

		cout << "klaviatura telefona ne mozet byt izmenena" << endl;

	}



	~Phone() {}

};



int main() {

	setlocale(LC_ALL, "Russian");

	int z = 1;

	do {

		cout << "s kakim ustroistvom budem rabokat 1-telefon, 2- notebook, 3- computer" << endl;

		int e, r;

		cin >> z;

		switch (z)

		{

		case 1: {cout << "vvedite kolvo razmer ekrana i kolichestvo knopok" << endl;



			cin >> e >> r;

			Phone a(e, r);

			cout << "vvedize na skol'ko vy hotite izmenit razmer ekrana i kolichestvo knopok" << endl;

			cin >> e >> r;

			a.izmKeyboard(e);

			a.izmScreen(r);

			break; }

		case 2: {cout << "vvedite kolvo razmer ekrana i kolichestvo knopok" << endl;



			cin >> e >> r;

			Notebook b(e, r);

			cout << "vvedize na skol'ko vy hotite izmenit razmer ekrana i kolichestvo knopok" << endl;

			cin >> e >> r;

			b.izmKeyboard(e);

			b.izmScreen(r);

			break; }

		case 3: {cout << "vvedite kolvo razmer ekrana i kolichestvo knopok" << endl;



			cin >> r >> e;

			Computer c(e, r);

			cout << "vvedize na skol'ko vy hotite izmenit razmer ekrana i kolichestvo knopok" << endl;

			cin >> e >> r;

			c.izmKeyboard(e);

			c.izmScreen(r);

			break; }

		default:

			break;

		}



	} while (z != 0);

	system("pause");

	return 0;

}