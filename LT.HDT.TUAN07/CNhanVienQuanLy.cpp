#include "CNhanVienQuanLy.h"
CNhanVienQuanLy::CNhanVienQuanLy()
{
	LuongCoBan = HeSoLuong = 0;
}
void CNhanVienQuanLy::Nhap() {
	CNhanVien::Nhap(); //HoTen, NgaySinh, DiaChi
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
	cout << "Nhap he so luong: ";
	cin >> HeSoLuong;

}

void CNhanVienQuanLy::Xuat()
{
	CNhanVien::Xuat();
	cout << "Luong co ban: " << LuongCoBan << endl;
	cout << "He so luong: " << HeSoLuong << endl;
}

float CNhanVienQuanLy::TinhLuong()
{
	return LuongCoBan * HeSoLuong;
}