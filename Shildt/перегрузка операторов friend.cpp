
#include <iostream>
#include "to1251.h"

//#pragma warning(disable : 4996)

using namespace std;

class point {
	int x, y;
public:
	point() { x = 0; y = 0; }
	point(int i, int j) { x = i, y = j; }
	void get_xy(int &i, int &j) { i = x, j = y; }
	void set_xy(int i, int j) { x = i; y = j; }
	friend point operator+(point &ob1, point &ob2);
	friend point operator-(point &ob1, point &ob2);
	friend point operator-(point &ob1);
	point operator=(point ob2);
	friend point operator+(point &ob1, int i);
	friend point operator+(int i, point &ob1);
	friend int operator==(point &ob1, point &ob2);
	friend int operator&&(point &ob1, point &ob2);
	friend void operator++(point &ob1);	//œ–≈‘» —
	friend void operator--(point &ob1);	//œ–≈‘» —
	friend void operator++(point &ob1, int);	//œŒ—“‘» —
	friend void operator--(point &ob1, int);	//œŒ—“‘» —
	
};

point operator+(point &ob1, point &ob2) {
	point temp;
	temp.x = ob1.x + ob2.x;
	temp.y = ob1.y + ob2.y;
	return temp;
}
point operator-(point &ob1, point &ob2) {
	point temp;
	temp.x = ob1.x - ob2.x;
	temp.y = ob1.y - ob2.y;
	return temp;
}
point operator-(point &ob1) {
	point temp;
	temp.x = -ob1.x;
	temp.y = -ob1.y;
	return temp;
}
point point:: operator=(point ob2) {
	
	x = ob2.x;
	y = ob2.y;
	return *this;
}
point operator+(point &ob1,int i) {
	point temp;
	temp.x = ob1.x + i;
	temp.y = ob1.y + i;
	return temp;
}
point operator+(int i,point &ob1) {
	point temp;
	temp.x = ob1.x + i;
	temp.y = ob1.y + i;
	return temp;
}
int operator==(point &ob1,point &ob2) {
	return (ob1.x == ob2.x && ob1.y == ob2.y);
}
int operator&&(point &ob1,point &ob2) {
	return (ob1.x && ob2.x) && (ob1.y && ob2.y);
}
void operator++(point &ob1) {
	ob1.x++;
	ob1.y++;
	
}
void operator--(point &ob1) {
	ob1.x--;
	ob1.y--;
	
}
void operator++(point &ob1,int) {
	ob1.x++;
	ob1.y++;
	
}
void operator--(point &ob1,int) {
	ob1.x--;
	ob1.y--;
	
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