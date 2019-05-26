
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class base {
protected:
	int a, b;
public:
	void set_ab(int i, int j) { a = i; b = j; }
};
class derived :protected base {
	int c;
public:
	void set_c(int i) { c = i; }
	void show_abc() {
		cout << a << " " << b << " " << c << endl;
	}
};


int main()
{
	to1251();
	derived ob;
	ob.set_ab(1, 2);
	ob.set_c(3);
	ob.show_abc();
	system("pause");
	return 0;
}