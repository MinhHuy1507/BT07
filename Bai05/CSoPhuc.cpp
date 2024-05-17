#include "CSoPhuc.h"
#include <iostream>
#include <cmath>

using namespace std;

float CSoPhuc::modulus()
{
	return sqrt(thuc * thuc + ao * ao);
}

istream& operator>>(istream& is, CSoPhuc& A)
{
	cout << "\nNhap thuc: ";
	is >> A.thuc;
	cout << "Nhap ao: ";
	is >> A.ao;
	return is;
}

ostream& operator<<(ostream& os, CSoPhuc& A)
{
	os << A.thuc << " + " << A.ao << "i";
	return os;
}

int CSoPhuc::operator>(CSoPhuc& A)
{
	float a = this->modulus();
	float b = A.modulus();
	if (a > b)
		return 1;
	return 0;
}

int CSoPhuc::operator>=(CSoPhuc& A)
{
	float a = this->modulus();
	float b = A.modulus();
	if (a >= b)
		return 1;
	return 0;
}

int CSoPhuc::operator<(CSoPhuc& A)
{
	float a = this->modulus();
	float b = A.modulus();
	if (a < b)
		return 1;
	return 0;
}

int CSoPhuc::operator<=(CSoPhuc& A)
{
	float a = this->modulus();
	float b = A.modulus();
	if (a <= b)
		return 1;
	return 0;
}

int CSoPhuc::operator==(CSoPhuc& A)
{
	float a = this->modulus();
	float b = A.modulus();
	if (a == b)
		return 1;
	return 0;
}

int CSoPhuc::operator!=(CSoPhuc& A)
{
	float a = this->modulus();
	float b = A.modulus();
	if (a != b)
		return 1;
	return 0;
}