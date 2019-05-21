
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
		cout << "������ ��������� ������\n";
		exit(1);
	}
	strcpy(p, ptr);
}
strtype::~strtype() {
	cout << "������������ ������\n";
}
void strtype::show() {
	cout << p << "-�����: " << len<<"\n";
}

int main()
{
	to1251();

	char str1[] = "��� ��������";
	char str2[] = "��� �������� �++";
	strtype s1(str1), s2(str2);
	s1.show(); s2.show();
	s2 = s1;
	s1.show(); s2.show();

	system("pause");
	return 0;
}