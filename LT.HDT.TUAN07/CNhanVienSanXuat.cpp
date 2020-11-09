#include "CNhanVienSanXuat.h"
CNhanVienSanXuat::CNhanVienSanXuat()
{
	SoSanPham = 0;
}

void CNhanVienSanXuat::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap so ngay cong: ";
	cin >> SoSanPham;
}

void CNhanVienSanXuat::Xuat()
{
	CNhanVien::Xuat();
	cout << "So ngay cong " << SoSanPham;
}

float CNhanVienSanXuat::TinhLuong()
{
	return SoSanPham * 100;
}