
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class samp {
	int a;
protected:
	int b;
public:
	int c;
	samp(int n, int m) { a = n; b = m; }
	int geta() { return a; }
	int getb() { return b; }
};


int main()
{
	to1251();
	samp ob(10, 20);
	//ob.b = 99;
	ob.c = 30;

	cout << ob.geta() << endl;
	cout << ob.getb() << endl;

	

	system("pause");
	return 0;
}