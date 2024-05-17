#include <iostream>
#include "CDiemKhongGian.h"
using namespace std;

int main()
{
	cout << "Nhap diem A: ";
	CDiemKhongGian A;
	cin >> A;
	cout << A;

	cout << "\nNhap diem B: ";
	CDiemKhongGian B;
	cin >> B;
	cout << B;

	int kq = A > B;
	cout << "\n\nToan tu >  : " << kq;

	kq = A >= B;
	cout << "\nToan tu >= : " << kq;

	kq = A < B;
	cout << "\nToan tu <  : " << kq;

	kq = A <= B;
	cout << "\nToan tu <= : " << kq;

	kq = A == B;
	cout << "\nToan tu == : " << kq;

	kq = A != B;
	cout << "\nToan tu != : " << kq;

	return 0;
}