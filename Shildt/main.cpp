
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class base {
	int i;
public:
	base(int n) { cout << "����������� �������\n"; i = n; }
	~base() { cout << "���������� �������\n"; }
	void showi() { cout << "i=" << i << endl; }
};
class derived :public base {
	int j;
public:
	derived(int n):base(n) { cout << "����������� �����������\n"; j = n; }
	~derived() { cout << "���������� �����������\n"; }
	void showj() { cout << "j=" << j << endl; }
};

int main()
{
	to1251();
	derived ob(10);
	ob.showi();
	ob.showj();
	//system("pause");
	return 0;
}