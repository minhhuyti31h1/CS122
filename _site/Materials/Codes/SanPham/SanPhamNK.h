#ifndef SANPHAMNK_H
#define SANPHAMNK_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
#include "SanPham.h"
class SanPhamNK:public SanPham
{
private:
	float giaNK;
	float chiPhiVC;
	string nuocNK;
	int namNK;
public:
	SanPhamNK():SanPham(){}
	SanPhamNK(string ma, string ten, string loai, float gia, float cp, string nuoc,int n)
	:SanPham(ma,ten,loai),giaNK(gia),chiPhiVC(cp),nuocNK(nuoc),namNK(n){}

	void setGiaNK(float a)
	{
		this -> giaNK = a;
	}

	void setChiPhiVC(float a)
	{
		this -> chiPhiVC = a;
	}

	void setNuocNK(string a)
	{
		this -> nuocNK = a;
	}

	void setNamVC(int a)
	{
		this -> namNK = a;
	}

	float getGiaNK()const
	{
		return this -> giaNK;
	}

	float getChiPhiVC()const
	{
		return this -> chiPhiVC;
	}

	string getNuocNK()const
	{
		return this -> nuocNK;
	}

	int getNamNK()const
	{
		return this -> namNK;
	}

	virtual float tinhGiaSanPham()const
	{
		return (this->giaNK+this->chiPhiVC)*1.2;
	}
	virtual void print()const 
	{
		cout<<left<<setw(15)<<this->maSP;
		cout<<left<<setw(15)<<this->tenSP;
		cout<<left<<setw(15)<<this->loaiSP;
		cout<<left<<setw(15)<<this->tinhGiaSanPham();
		cout<<left<<setw(15)<<this->namNK<<endl;
	}

	friend istream &operator >> (istream & in, SanPhamNK & sp)
	{
		in>>sp.maSP;
		in>>sp.tenSP;
		in>>sp.loaiSP;
		in>>sp.giaNK;
		in>>sp.chiPhiVC;
		in>>sp.namNK;
		return in;
	}

	~SanPhamNK(){}
	
};
#endif