#include "pch.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
string s;
cin >> s;
ofstream fout("fff.txt"); // создаём объект классаofstream для записи и связываем его с файлом cppstudio.txt
fout << s; // запись строки в файл
fout.close(); // закрываем файл
system("pause");
return 0;
}
