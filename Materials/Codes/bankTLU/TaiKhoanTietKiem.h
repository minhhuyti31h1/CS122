#ifndef TAIKHOANTIEPKIEM_H
#define TAIKHOANTIEPKIEM_H
#include <iostream>
using namespace std;
#include <string>
#include "TaiKhoan.h"

class TaiKhoanTietKiem : public TaiKhoan
{
private :
	float LaiSuat;
public:
	TaiKhoanTietKiem(): TaiKhoan(), LaiSuat(0.0){}
	TaiKhoanTietKiem(string sotk, int sodu, float ls) 
	: TaiKhoan(sotk,sodu), LaiSuat(ls){}

	bool RutTien(int sotien){
		if(sotien > 0 && sotien <= this -> SoDu){
			this -> SoDu -=sotien;
			return true;
		}
		return false;
	}
	~TaiKhoanTietKiem(){}
	
};
#endif