
#include <iostream>
#include <cstring>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class inventory {
	char item[40];	//��������
	int onhand;		//�������
	double cost;	//����
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
	stream << ob.item << ": " << ob.onhand << " �� ����� �� ���� $" << ob.cost << endl;
	return stream;
}
istream &operator>>(istream &stream, inventory &ob) {
	cout << "������� ��������: ";
	stream >> ob.item;
	cout << "����������: ";
	stream >> ob.onhand;
	cout << "����: ";
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