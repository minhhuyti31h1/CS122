#include "NhanVienHHDB.h"


NhanVienHHDB::NhanVienHHDB()
{}
NhanVienHHDB::NhanVienHHDB(string, string, string,double, double, double):id(id), fullname(name), taxcode(tax),tong(tong),thuong(thuong),base(base)
{}
	//setter;
void setbase_salary(double base)
{
    this-> base=base;
}
	//getter;
double getbase_salary()const
{
  return this->base;
}
double getSalary()const
{
    return this->Salary;
}

	//methods
double getSalary()const
	{
		return this->tongdoanhthu * this->mucthuong / 100 + this -> base_salary *0.1;
	}


NhanVienHHDB::~NhanVienHHDB()
{
}
