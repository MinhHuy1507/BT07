#include "CDiemKhongGian.h"
#include <iostream>
#include <cmath>

using namespace std;

float CDiemKhongGian::KhoangCach()
{
	return sqrt(x * x + y * y + z * z);
}

istream& operator>>(istream& is, CDiemKhongGian& A)
{
	cout << "\nNhap x: ";
	is >> A.x;
	cout << "Nhap y: ";
	is >> A.y;
	cout << "Nhap z: ";
	is >> A.z;
	return is;
}

ostream& operator<<(ostream& os, CDiemKhongGian& A)
{
	os << "(" << A.x << ", " << A.y << ", " << A.z << ")";
	return os;
}

int CDiemKhongGian::operator>(CDiemKhongGian& A)
{
	float a = this->KhoangCach();
	float b = A.KhoangCach();
	if (a > b)
		return 1;
	return 0;
}

int CDiemKhongGian::operator>=(CDiemKhongGian& A)
{
	float a = this->KhoangCach();
	float b = A.KhoangCach();
	if (a >= b)
		return 1;
	return 0;
}

int CDiemKhongGian::operator<(CDiemKhongGian& A)
{
	float a = this->KhoangCach();
	float b = A.KhoangCach();
	if (a < b)
		return 1;
	return 0;
}

int CDiemKhongGian::operator<=(CDiemKhongGian& A)
{
	float a = this->KhoangCach();
	float b = A.KhoangCach();
	if (a <= b)
		return 1;
	return 0;
}

int CDiemKhongGian::operator==(CDiemKhongGian& A)
{
	float a = this->KhoangCach();
	float b = A.KhoangCach();
	if (a == b)
		return 1;
	return 0;
}

int CDiemKhongGian::operator!=(CDiemKhongGian& A)
{
	float a = this->KhoangCach();
	float b = A.KhoangCach();
	if (a != b)
		return 1;
	return 0;
}