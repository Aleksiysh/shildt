
#include <iostream>
#include <cstring>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class samp {
	char s[80];
public:
	void show() { cout << s << "\n"; }
	void set(char *str) { strcpy(s, str); }
};

samp input() {
	char s[80];
	samp str;
	cout << "¬ведите строку: ";
	cin >> s;
	str.set(s);
	return str;
}

int main()
{
	to1251();
	samp ob;
	ob = input();
	ob.show();
	system("pause");
	return 0;
}