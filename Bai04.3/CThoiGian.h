#pragma once
#include <iostream>
using namespace std;

class CThoiGian
{
private:
	int giay;
	int phut;
	int gio;
public:
	friend istream& operator>>(istream&, CThoiGian&);
	friend ostream& operator<<(ostream&, CThoiGian&);
	int Compare(CThoiGian&);

	int operator>(CThoiGian&);
	int operator>=(CThoiGian&);
	int operator<(CThoiGian&);
	int operator<=(CThoiGian&);
	int operator==(CThoiGian&);
	int operator!=(CThoiGian&);
};

