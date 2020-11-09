#include "CCongTy.h"
void CCongTy::Nhap()
{
	int loai;
	while (true)
	{
		cout << "\nNhap vao loai nhan vien (1.QL, 2.SX, 3.CN, 0.Exit): ";
		cin >> loai;
		if (loai == 1)
		{
			cout << "--------Nhap nhan vien Quan ly--------" << endl;
			CNhanVienQuanLy QuanLy;
			QuanLy.Nhap();
			DSNV_QuanLy.push_back(QuanLy);
		}
		if (loai == 2)
		{
			cout << "--------Nhap nhan vien San xuat--------" << endl;
			CNhanVienSanXuat SanXuat;
			SanXuat.Nhap();
			DSNV_SanXuat.push_back(SanXuat);
		}
		if (loai == 3)
		{
			cout << "--------Nhap nhan vien Cong nhat--------" << endl;
			CNhanVienCongNhat CongNhat;
			CongNhat.Nhap();
			DSNV_CongNhat.push_back(CongNhat);
		}
		if (loai == 0)
		{
			break;
		}
	}
}

void CCongTy::Xuat()
{
	cout << "------- Danh sach nhan vien Quan ly -------" << endl;
	for (int i = 0; i < DSNV_QuanLy.size(); i++)
	{
		DSNV_QuanLy.at(i).Xuat();
	}
	cout << "------- Danh sach nhan vien San xuat -------" << endl;
	for (int i = 0; i < DSNV_SanXuat.size(); i++)
	{
		DSNV_SanXuat.at(i).Xuat();
	}
	cout << "------- Danh sach nhan vien Cong nhat -------" << endl;
	for (int i = 0; i < DSNV_CongNhat.size(); i++)
	{
		DSNV_CongNhat.at(i).Xuat();
	}
}


float CCongTy::TinhLuong()
{
	float TongLuong = 0;
	for (int i = 0; i < DSNV_QuanLy.size(); i++)
	{
		TongLuong += DSNV_QuanLy.at(i).TinhLuong();
	}
	for (int i = 0; i < DSNV_SanXuat.size(); i++)
	{
		TongLuong += DSNV_SanXuat.at(i).TinhLuong();
	}
	for (int i = 0; i < DSNV_CongNhat.size(); i++)
	{
		TongLuong += DSNV_CongNhat.at(i).TinhLuong();
	}
	return TongLuong;
}