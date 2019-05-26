
#include <iostream>
#include <cstring>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class coord {
	int x, y;
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i; y = j; }
	friend ostream &operator<<(ostream &stream, coord ob);
};
ostream &operator<<(ostream &stream,coord ob){
	stream << ob.x << "," << ob.y << endl;
	return stream;
}

int main()
{
	to1251();
	coord a(1, 1), b(10, 23);

	cout << a << b << endl;

	system("pause");
	return 0;
}