#include <iostream>
#include "CThoiGian.h"
using namespace std;

int main()
{
	cout << "Nhap thoi gian A: ";
	CThoiGian A;
	cin >> A;
	cout << A;

	cout << "\nNhap thoi gian B: ";
	CThoiGian B;
	cin >> B;
	cout << B;

	int kq = A > B;
	cout << "\n\nToan phut >  : " << kq;

	kq = A >= B;
	cout << "\nToan phut >= : " << kq;

	kq = A < B;
	cout << "\nToan phut <  : " << kq;

	kq = A <= B;
	cout << "\nToan phut <= : " << kq;

	kq = A == B;
	cout << "\nToan phut == : " << kq;

	kq = A != B;
	cout << "\nToan phut != : " << kq;

	return 0;
}