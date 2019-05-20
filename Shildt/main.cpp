#include <iostream>

using namespace std;


class myclass {
	int a;
public:
	void set_a(int num);
	int get_a();
};

void myclass::set_a(int num) {
	a = num;
}

int myclass::get_a() {
	return a;
}

int main() {

	char ch;
	cout << "ֲגמהטעו סטלגמכû המ ץ. \n";
	
	do {
		cout << ":";
		cin >> ch;
	} while (ch != 'x');

	myclass b;

	b.set_a(6);

	cout << b.get_a();

	
	return 0;
}