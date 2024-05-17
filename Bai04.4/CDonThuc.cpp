#include "CDonThuc.h"
#include <iostream>
#include <cmath>

using namespace std;

int CDonThuc::Compare(CDonThuc& A)
{
	if (n > A.n)
		return 1;
	if (A.n > n)
		return -1;
	if (a > A.a)
		return 1;
	if (A.a > a)
		return -1;
	return 0;
}

istream& operator>>(istream& is, CDonThuc& A)
{
	cout << "\nNhap a: ";
	is >> A.a;
	cout << "Nhap n: ";
	is >> A.n;
	return is;
}

ostream& operator<<(ostream& os, CDonThuc& A)
{
	os << A.a << "x^" << A.n;
	return os; 
}

int CDonThuc::operator>(CDonThuc& A)
{
	int kq = this->Compare(A);
	if (kq == 1)
		return 1;
	return 0;
}

int CDonThuc::operator>=(CDonThuc& A)
{
	int kq = this->Compare(A);
	if (kq == 1 || kq == 0)
		return 1;
	return 0;
}

int CDonThuc::operator<(CDonThuc& A)
{
	int kq = this->Compare(A);
	if (kq == -1)
		return 1;
	return 0;
}

int CDonThuc::operator<=(CDonThuc& A)
{
	int kq = this->Compare(A);
	if (kq == -1 || kq == 0)
		return 1;
	return 0;
}

int CDonThuc::operator==(CDonThuc& A)
{
	int kq = this->Compare(A);
	if (kq == 0)
		return 1;
	return 0;
}

int CDonThuc::operator!=(CDonThuc& A)
{
	int kq = this->Compare(A);
	if (kq == 1 || kq == -1)
		return 1;
	return 0;
}