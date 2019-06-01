#include "pch.h"
#include <iostream>
#include <string>
#include <fstream> 
#include <vector>
#include <cmath>
using namespace std;


class tovar

{
public:
	string Famili;
	int kolvok;
	float deni;
	float mesec;
	float god;
	long long nomertel;
	int pros;
	int nomer;
	void Vvod()
	{
		cout << "название товара" << endl;
		cin >> Famili;
		cout << "количество" << endl;
		cin >> kolvok;
		cout << "введите годен до(день,месяц,год)" << endl;
		cout << "введите день" << endl;
		cin >> deni;
		cout << "введите месяц" << endl;
		cin >> mesec;
		cout << "введите год" << endl;
		cin >> god;
		cout << "введите номер (телефона)" << endl;
		cin >> nomertel;
		pros = 0;


	}
	void vevod()
	{

		cout << Famili << " "
			<< kolvok << " "
			<< deni << "." << mesec << "." << god << " " <<
			nomertel << endl;
	}
	void nol()
	{

		Famili = "a";
		kolvok = 0;
		deni = 0;
		mesec = 0;
		god = 0;
		nomertel = 0;
		//pros = 1;
	}
	void corekt()
	{
		int p;
		cin >> p;
		if ((p > 0) && (p < 2))
		{
			cout << "новое название товара: " << endl;
			cin >> Famili;
		}
		if ((p > 1) && (p < 3))
		{
			cout << "новое количество" << endl;
			cin >> kolvok;
		}
		if ((p > 2) && (p < 4))
		{
			cout << "введите годен до: " << endl;
			cout << "введите день" << endl;
			cin >> deni;
			cout << "введите месяц" << endl;
			cin >> mesec;
			cout << "введите год" << endl;
			cin >> god;
		}
		if ((p > 3) && (p < 5))
		{
			cout << "введите новый номер телефона:  " << endl;
			cin >> nomertel;
		}

	}
	void inst()
	{
		cout << "инструкция z" << endl;
		char er;
		cin >> er;
		if (er == 'z')
		{
			system("start инс.txt");
		}
	}
	string& getFamili()
	{
		return Famili;
	}
	int& getKolvok()
	{
		return  kolvok;
	}

	float& getDeni()
	{
		return deni;
	}
	float& getMesec()
	{
		return mesec;
	}
	float& getGod()
	{
		return god;
	}
	long long& getNomertel()
	{
		return nomertel;
	}




	void setFamili(string  Famili)
	{
		this->Famili = Famili;
	}

	void setKolvok(int  kolvok)
	{
		this->kolvok = kolvok;
	}

