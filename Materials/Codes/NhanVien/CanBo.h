#ifndef CANBO_H
#define CANBO_H
#include "Date.h"
#include "Nhanvien.h"
using namespace std;
class CanBo:public Nhanvien
{
private:
	string phongban;
	double hesoluong;
	int phucap;
public:
	CanBo():Nhanvien(),phongban(""),hesoluong(1.8),phucap(0){}
	CanBo(string name, Date dob, string cmt, string phong, double hsl, int pc)
	:Nhanvien(name,dob,cmt),phongban(phong),hesoluong(hsl),phucap(pc){}
	//setters
	void setPhongBan(string phong)
	{
		this -> phongban = phong;
	}
	void setHeSoLuong(double hsl)
	{
		this ->hesoluong = hsl;
	}
	void setPhuCap(int pc)
	{
		this -> phucap = pc;
	}
	//getters
	string getPhongBan()const
	{
		return this -> phongban;
	}
	double getHeSoLuong()const
	{
		return this -> hesoluong;
	}
	int getPhuCap()const
	{
		return this -> phucap;
	}
	//methods
	float tinhLuong()const
	{
		return this ->hesoluong * 1500000 + this->phucap;
	}
	~CanBo(){}
	
};
#endif