
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

void f(int *n);

int main()
{
	to1251();
	int i = 0;
	f(&i);
	cout << "Новое значение i: " << i << endl;
	

	system("pause");
	return 0;
}
void f(int *n) {
	*n = 100;
}