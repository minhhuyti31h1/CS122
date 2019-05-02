#include "GiangVien.h"


GiangVien::GiangVien() :CanBo(), khoa(""), trinhdo(""), sotiet(0){}
GiangVien::GiangVien(string ten, float pc, float hsl, string k, string td, int st)
:CanBo(ten, pc, hsl), khoa(k), trinhdo(td), sotiet(st){}

//setters
void GiangVien::setKhoa(string k)
{
	this->khoa = k;
}
void GiangVien::setTrinhDo(string td)
{
	this->trinhdo = td;
	if (td == "Cu Nhan")
		this->phucap = 300;
	else if (td == "Thac Si")
		this->phucap = 500;
	else if (td == "Tien Si")
		this->phucap = 1000;
	else 
		this->phucap = 0;
}
void GiangVien::setSoTiet(int st)
{
	this->sotiet = st;
}
//getters
string GiangVien::getKhoa()const
{
	return this->khoa;
}
string GiangVien::getTrinhDo()const
{
	return this->trinhdo;
}
int GiangVien::getSoTiet()const
{
	return this->sotiet;
}

float GiangVien::tinhLuong()const
{
	return this->hesoluong * 730 + this->phucap + this->sotiet * 45;
}

GiangVien::~GiangVien()
{
}
