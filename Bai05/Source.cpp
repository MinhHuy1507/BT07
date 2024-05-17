#include <iostream>
#include "CSoPhuc.h"
using namespace std;

int main()
{
	cout << "Nhap so phuc A: ";
	CSoPhuc A;
	cin >> A;
	cout << A;

	cout << "\nNhap so phuc B: ";
	CSoPhuc B;
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