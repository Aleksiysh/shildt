
#include <iostream>
#include "to1251.h"

//#pragma warning(disable : 4996)

using namespace std;

const int SIZE1 = 5;

class arraytype {
	int a[SIZE1];
public:
	arraytype() {
		for (int i = 0; i < SIZE1; i++) {
			a[i] = i;
		}
	}
	int operator[](int i) { return a[i]; }
};


int main()
{
	to1251();
	arraytype ob;
	for (int i = 0; i < SIZE1; i++) {
		cout << ob[i] << " ";
	}
	
	system("pause");
	return 0;
}