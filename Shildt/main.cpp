
#include <iostream>
#include <cstring>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;


int main()
{
	to1251();
	int *p;
	p = new int;
	if (!p) {
		cout << "������ ��������� ������\n";
		return 1;
	};
	*p = 1000;
	cout << "��� ����� �� ��������� " << p << ": " << *p<<"\n" ;

	delete p;

	cout << p<<"\n";
	

	system("pause");
	return 0;
}