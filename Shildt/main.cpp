
#include <iostream>
#include <cstring>
#include <cstdlib>

#include "to1251.h"
using namespace std;

#pragma warning(disable : 4996)

class strtype {
	char *p;
	int len;
public:
	strtype(char *ptr);
	~strtype();
	void show();
};
strtype::strtype(char *ptr) {
	len = strlen(ptr);
	p = (char*)malloc(len + 1);
	if (!p) {
		cout << "Ошибка выделения памяти\n";
		exit(1);
	}
	strcpy(p, ptr);
}
strtype::~strtype() {
	cout << "Освобождение памяти\n";
}
void strtype::show() {
	cout << p << "-длина: " << len<<"\n";
}

int main()
{
	to1251();

	char str1[] = "Это проверка";
	char str2[] = "Мне нравится с++";
	strtype s1(str1), s2(str2);
	s1.show(); s2.show();
	s2 = s1;
	s1.show(); s2.show();

	system("pause");
	return 0;
}