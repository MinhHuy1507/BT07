#include "CThoiGian.h"
#include <iostream>

using namespace std;

istream& operator>>(istream& is, CThoiGian& A)
{
	cout << "\nNhap giay: ";
	is >> A.giay;
	cout << "Nhap phut: ";
	is >> A.phut;
	cout << "Nhap gio: ";
	is >> A.gio;
	return is;
}

ostream& operator<<(ostream& os, CThoiGian& A)
{
	os << A.giay << "/" << A.phut << "/" << A.gio;
	return os;
}

int CThoiGian::Compare(CThoiGian& A)
{
	if (gio > A.gio)
		return 1;
	if (A.gio > gio)
		return -1;
	if (phut > A.phut)
		return 1;
	if (A.phut > phut)
		return -1;
	if (giay > A.giay)
		return 1;
	if (A.giay > giay)
		return -1;
	return 0;
}

int CThoiGian::operator>(CThoiGian& A)
{
	int kq = this->Compare(A);
	if (kq == 1)
		return 1;
	return 0;
}

int CThoiGian::operator>=(CThoiGian& A)
{
	int kq = this->Compare(A);
	if (kq == 1 || kq == 0)
		return 1;
	return 0;
}

int CThoiGian::operator<(CThoiGian& A)
{
	int kq = this->Compare(A);
	if (kq == -1)
		return 1;
	return 0;
}

int CThoiGian::operator<=(CThoiGian& A)
{
	int kq = this->Compare(A);
	if (kq == -1 || kq == 0)
		return 1;
	return 0;
}

int CThoiGian::operator==(CThoiGian& A)
{
	int kq = this->Compare(A);
	if (kq == 0)
		return 1;
	return 0;
}

int CThoiGian::operator!=(CThoiGian& A)
{
	int kq = this->Compare(A);
	if (kq == 1 || kq == -1)
		return 1;
	return 0;
}