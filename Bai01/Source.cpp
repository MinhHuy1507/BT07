#include <iostream>
#include "CPhanSo.h"
using namespace std;

int main()
{
	cout << "Nhap phan so A: ";
	CPhanSo A;
	cin >> A;
	cout << A;

	cout << "\nNhap phan so B: ";
	CPhanSo B;
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