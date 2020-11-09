#include "CNhanVienCongNhat.h"
CNhanVienCongNhat::CNhanVienCongNhat()
{
	SoNgay = 0;
}

void CNhanVienCongNhat::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap so ngay cong: ";
	cin >> SoNgay;
}

void CNhanVienCongNhat::Xuat()
{
	CNhanVien::Xuat();
	cout << "So ngay cong " << SoNgay;
}

float CNhanVienCongNhat::TinhLuong()
{
	return SoNgay * 200;
}