#include "NhanVienHH.h"


NhanVienHH::NhanVienHH()
{
}
#include "NhanVienHH.h"


NhanVienHH::NhanVienHH()
{
}
NhanVienHH::NhanVienHH(string , string , string, double,double):id(id), fullname(name), taxcode(tax),tong(tong),thuong(thuong)
{}
	//setters
void NhanVienHH::settongdoanhthu(double tong )
{
    this->tong=tong;
}
void NhanVienHH::setmucthuong(double thuong)
{
    this-> thuong=thuong;
}
	//getters


double NhanVienHH::gettongdoanhthu()const
{
    return this->tong;
}
double NhanVienHH::getmucthuong()const
    return this->thuong;
double NhanVienHH::getSalary()const
{
    return this->Salary;
}
	//method
double NhanVienHH::getSalary()const
	{	
    return this->tongdoanhthu * this->mucthuong / 100;
  }


NhanVienHH::~NhanVienHH()
{
}

NhanVienHH::~NhanVienHH()
{
}
