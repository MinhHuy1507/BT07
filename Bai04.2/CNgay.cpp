#include "CNgay.h"
#include <iostream>

using namespace std;

istream& operator>>(istream& is, CNgay& A)
{
	cout << "\nNhap phan ngay: ";
	is >> A.ngay;
	cout << "Nhap thang: ";
	is >> A.thang;
	cout << "Nhap nam: ";
	is >> A.nam;
	return is;
}

ostream& operator<<(ostream& os, CNgay& A)
{
	os << A.ngay << "/" << A.thang << "/" << A.nam;
	return os;
}

int CNgay::Compare(CNgay& A)
{
	if (nam > A.nam)
		return 1;
	if (A.nam > nam)
		return -1;
	if (thang > A.thang)
		return 1;
	if (A.thang > thang)
		return -1;
	if (ngay > A.ngay)
		return 1;
	if (A.ngay > ngay)
		return -1;
	return 0;
}

int CNgay::operator>(CNgay& A)
{
	int kq = this->Compare(A);
	if (kq == 1)
		return 1;
	return 0;
}

int CNgay::operator>=(CNgay& A)
{
	int kq = this->Compare(A);
	if (kq == 1 || kq == 0)
		return 1;
	return 0;
}

int CNgay::operator<(CNgay& A)
{
	int kq = this->Compare(A);
	if (kq == -1)
		return 1;
	return 0;
}

int CNgay::operator<=(CNgay& A)
{
	int kq = this->Compare(A);
	if (kq == -1 || kq == 0)
		return 1;
	return 0;
}

int CNgay::operator==(CNgay& A)
{
	int kq = this->Compare(A);
	if (kq == 0)
		return 1;
	return 0;
}

int CNgay::operator!=(CNgay& A)
{
	int kq = this->Compare(A);
	if (kq == 1 || kq == -1)
		return 1;
	return 0;
}