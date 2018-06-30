#ifndef TAIKHOAN_H
#define TAIKHOAN_H
#include <iostream>
using namespace std;
#include <string>

class TaiKhoan
{
protected:
	string SoTaiKhoan;
	int SoDu;
public:
	TaiKhoan(): SoTaiKhoan(""), SoDu(0){}
	TaiKhoan(string stk, int sd) : SoTaiKhoan(stk), SoDu(sd){}

	int getSoDu()const{
		return this ->SoDu;
	}
	string getSoTaiKhoan()const{
		return this -> SoTaiKhoan;
	}
	void GuiTien(int a){
		if(a > 0){
			this -> SoDu+=a;
		}
	}
	virtual bool RutTien(int sotien) = 0;

	~TaiKhoan(){}
	
};
#endif