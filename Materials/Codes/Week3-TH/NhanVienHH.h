#pragma once
#include "NhanVien.h"
class NhanVienHH:public NhanVien
{
protected:
	double tongdoanhthu;
	double mucthuong;//10%
public:
	NhanVienHH();
	NhanVienHH(string, string, string, double,double);
	//setters
	void settongdoanhthu(double tong);
	void setmucthuong(double thuong);
	
	//getters
	double gettongdoanhthu()const;
	double  getmucthuong()const;
	double getSalary()const;

	//method
	double getSalary()const
	{	
		return this->tongdoanhthu * this->mucthuong / 100;
	}
	~NhanVienHH();
};

