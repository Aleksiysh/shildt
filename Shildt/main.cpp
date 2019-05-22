
#include <iostream>
#include "to1251.h"

//#pragma warning(disable : 4996)

using namespace std;

class samp {
	int i, j;
public:
	void set_ij(int a, int b) { i = a; j = b; }
	int get_product() { return i * j; }
};

int main()
{
	to1251();
	samp *p;
	p = new samp;
	if (!p)
	{
		cout << "Ошибка памяти\n";
		return 1;
	}
	p->set_ij(4, 5);
	cout << "Итог: " << p->get_product();

	system("pause");
	return 0;
}