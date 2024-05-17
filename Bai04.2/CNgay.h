#pragma once
#include <iostream>
using namespace std;

class CNgay
{
private:
	int ngay;
	int thang;
	int nam;
public:
	friend istream& operator>>(istream&, CNgay&);
	friend ostream& operator<<(ostream&, CNgay&);
	int Compare(CNgay&);

	int operator>(CNgay&);
	int operator>=(CNgay&);
	int operator<(CNgay&);
	int operator<=(CNgay&);
	int operator==(CNgay&);
	int operator!=(CNgay&);
};
