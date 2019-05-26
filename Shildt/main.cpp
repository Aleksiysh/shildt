
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class B1 {
	int a;
public:
	B1(int x) { a = x; };
	int geta() { return a; }
};
class B2 {
	int b;
public:
	B2(int x){
		b = x;
	}
	int getb() { return b; }
};
class D :public B1, public B2 {
	int c;
public:
	D(int x, int y, int z) :B1(z),B2(y) {
		c = x;
	}
	void show() {
		cout << geta() << " " << getb() << " " << c << endl;
	}
};
int main()
{
	to1251();
	D ob(1, 2, 3);
	ob.show();

	//system("pause");
	return 0;
}