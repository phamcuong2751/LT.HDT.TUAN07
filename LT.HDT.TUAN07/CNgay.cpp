#include "CNgay.h"

CNgay::CNgay()
{
	ngay = thang = nam = 0;
}
void CNgay::Nhap()
{
	cout << "Nhap ngay: ";
	cin >> ngay;
	cout << "Nhap thang: ";
	cin >> thang;
	cout << "Nhap nam: ";
	cin >> nam;
}
void CNgay::Xuat()
{
	cout << ngay << "/" << thang << "/" << nam;
}