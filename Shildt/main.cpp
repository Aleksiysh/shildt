
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class base {
public:
	base() { cout << "����������� �������\n"; }
	~base() { cout << "���������� �������\n"; }
};
class derived :public base {
public:
	derived() { cout << "����������� �����������\n"; }
	~derived(){ cout << "���������� �����������\n"; }
};

int main()
{
	to1251();
	derived ob;
	//system("pause");
	return 0;
}