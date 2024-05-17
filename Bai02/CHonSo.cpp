#include "CHonSo.h"
#include <iostream>

using namespace std;

istream& operator>>(istream& is, CHonSo& A)
{
	cout << "\nNhap phan nguyen: ";
	is >> A.nguyen;
	cout << "Nhap tu: ";
	is >> A.tu;
	cout << "Nhap mau: ";
	is >> A.mau;
	return is;
}

ostream& operator<<(ostream& os, CHonSo& A)
{
	os << A.nguyen << " va " << A.tu << "/" << A.mau;
	return os;
}

int CHonSo::operator>(const CHonSo& A)
{
	float a = (float)nguyen + (float)tu / mau;
	float b = (float)A.nguyen + (float)A.tu / A.mau;
	if (a > b)
		return 1;
	return 0;
}

int CHonSo::operator>=(const CHonSo& A)
{
	float a = (float)nguyen + (float)tu / mau;
	float b = (float)A.nguyen + (float)A.tu / A.mau;
	if (a >= b)
		return 1;
	return 0;
}

int CHonSo::operator<(const CHonSo& A)
{
	float a = (float)nguyen + (float)tu / mau;
	float b = (float)A.nguyen + (float)A.tu / A.mau;
	if (a < b)
		return 1;
	return 0;
}

int CHonSo::operator<=(const CHonSo& A)
{
	float a = (float)nguyen + (float)tu / mau;
	float b = (float)A.nguyen + (float)A.tu / A.mau;
	if (a <= b)
		return 1;
	return 0;
}

int CHonSo::operator==(const CHonSo& A)
{
	float a = (float)nguyen + (float)tu / mau;
	float b = (float)A.nguyen + (float)A.tu / A.mau;
	if (a == b)
		return 1;
	return 0;
}

int CHonSo::operator!=(const CHonSo& A)
{
	float a = (float)nguyen + (float)tu / mau;
	float b = (float)A.nguyen + (float)A.tu / A.mau;
	if (a != b)
		return 1;
	return 0;
}