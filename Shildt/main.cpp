//#include "stdafx.h"
#include <iostream>
#include "to1251.h"

using namespace std;

int main()
{
	to1251();

	char string[20];
	cin >> string; // вводим строку, использу€  ириллицу
	cout << "\nвывод: " << string << endl; // ввывод строки
	system("pause");
	return 0;
}