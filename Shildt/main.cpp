
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class base {
	int x;
public:
	void setx(int i) { x = i; }
	void showx() { cout << x << endl; }
};

class derived :base {
	int y;
public:
	void set_xy(int i, int j) { setx(i); y = j; }
	void show_xy() { showx(); cout << y << endl; }
};

int main()
{
	to1251();
	derived ob;
	ob.set_xy(10,20);
	

	ob.show_xy();
	

	system("pause");
	return 0;
}