#pragma once
#include "NhanVienHH.h"
class NhanVienHHDB: public NhanVienHH
{
private:
	double base_salary;
public:
	NhanVienHHDB();
	NhanVienHHDB(string, string, string,double, double, double);
	//setter;
	void setbase_salary(double base);

	//getter;
	double getbase_salary()const;
	double getSalary()const;
	//methods
	double getSalary()const
	{
		return this->tongdoanhthu * this->mucthuong / 100 + this -> base_salary *0.1;
	}
	~NhanVienHHDB();
};

