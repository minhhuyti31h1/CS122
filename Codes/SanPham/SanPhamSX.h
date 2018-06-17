#ifndef SANPHAMSX
#define SANPHAMSX
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
#include "SanPham.h"

class SanPhamSX: public SanPham
{
private:
	float giaNL;
	float chiPhiSX;
	int namSX;
public:
	SanPhamSX():SanPham(){}
	SanPhamSX(string ma, string ten, string loai, float nl, float cp, int n)
	:SanPham(ma,ten,loai),giaNL(nl),chiPhiSX(cp),namSX(n){}

	void setGiaNL(float a)
	{
		this -> giaNL = a;
	}

	void setChiPhiSX(float a)
	{
		this -> chiPhiSX = a;
	}

	void setNamSX(int a)
	{
		this -> namSX = a;
	}

	float getGiaNL()const
	{
		return this -> giaNL;
	}

	float getChiPhiSX()const
	{
		return this -> chiPhiSX;
	}

	int getNamSX()const
	{
		return this -> namSX;
	}

	virtual float tinhGiaSanPham()const
	{
		return (this->giaNL+this->chiPhiSX)*1.2;
	}
	virtual void print()const 
	{
		cout<<left<<setw(15)<<this->maSP;
		cout<<left<<setw(15)<<this->tenSP;
		cout<<left<<setw(15)<<this->loaiSP;
		cout<<left<<setw(15)<<this->tinhGiaSanPham();
		cout<<left<<setw(15)<<this->namSX<<endl;
	}

	friend istream &operator >> (istream & in, SanPhamSX & sp)
	{
		cout<<"MaSP: ";
		in>>sp.maSP;
		cout<<"TenSP: ";
		in>>sp.tenSP;
		cout<<"LoaiSP: ";
		in>>sp.loaiSP;
		cout<<"GiaNL: ";
		in>>sp.giaNL;
		cout<<"ChiPhiSX: ";
		in>>sp.chiPhiSX;
		cout<<"NamSX: ";
		in>>sp.namSX;
		return in;
	}

	friend ostream &operator << (ostream & out, const SanPhamSX & sp)
	{
		out<<left<<setw(15)<<sp.maSP;
		out<<left<<setw(15)<<sp.tenSP;
		out<<left<<setw(15)<<sp.loaiSP;
		out<<left<<setw(15)<<sp.tinhGiaSanPham();
		out<<left<<setw(15)<<sp.namSX;
		return out;
	}

	~SanPhamSX(){}
	
};
#endif