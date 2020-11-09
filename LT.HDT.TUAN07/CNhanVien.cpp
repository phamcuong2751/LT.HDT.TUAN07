#include "CNhanVien.h"
CNhanVien::CNhanVien()
{
	HoTen = "";
	DiaChi = "";
}
void CNhanVien::Nhap()
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	
	cout << "Nhap ngay sinh: " << endl;
	NgaySinh.Nhap();
	cin.ignore();
	cout << "Nhap dia chi: ";
	getline(cin, DiaChi);
}

void CNhanVien::Xuat()
{
	cout << "Ten nhan vien: " << HoTen << endl;
	cout << "Ngay sinh: ";
	NgaySinh.Xuat();
	cout << "\nDia chi: " << DiaChi << endl;

}