
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
	int j;
public:
	derived(int n) { cout << "����������� �����������\n"; j = n; }
	~derived(){ cout << "���������� �����������\n"; }
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