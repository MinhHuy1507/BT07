#pragma once
#include <iostream>
using namespace std;

class CDonThuc
{
private:
	float a;
	int n;
public:
	friend istream& operator>>(istream&, CDonThuc&);
	friend ostream& operator<<(ostream&, CDonThuc&);
	int Compare(CDonThuc&);

	int operator>(CDonThuc&);
	int operator>=(CDonThuc&);
	int operator<(CDonThuc&);
	int operator<=(CDonThuc&);
	int operator==(CDonThuc&);
	int operator!=(CDonThuc&);
};

