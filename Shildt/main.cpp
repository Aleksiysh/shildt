
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class myclass {
	int n, d;
public:
	myclass(int i, int j) { n = i; d = j; }
	friend int isfactor(myclass ob);
};
int isfactor(myclass ob) {
	if (!(ob.n % ob.d)) return 1;
	else return 0;
}

int main()
{
	to1251();
	myclass ob1(10, 2), ob2(13, 3);
	if (isfactor(ob1)) cout << "10%2 без остатка\n";
	else cout << "10 не % на 2\n";
	if (isfactor(ob2)) cout << "13%3 без остатка\n";
	else cout << "13 не % на 3\n";

	system("pause");
	return 0;
}