	void setDeni(float deni)
	{
		this->deni = deni;
	}
	void setMesec(float mesec)
	{
		this->mesec = mesec;
	}
	void setGod(float god)
	{
		this->god = god;
	}
	void setNomertel(long long nomertel)
	{
		this->nomertel = nomertel;
	}
};
class ddaattaa
{
public:
	float deni;
	float mesec;
	float god;
	void vvod()
	{
		cout << "введите день" << endl;
		cin >> deni;
		cout << "введите месяц" << endl;
		cin >> mesec;
		cout << "введите год" << endl;
		cin >> god;
	}
	void vevod()
	{
		cout << deni << "."
			<< mesec << "."
			<< god << " "
			<< endl;
	}


};
int main()
{
	string data;
	int i, conekt, c, l, p, io, io1;
	p = 0;
	int h, h1, r, port, sohr, sohr1;
	port = 0;
	h = 0;
	c = 0;
	sohr = 0;
	sohr1 = 0;
	conekt = 0;
	r = 0;
	io1 = 0;
	l = 0;
	float syma, syma1;
	int n, a, hoor, x, y, z, o;
	int k;
	k = 1;
	hoor = 0;

	setlocale(LC_ALL, "Russian");
	tovar carta[400];
	ddaattaa now;
	for (int i = 0; i < 400; i++)
	{
		carta[i].kolvok = 0;
	}
	carta[400].inst();
	ifstream lol1("test1.txt");
	lol1 >> io1;
	lol1.close();
	cout << "введите дату(день,месяц,год) " << endl;
	now.vvod();
	syma = (now.deni / 100000) + (now.mesec / 100) + now.god;

	while (hoor < 2)
	{
		if (io1 != 0)
		{
			ifstream lol("test1.txt");
			lol >> sohr1;
			lol.close();
		}
		io1 = io1 + 1;
		carta[400].inst();
		if (sohr1 == 0)
		{
			cout << "введите кол-во карт" << endl;
			cin >> n;
			for (int i = 0; i < n; i++)
			{
				syma1 = 0;
				carta[i].Vvod();
				syma1 = (carta[i].deni / 100000) + (carta[i].mesec / 100) + carta[i].god;
				if (syma >= syma1)
				{
					carta[i].pros = 1;
				}

			}
			a = 0;
			x = 0;
			y = 0;

			int l = 1;
			while (l != 0)
			{
				l = 0;
				for (int i = 0; i < n - 1; i++)
				{
					if (carta[i].Famili > carta[i + 1].Famili)
					{
						l = l + 1;
						swap(carta[i].Famili, carta[i + 1].Famili);
						swap(carta[i].kolvok, carta[i + 1].kolvok);
						swap(carta[i].deni, carta[i + 1].deni);
						swap(carta[i].mesec, carta[i + 1].mesec);
						swap(carta[i].god, carta[i + 1].god);
						swap(carta[i].nomertel, carta[i + 1].nomertel);
						swap(carta[i].pros, carta[i + 1].pros);
					}
				}
			}
		}
		else
		{
			ifstream file("test.txt");
			vector<tovar> array;
			tovar test;
			for (int i = 0; i < sohr1; i++)
			{
				string Famili, kolvok, deni, mesec, god, nomertel;
				getline(file, Famili, ' ');
				getline(file, kolvok, ' ');
				getline(file, deni, ' ');
				getline(file, mesec, ' ');
				getline(file, god, ' ');
				getline(file, nomertel);
				test.setFamili(Famili);
				test.setKolvok(stoi(kolvok));          //   флоат stof
				test.setDeni(stof(deni));
				test.setMesec(stof(mesec));
				test.setGod(stof(god));
				test.setNomertel(stoll(nomertel));     //  инт stoi
				array.push_back(test);

			}
			file.close();
			for (int i = 0; i < sohr1; i++)
			{
				cout << i << ": " << endl << "Famili: " << array[i].getFamili() << endl <<
					"Kolvok: " << array[i].getKolvok() << endl <<
					"Deni: " << array[i].getDeni() << "Mesec: " << array[i].getMesec() << "God: "
					<< array[i].getGod() << "nomertel: " << array[i].getNomertel() << endl;
				carta[i].Famili = array[i].getFamili();
				carta[i].kolvok = array[i].getKolvok();
				carta[i].deni = array[i].getDeni();
				carta[i].mesec = array[i].getMesec();
				carta[i].god = array[i].getGod();
				carta[i].nomertel = array[i].getNomertel();
				carta[i].pros = 0;
			}

		}
		if (sohr1 == 0)
		{
			for (int i = 0; i < n; i++)
			{
				cout << i << ")";
				carta[i].vevod();
			}
		}
		else
		{
			for (int i = 0; i < sohr1; i++)
			{
				cout << i << ")";
				carta[i].vevod();
			}
		}
		cout << endl;
		cout << "введите 1 чтобы завершить работу " << "перерасчет 0" << endl;
		cin >> x;
		if (x == 0)
		{
			cout << "введите 1 изменить иформацию(удалить) о товаре(существующем) " << "добавить в базу данных 0" << endl;
			cin >> y;
			if (y == 0)
			{
				r = 0;
				h = 0;
				while (r < 1)
				{


					cout << "Сколько элементов нужно добавить " << endl;
					cin >> a;
					h = h + a;
					if (sohr1 == 0)
					{
						c = n + a;
						for (int i = n; i < c; i++)
						{
							syma1 = 0;
							carta[i].Vvod();
							syma1 = (carta[i].deni / 100000) + (carta[i].mesec / 100) + carta[i].god;
							if (syma >= syma1)
							{
								carta[i].pros = 1;
							}
						}
						swap(n, c);
					}
					else
					{
						c = sohr1 + a;
						for (int i = sohr1; i < c; i++)
						{
							syma1 = 0;
							carta[i].Vvod();
							syma1 = (carta[i].deni / 100000) + (carta[i].mesec / 100) + carta[i].god;
							if (syma >= syma1)
							{
								carta[i].pros = 1;
							}
						}
						swap(sohr1, c);
					}


					cout << "1)завершить  0)продолжить " << endl;
					cin >> r;
				}
			}
			else
			{
				z = 0;
				while (z < 2)
				{
					cout << "хотите удалить товар введите 1 изменить инф введите 0" << endl;
					cin >> port;
					if (port < 1)
					{

						cout << "введите номер товара " << endl;
						cin >> i;
						cout << "введите номер элемента который нужно изменить" << endl;
						cout << "1)название товара: " << carta[i].Famili << " "
							<< "2)количество: " << carta[i].kolvok << " "
							<< "3)введите годен до:  " << carta[i].deni << " " <<
							carta[i].mesec << " " << carta[i].god << " "
							<< "4)введите телефона:  " << carta[i].nomertel << endl;
						carta[i].corekt();

					}
					else
					{
						int aa;
						aa = 0;
						cout << "введите номер товара " << endl;
						cin >> aa;
						carta[aa].kolvok = 0;
					}
					cout << "введите 1)продолжить 2)завершить корекцию" << endl;
					cin >> z;

				}
			}

			//---------------------------------------------------------------------------------------------------
			if (sohr1 == 0)
			{
				c = n + h;
			}
			else
			{
				c = sohr1 + h;
			}
			l = 1;
			while (l != 0)
			{
				l = 0;
				for (int i = 0; i < c - 1; i++)
				{
					if (carta[i].Famili > carta[i + 1].Famili)
					{
						l = l + 1;
						swap(carta[i].Famili, carta[i + 1].Famili);
						swap(carta[i].kolvok, carta[i + 1].kolvok);
						swap(carta[i].deni, carta[i + 1].deni);
						swap(carta[i].mesec, carta[i + 1].mesec);
						swap(carta[i].god, carta[i + 1].god);
						swap(carta[i].nomertel, carta[i + 1].nomertel);
						swap(carta[i].pros, carta[i + 1].pros);
					}
				}
			}
			//----------------------------------------------------------------------------------------------------------------------
		}
		if (sohr1 == 0)
		{
			c = n + h;
		}
		else
		{
			c = sohr1 + h;
		}
		cout << endl;
		ofstream rewrite("test.txt");
		rewrite.write("", 0);
		rewrite.close();
		ofstream rewrite1("test1.txt");
		rewrite1.write("", 0);
		rewrite1.close();
		fstream f;
		f.open("test.txt");
		sohr = 0;
		for (int i = 0; i < c; i++)
		{
			if ((carta[i].kolvok != 0) && (carta[i].kolvok >= 1) && (carta[i].pros == 0))
			{
				cout << i << ")";
				carta[i].vevod();

				f << carta[i].Famili << " "
					<< carta[i].kolvok << " "
					<< carta[i].deni << " " << carta[i].mesec << " " << carta[i].god << " " <<
					carta[i].nomertel << endl;
				sohr = sohr + 1;


			}
		}
		f.close();

		fstream fe;
		fe.open("test1.txt");
		fe << sohr;
		fe.close();
		cout << endl;
		cout << "введите 1)продолжить корекцию 2)завершить работу" << endl;
		cin >> hoor;
		for (int i = 0; i < 400; i++)
		{
			carta[i].nol();
		}
	}
	system("pause");
	return 0;



}
