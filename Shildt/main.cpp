
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
	int &operator[](int i);
};
int &arraytype::operator[](int i) {
	if (i < 0 || i >= SIZE1) {
		cout << "\nЗначение индекса ";
		cout << i << " находится за пределами \n";
		system("pause");
		exit(1);
	}
	return a[i];
}

int main()
{
	to1251();
	arraytype ob;
	for (int i = 0; i < SIZE1; i++) {
		cout << ob[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < SIZE1; i++) {
		ob[i] = ob[i] + 10;
	}
	for(int i = 0; i < SIZE1+2; i++) {
		cout << ob[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}