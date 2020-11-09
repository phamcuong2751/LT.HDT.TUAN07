#pragma once
#include "CNhanVien.h"
class CNhanVienSanXuat :public CNhanVien
{
private:
	float SoSanPham;
public:
	CNhanVienSanXuat(void);
	void Nhap();
	void Xuat();
	float TinhLuong();
};

