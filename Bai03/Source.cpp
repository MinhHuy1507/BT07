#include <iostream>
#include "CDiem.h"
using namespace std;

int main()
{
	cout << "Nhap diem A: ";
	CDiem A;
	cin >> A;
	cout << A;

	cout << "\nNhap diem B: ";
	CDiem B;
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