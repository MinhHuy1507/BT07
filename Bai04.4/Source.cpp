#include <iostream>
#include "CDonThuc.h"
using namespace std;

int main()
{
	cout << "Nhap don thuc A: ";
	CDonThuc A;
	cin >> A;
	cout << A;

	cout << "\nNhap don thuc B: ";
	CDonThuc B;
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