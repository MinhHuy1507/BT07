#include <iostream>
#include "CHonSo.h"
using namespace std;

int main()
{
	cout << "Nhap hon so A: ";
	CHonSo A;
	cin >> A;
	cout << A;

	cout << "\nNhap hon so B: ";
	CHonSo B;
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