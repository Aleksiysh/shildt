
#include <iostream>
#include "to1251.h"

//#pragma warning(disable : 4996)

using namespace std;

class base {
public:
	int i;
};

class derived1 : virtual public base {
public:
	int j;
};
class derived2 : virtual public base {
public:
	int k;
};
class derived3 :public derived1, public derived2 {
public:
	int product() { return i * j * k; }
};
int main()
{
	to1251();
	derived3 ob;
	ob.i = 10;
	ob.j = 2;
	ob.k = 3;
	cout << ob.product() << endl;


	//system("pause");
	return 0;
}