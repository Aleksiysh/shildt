
#include <iostream>
#include <cstring>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class samp {
	int a;
public:
	samp(int n) { a = n;}
	int get_a() { return a; }
};

int main()
{
	to1251();
	samp ob[4] = {-1,-2,-3,-4};
	int i;
	
	for (i = 0; i < 4; i++) {
		cout << ob[i].get_a();
	}
	cout << "\n";
	system("pause");
	return 0;
}