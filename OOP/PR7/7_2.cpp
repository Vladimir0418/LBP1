#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
class Forug {
protected:
int a1, a2, a3, a4;
public:
Forug()
{
cout << "введите длину сторон" << endl;
cin >> a1 >> a2 >> a3 >> a4;
}
virtual void sqaire() = 0;
};
class Romb :public Forug {
public:
double sinus;
Romb() :Forug() {
cout << "введите меньший угол" << endl;
cin >> sinus;
}
void sqaire()
{
cout << a1 * a1*sin(sinus) << endl;;
}
};
class Pryamougolnic :public Forug {
public:
Pryamougolnic() :Forug()
{


	}
void sqaire()
{
cout << a1 * a3 << endl;
}
};
class Figure
{
public:
void sqaire(Forug *forug) {
cout << "площадь равна:";
forug->sqaire();
}
};
int main()
{
	setlocale(LC_ALL, "Russian");
Pryamougolnic c;
Romb b;
Figure a;
a.sqaire(&b);
a.sqaire(&c);
system("pause");
return 0;
}

