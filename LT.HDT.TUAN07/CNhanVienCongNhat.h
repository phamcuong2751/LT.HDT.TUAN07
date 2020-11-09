#pragma once
#include "CNhanVien.h"
class CNhanVienCongNhat : public CNhanVien
{
private:
	float SoNgay;
public:
	CNhanVienCongNhat(void);
	void Nhap();
	void Xuat();
	float TinhLuong();
};

