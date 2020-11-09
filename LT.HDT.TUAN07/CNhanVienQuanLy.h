#pragma once
#include "CNhanVien.h"
class CNhanVienQuanLy : public CNhanVien
{
private:
	float LuongCoBan;
	float HeSoLuong;
public:
	CNhanVienQuanLy(void);
	void Nhap();
	void Xuat();
	float TinhLuong();
};

