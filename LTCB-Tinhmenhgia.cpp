#include <iostream>
using namespace std;
int main() {
	int sotien, soto500, soto200, soto100, soto50, soto20, soto10, soto5, soto1;
	cout << "nhap so tien can rut (don vi nghin dong):";
	cin >> sotien;
	while (sotien > 0)
	{
		cout << "|-----------------------------------|" << endl;

		soto500 = sotien / 500;
		sotien = sotien % 500;
		cout << "|\tso to 500 la\t" << soto500 << endl;

		soto200 = sotien / 200;
		sotien = sotien % 200;
		cout << "|\tso to 200 la\t" << soto200 << endl;

		soto100 = sotien / 100;
		sotien = sotien % 100;
		cout << "|\tso to 100 la\t" << soto100 << endl;

		soto50 = sotien / 50;
		sotien = sotien % 50;
		cout << "|\tso to 50 la\t" << soto50 << endl;

		soto20 = sotien / 20;
		sotien = sotien % 20;
		cout << "|\tso to 20 la\t" << soto20 << endl;

		soto10 = sotien / 10;
		sotien = sotien % 10;
		cout << "|\tso to 10 la\t" << soto10 << endl;

		soto5 = sotien / 5;
		sotien = sotien % 5;
		cout << "|\tso to 5 la\t" << soto5 << endl;

		soto1 = sotien / 1;
		sotien = sotien % 1;
		cout << "|\tso to 1 la\t" << soto1 << endl;

		cout << "|-----------------------------------|" << endl;
	}
	return 0;

}