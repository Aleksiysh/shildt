
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class B1 {
	int a;
public:
	B1() { cout << "����������� B1 \n"; }
	~B1() { cout << "���������� B1 \n"; }
};
class B2 {
	int b;
public:
	
	B2() { cout << "����������� B2 \n"; }
	~B2() { cout << "���������� B2 \n"; }
};
class D :public B1, public B2 {
	int c;
public:
	D() { cout << "����������� D \n"; }
	~D() { cout << "���������� D \n"; }
	
};
int main()
{
	to1251();
	D ob;

	//system("pause");
	return 0;
}