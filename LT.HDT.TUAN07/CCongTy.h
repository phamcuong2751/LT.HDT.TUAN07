#pragma once
#include "CNhanVien.h"
#include "CNhanVienQuanLy.h"
#include "CNhanVienCongNhat.h"
#include "CNhanVienSanXuat.h"
#include <vector>
class CCongTy
{
private:
	vector<CNhanVienQuanLy> DSNV_QuanLy;
	vector<CNhanVienCongNhat> DSNV_CongNhat;
	vector<CNhanVienSanXuat> DSNV_SanXuat;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
};

