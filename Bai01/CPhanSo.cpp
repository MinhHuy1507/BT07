#include "CPhanSo.h"
#include <iostream>

using namespace std;

istream& operator>>(istream& is, CPhanSo& A)
{
	cout << "\nNhap tu: ";
	is >> A.tu;
	cout << "Nhap mau: ";
	is >> A.mau;
	return is;
}

ostream& operator<<(ostream& os, CPhanSo& A)
{
	os << A.tu << "/" << A.mau;
	return os;
}

int CPhanSo::operator>(const CPhanSo& A)
{
	float a = (float)tu / mau;
	float b = (float)A.tu / A.mau;
	if (a > b)
		return 1;
	return 0;
}

int CPhanSo::operator>=(const CPhanSo& A)
{
	float a = (float)tu / mau;
	float b = (float)A.tu / A.mau;
	if (a >= b)
		return 1;
	return 0;
}

int CPhanSo::operator<(const CPhanSo& A)
{
	float a = (float)tu / mau;
	float b = (float)A.tu / A.mau;
	if (a < b)
		return 1;
	return 0;
}

int CPhanSo::operator<=(const CPhanSo& A)
{
	float a = (float)tu / mau;
	float b = (float)A.tu / A.mau;
	if (a <= b)
		return 1;
	return 0;
}

int CPhanSo::operator==(const CPhanSo& A)
{
	float a = (float)tu / mau;
	float b = (float)A.tu / A.mau;
	if (a == b)
		return 1;
	return 0;
}

int CPhanSo::operator!=(const CPhanSo& A)
{
	float a = (float)tu / mau;
	float b = (float)A.tu / A.mau;
	if (a != b)
		return 1;
	return 0;
}