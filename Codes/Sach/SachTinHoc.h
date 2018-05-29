#ifndef SACHTINHOC_H
#define SACHTINHOC_H
#include <iostream>
#include <string>
#include "Sach.h"
using namespace std;
class SachTinHoc:public Sach
{
private:
	float gianhap;
public:
	SachTinHoc():Sach(),gianhap(0.0){}
	SachTinHoc(string tensach, int namxb, float hs, float gn)
	:Sach(tensach,namxb,hs),gianhap(gn){}

	//setter
	void setGiaNhap(float gn)
	{
		this -> gianhap =gn;
	}
	//getter
	float getGiaNhap()const
	{
		return this -> gianhap;
	}
	virtual float tinhGiaSach()const 
	{
		return this -> gianhap * this ->heso;
	}
	void print()const
	{
		this -> printtt();
		cout<<"Gia: "<<this -> tinhGiaSach()<<endl;
	}
	~SachTinHoc()
	{

	}
	
};
#endif