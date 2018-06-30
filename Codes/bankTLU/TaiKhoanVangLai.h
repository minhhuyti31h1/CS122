#ifndef TAIKHOANVANGLAI
#define TAIKHOANVANGLAI
#include <iostream>
using namespace std;
#include <string>
#include "TaiKhoan.h"
#include "TaiKhoanTietKiem.h"

class TaiKhoanVangLai : public TaiKhoan
{
private :
	TaiKhoanTietKiem *TaiKhoanLienKet = NULL;
public:
	TaiKhoanVangLai(): TaiKhoan(){}
	TaiKhoanVangLai(string sotk, int sodu)
	: TaiKhoan(sotk, sodu){}

	void setLienKetTaiKhoan(TaiKhoanTietKiem *Tk){
		this -> TaiKhoanLienKet = Tk;
	}

	bool RutTien(int sotien){
		if(sotien > 0){
			if(this ->SoDu >= sotien)
			{
				this -> SoDu -=sotien;
				return true;
			}
			else if(this -> TaiKhoanLienKet != NULL)
			{
				int temp = sotien - this -> SoDu;
				this -> SoDu = 0;
				return this -> TaiKhoanLienKet -> RutTien(temp);;
			}
		}
		return false;
	}

	~TaiKhoanVangLai(){}
	
};
#endif