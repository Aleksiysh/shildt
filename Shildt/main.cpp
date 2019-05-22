
#include <iostream>
#include "to1251.h"

#pragma warning(disable : 4996)

using namespace std;

class truck;

class car {
	int passendgers;
	int speed;
public:
	car(int p, int s) { passendgers = p; speed = s; }
	int sp_greater(truck t);
};

class truck {
	int weight;
	int speed;
public:
	truck(int w, int s) { weight = w; speed = s; }
	friend int car::sp_greater(truck t);
};

int car::sp_greater(truck t) {
	return speed - t.speed;
}

int main()
{
	to1251();
	int t;
	car c1(6, 55), c2(2, 120);
	truck t1(10000, 55), t2(20000, 72);
	
	cout << "Сравнение с1 t1\n";
	t = c1.sp_greater(t1);
	if (t < 0) cout << "Грузовик быстрее\n";
	else if (t == 0) cout << "Скорости равны\n";
	else cout << "Легковая быстрее\n";
	
	cout << "Сравнение с2 t2\n";
	t = c2.sp_greater(t2);
	if (t < 0) cout << "Грузовик быстрее\n";
	else if (t == 0) cout << "Скорости равны\n";
	else cout << "Легковая быстрее\n";

	system("pause");
	return 0;
}