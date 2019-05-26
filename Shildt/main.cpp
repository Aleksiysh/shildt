
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class base {
public:
	base() { cout << "Конструктор базовый\n"; }
	~base() { cout << "Деструктор базовый\n"; }
};
class derived :public base {
public:
	derived() { cout << "Конструктор производный\n"; }
	~derived(){ cout << "Деструктор производный\n"; }
};

int main()
{
	to1251();
	derived ob;
	//system("pause");
	return 0;
}