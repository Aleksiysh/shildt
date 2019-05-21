
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class samp {
	char *s;
public:
	samp() { s = '\0'; }
	~samp() { if (s) free(s); cout << "Освобождение памяти по адресу s\n"; }
	void show() { cout << s << "\n"; }
	void set(char *str);
};

void samp::set(char *str) {
	s = (char*)malloc(strlen(str) + 1);
	if (!s) {
		cout << "Ошибка выделения памяти\n";
		exit(1);
	}
	strcpy(s, str);
}

samp input() {
	char s[80];
	samp str;
	cout << "Введите строку: ";
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