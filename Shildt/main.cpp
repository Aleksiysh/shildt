
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
	int j;
public:
	derived(int n) { cout << "Конструктор производный\n"; j = n; }
	~derived(){ cout << "Деструктор производный\n"; }
	void showj() { cout << "j=" << j << endl; }
};

int main()
{
	to1251();
	derived ob(10);
	ob.showj();
	//system("pause");
	return 0;
}