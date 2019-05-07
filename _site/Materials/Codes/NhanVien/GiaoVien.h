#ifndef GIAOVIEN_H
#define GIAOVIEN_H
#include "Nhanvien.h"
using namespace std;
class GiaoVien:public Nhanvien
{
private:
	string khoa;
	double hesoluong;
	int tienday;
public:
	GiaoVien():Nhanvien(),khoa(""),hesoluong(1.8),tienday(0){}
	GiaoVien(string name, Date dob, string cmt, string k, double hsl, int td)
	:Nhanvien(name,dob,cmt),khoa(k),hesoluong(hsl),tienday(td){}
	//setters
	void setKhoa(string tenkhoa)
	{
		this -> khoa = tenkhoa;
	}
	void setHeSoLuong(double hsl)
	{
		this -> hesoluong = hsl;
	}
	void setTienDay(int tien)
	{
		this -> tienday = tien;
	}
	//getters
	string getKhoa()const
	{
		return this -> khoa;
	}
	double getHeSoLuong()const
	{
		return this -> hesoluong;
	}
	int getTienDay()const
	{
		return this -> tienday;
	}
	//methods
	float tinhLuong()const
	{
		return this ->hesoluong * 1500000 + this->tienday;
	}
	~GiaoVien(){}
	
};
#endif