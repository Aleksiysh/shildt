//#include "stdafx.h"
#include <iostream>
#include "to1251.h"

using namespace std;

class samp {
	int i;
public:
	samp(int n) { i = n; }
	void set_i(int n) { i = n; }
	int get_i() { return i; }
};
void sqrt_it(samp *o) {
	o->set_i(o->get_i()*o->get_i());
	cout << "��� ����� ������ � �������� i ����� " << o->get_i() << "\n";
}

int main()
{
	to1251();
	samp a(10);
	sqrt_it(&a);
	cout << "�� ���������� a.i � ������� main() �� ����������:";
	cout << a.get_i()<<"\n";

	system("pause");
	return 0;
}