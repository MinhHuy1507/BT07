#include "CDiem.h"
#include <iostream>
#include <cmath>

using namespace std;

float CDiem::KhoangCach()
{
	return sqrt(x * x + y * y);
}

istream& operator>>(istream& is, CDiem& A)
{
	cout << "\nNhap x: ";
	is >> A.x;
	cout << "Nhap y: ";
	is >> A.y;
	return is;
}

ostream& operator<<(ostream& os, CDiem& A)
{
	os << "(" << A.x << ", " << A.y << ")";
	return os;
}

int CDiem::operator>(CDiem& A)
{
	float a = this->KhoangCach();
	float b = A.KhoangCach();
	if (a > b)
		return 1;
	return 0;
}

int CDiem::operator>=(CDiem& A)
{
	float a = this->KhoangCach();
	float b = A.KhoangCach();
	if (a >= b)
		return 1;
	return 0;
}

int CDiem::operator<(CDiem& A)
{
	float a = this->KhoangCach();
	float b = A.KhoangCach();
	if (a < b)
		return 1;
	return 0;
}

int CDiem::operator<=(CDiem& A)
{
	float a = this->KhoangCach();
	float b = A.KhoangCach();
	if (a <= b)
		return 1;
	return 0;
}

int CDiem::operator==(CDiem& A)
{
	float a = this->KhoangCach();
	float b = A.KhoangCach();
	if (a == b)
		return 1;
	return 0;
}

int CDiem::operator!=(CDiem& A)
{
	float a = this->KhoangCach();
	float b = A.KhoangCach();
	if (a != b)
		return 1;
	return 0;
}