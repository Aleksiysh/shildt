
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class point {
	int x, y;
public:
	point() { x = 0; y = 0; }
	point(int i, int j) { x = i, y = j; }
	void get_xy(int &i, int &j) { i = x, j = y; }
	void set_xy(int i, int j) { x = i; y = j; }
	point operator+(point &ob2);
	point operator-(point ob2);
	point operator-();
	point operator=(point ob2);
	point operator+(int i);
	int operator==(point &ob2);
	int operator&&(point &ob2);
	point operator++();	//œ–≈‘» —
	point operator--();	//œ–≈‘» —
	point operator++(int notused);	//œŒ—“‘» —
	point operator--(int notused);	//œŒ—“‘» —
};
point point::operator+(point &ob2) {
	point temp;
	temp.x = x + ob2.x;
	temp.y = y + ob2.y;
	return temp;
}
point point::operator-(point ob2) {
	point temp;
	temp.x = x - ob2.x;
	temp.y = y - ob2.y;
	return temp;
}
point point::operator-() {
	x *= -1;
	y *= -1;
	return *this;
}
point point::operator=(point ob2) {
	x = ob2.x;
	y = ob2.y;
	return *this;
}
point point::operator+(int i) {
	point temp;
	temp.x = x + i;
	temp.y = y + i;
	return temp;
}
int point::operator==(point &ob2) {
	return (x == ob2.x && y == ob2.y);
}
int point::operator&&(point &ob2) {
	return (x && ob2.x) && (y && ob2.y);
}
point point::operator++() {
	x++;
	y++;
	return *this;
}
point point::operator--() {
	x--;
	y--;
	return *this;
}
point point:: operator++(int) {
	x++;
	y++;
	return *this;
}
point point::operator--(int notused) {
	x--;
	y--;
	return *this;
}

int main()
{
	to1251();

	point o1(10, 10), o2(5, 3), o3;
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

	++o2;
	o2.get_xy(x,y);
	cout << x << " " << y << endl;
	--o2; --o2;
	o2.get_xy(x,y);
	cout << x << " " << y << endl;

	o2++;
	o2.get_xy(x, y);
	cout << x << " " << y << endl;
	o2--; o2--;
	o2.get_xy(x, y);
	cout << x << " " << y << endl;
	o2 = -o1;
	o2.get_xy(x, y);
	cout << x << " " << y << endl;
	system("pause");
	return 0;
}