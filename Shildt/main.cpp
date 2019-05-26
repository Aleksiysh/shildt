
#include <iostream>
#include <cstring>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class inventory {
	char item[40];	//название
	int onhand;		//наличие
	double cost;	//цена
public:
	inventory(char *i, int o, double c) {
		strcpy(item, i);
		onhand = o;
		cost = c;
	}
	friend ostream &operator<<(ostream &stream, inventory ob);
	friend istream &operator>>(istream &stream, inventory &ob);
};
ostream &operator<<(ostream &stream, inventory ob) {
	stream << ob.item << ": " << ob.onhand << " на руках по цене $" << ob.cost << endl;
	return stream;
}
istream &operator>>(istream &stream, inventory &ob) {
	cout << "¬еедите название: ";
	stream >> ob.item;
	cout << "количество: ";
	stream >> ob.onhand;
	cout << "÷ена: ";
	stream >> ob.cost;
	return stream;

}
int main()
{
	to1251();
	char str[] = "hammer";
	inventory ob(str, 4, 12.55);
	cout << ob;
	cin >> ob;
	cout << ob;
	system("pause");
	return 0;
}