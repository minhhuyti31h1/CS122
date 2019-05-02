#ifndef SANPHAM_H
#define SANPHAM_H
#include <string>
#include <iostream>
using namespace std;
class SanPham
{
protected:
	string maSP;
	string tenSP;
	string loaiSP;
public:
	SanPham():maSP(""),tenSP(""),loaiSP(""){}
	SanPham(string ma, string ten, string loai)
	:maSP(ma),tenSP(ten),loaiSP(loai){}

	void setMaSP(string ma)
	{
		this -> maSP = ma;
	}

	void setTenSP(string ten)
	{
		this -> tenSP = ten;
	}

	void setLoaiSP(string loai)
	{
		this -> loaiSP = loai;
	}

	string getMaSP()const
	{
		return this -> maSP;
	}

	string getTenSP()const
	{
		return this -> tenSP;
	}

	string getLoaiSP()const
	{
		return this -> loaiSP;
	}

	virtual float tinhGiaSanPham()const=0;
	virtual void print()const=0;

	~SanPham(){}
	
};
#endif