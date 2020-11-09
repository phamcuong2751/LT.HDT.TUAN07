#pragma once
#include "CNgay.h"
#include <string>
class CNhanVien
{
private:
	string HoTen;
	CNgay NgaySinh;
	string DiaChi;
public:
	CNhanVien(void);
	void Nhap();
	void Xuat();
};

