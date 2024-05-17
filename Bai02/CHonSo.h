#pragma once
#include <iostream>
using namespace std;

class CHonSo
{
private:
	int nguyen;
	int tu;
	int mau;
public:
	friend istream& operator>>(istream&, CHonSo&);
	friend ostream& operator<<(ostream&, CHonSo&);

	int operator>(const CHonSo&);
	int operator>=(const CHonSo&);
	int operator<(const CHonSo&);
	int operator<=(const CHonSo&);
	int operator==(const CHonSo&);
	int operator!=(const CHonSo&);
};
