
#include <iostream>
#include <cstring>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class inventory {
	char item[20];
	double cost;
	int on_hand;
public:
	inventory(char *i, double c, int o) {
		strcpy(item, i);
		cost = c;
		on_hand = o;
	}
	void show();
};
void inventory::show() {
	cout << item;
	cout << ":$" << cost;
	cout << " On hand: " << on_hand << "\n";
}

int main()
{
	to1251();
	
	char tmp[] = "wretch";
	inventory ob((char*)"wretch", 4.95, 4);
	ob.show();


	system("pause");
	return 0;
}