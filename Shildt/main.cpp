
#include <iostream>
#include "to1251.h"

using namespace std;

class myclass {
	int a, b;
public:
	void set(int i, int j) { a = i; b = j; }
	void show() { cout << "a=" << a << "  b=" << b << "\n"; }
};

int main()
{
	to1251();
	myclass o1, o2;
	o1.set(10, 4);
	o2 = o1;
	o1.show();
	o2.show();

	system("pause");
	return 0;
}