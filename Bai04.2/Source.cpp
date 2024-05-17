#include <iostream>
#include "CNgay.h"
using namespace std;

int main()
{
	cout << "Nhap ngay A: ";
	CNgay A;
	cin >> A;
	cout << A;

	cout << "\nNhap ngay B: ";
	CNgay B;
	cin >> B;
	cout << B;

	int kq = A > B;
	cout << "\n\nToan thang >  : " << kq;

	kq = A >= B;
	cout << "\nToan thang >= : " << kq;

	kq = A < B;
	cout << "\nToan thang <  : " << kq;

	kq = A <= B;
	cout << "\nToan thang <= : " << kq;

	kq = A == B;
	cout << "\nToan thang == : " << kq;

	kq = A != B;
	cout << "\nToan thang != : " << kq;

	return 0;
}