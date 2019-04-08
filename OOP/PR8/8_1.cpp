#include "pch.h"
#include <fstream>

#include <iostream>

#include <string>

using namespace std;



int main()

{

	setlocale(LC_ALL, "Russian");

	string s;

	ifstream file("fal.txt");



	if (file.is_open()) { // вызов метода is_open()

		cout << "Все ОК! Файл открыт!\n\n" << endl;

		for (file >> s; !file.eof(); file >> s)

			cout << s << endl;

	}

	else

	{

		cout << "Файл не открыт!\n\n" << endl;

		return ;

	}

	system("pause");

	return 0;

}
