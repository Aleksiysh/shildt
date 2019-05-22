
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class samp {
	int i, j;
public:
	void set_ij(int a, int b) { i = a; j = b; }
	~samp() { cout << "деструктор " << i << endl; }
	int get_product() { return i * j; }
};

int main()
{
	to1251();

	samp *p = new samp[10];
	for (int i = 0; i < 10; i++)
	{
		p[i].set_ij(i, i);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << i << " " << p[i].get_product() << endl;
	}
	delete[] p;
	
	system("pause");
	return 0;
}