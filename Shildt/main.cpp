
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class coord {
	int x, y;
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i, y = j; }
	void get_xy(int &i, int &j) { i = x, j = y; }
	void set_xy(int i, int j) { x = i; y = j; }
	coord operator+(coord &ob2);
	coord operator-(coord ob2);
	coord operator=(coord ob2);
	coord operator+(int i);
	int operator==(coord &ob2);
	int operator&&(coord &ob2);
};
coord coord::operator+(coord &ob2) {
	coord temp;
	temp.x = x + ob2.x;
	temp.y = y + ob2.y;
	return temp;
}
coord coord::operator-(coord ob2) {
	coord temp;
	temp.x = x - ob2.x;
	temp.y = y - ob2.y;
	return temp;
}
coord coord::operator=(coord ob2) {
	x = ob2.x;
	y = ob2.y;
	return *this;
}
coord coord::operator+(int i) {
	coord temp;
	temp.x = x + i;
	temp.y = y + i;
	return temp;
}
int coord::operator==(coord &ob2) {
	return (x == ob2.x && y == ob2.y);
}
int coord::operator&&(coord &ob2) {
	return (x && ob2.x) && (y && ob2.y);
}
int main()
{
	to1251();

	coord o1(10, 10), o2(5, 3), o3;
	int x, y;
	o3 = o1 + o2;
	o3.get_xy(x, y);
	cout << x << " " << y << endl;
	o3 = o1 - o2;
	o3.get_xy(x, y);
	cout << x << " " << y << endl;
	o3 = o1;
	o3.get_xy(x, y);
	cout << x << " " << y << endl;

	o3 = o1 + 7;
	o3.get_xy(x, y);
	cout << x << " " << y << endl;

	o2 = o1;
	cout << (o1 == o2) << endl;
	o2.set_xy(0, 0);
	cout << (o1 && o2) << endl;

	system("pause");
	return 0;
}