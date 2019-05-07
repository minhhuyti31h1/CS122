#ifndef NHANVIEN_H
#define NHANVIEN_H
#include "Date.h"
using namespace std;
class Nhanvien
{
protected:
	string hoVaTen;
	Date DOB;
	string socmt;
public:
	Nhanvien():hoVaTen(""),DOB(),socmt(""){}
	Nhanvien(string ten, Date dob, string cmt)
	:hoVaTen(ten), DOB(dob),socmt(cmt){}

	//setters
	void setHoVaTen(string name)
	{
		this -> hoVaTen = name;
	}
	void setDOB(Date dob)
	{
		this -> DOB = dob;
	}
	void setSoCMT(string cmt)
	{
		this -> socmt = cmt;
	}
	//getters
	string getHoVaTen()const
	{
		return this -> hoVaTen;
	}
	Date getDOB()const
	{
		return this -> DOB;
	}
	string getSoCMT()const
	{
		return this -> socmt;
	}

	//methods
	float tinhLuong()const
	{
		return 0;
	}
	~Nhanvien(){}
	
};
#endif