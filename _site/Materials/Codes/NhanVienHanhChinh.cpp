#include "NhanVienHanhChinh.h"


NhanVienHanhChinh::NhanVienHanhChinh()
{
}

NhanVienHanhChinh::NhanVienHanhChinh(string ten, float pc, float hsl, string pb, string cv, int nc)
:CanBo(ten,pc,hsl),phongban(pb),chucvu(cv),songaycong(nc){}
//setters
void NhanVienHanhChinh::setPhongBan(string pb)
{
	this->phongban = pb;
}
void NhanVienHanhChinh::setChucVu(string cv)
{
	this->chucvu = cv;
	if (cv == "Truong Phong")
		this->phucap = 2000;
	else if (cv == "Pho Phong")
		this->phucap = 1000;
	else if (cv == "Nhan Vien")
		this->phucap = 500;
	else
		this->phucap = 0;
}
void NhanVienHanhChinh::setSoNgayCong(int nc)
{
	this->songaycong = nc;
}

//getters
string NhanVienHanhChinh::getPhongBan()const
{
	return this->phongban;
}
string NhanVienHanhChinh::getChucVu()const
{
	return this->chucvu;
}
int NhanVienHanhChinh::getSoNgayCong()const
{
	return this->songaycong;
}
float NhanVienHanhChinh::tinhLuong()const
{
	return this->hesoluong * 730 + this->phucap + this->songaycong * 200;
}

NhanVienHanhChinh::~NhanVienHanhChinh()
{
}
