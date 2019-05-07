#include "TaiKhoanTietKiem.h"
#include "TaiKhoanVangLai.h"
#include <iostream>
using namespace std;
#include <string>
class KhachHang
{
private:
	string fullName;
	TaiKhoanTietKiem * dstk[10];
	TaiKhoanVangLai * dsvl[10];
	int soluongtk=0;
	int soluongvl=0;

	
public:
	KhachHang(){}
	KhachHang(string ten): fullName(ten){}

	bool lienKetTaiKhoan(string tkvl,string tktk)
	{
		TaiKhoanTietKiem *tempA = this -> layTaiKhoantk(tktk);
		TaiKhoanVangLai *tempB = this -> layTaiKhoanvl(tkvl);
		if (tempA != NULL && tempB != NULL)
		{
			tempB -> setLienKetTaiKhoan(tempA);
			return true;
		}
		return false;
	}
	int tongSoTien(){
		int tong=0;
		for(int i=0; i< this -> soluongtk; i++){
			tong += this -> dstk[i] -> getSoDu();
		}
		for(int i=0; i< this -> soluongvl; i++){
			tong += this -> dsvl[i] -> getSoDu();
		}
		return tong;
	}

	void themTaiKhoan(string loaitk ,string sotk, int sotien, float laisuat = 8.9){
		if( this -> soluongvl +  this -> soluongtk < 9){
			if(loaitk == "TK"){
				dstk[this ->soluongtk++] = new TaiKhoanTietKiem(sotk, sotien,laisuat);
			}
			else{
				dsvl[this ->soluongvl++] = new TaiKhoanVangLai(sotk, sotien);
			}	
		}
	}

	void print()const{
		for(int i=0; i < this -> soluongvl; i++){
			cout<<"Tai khoan vang lai "<<dsvl[i] -> getSoTaiKhoan() <<" so du: "<<dsvl[i] -> getSoDu()<<endl;	
		}
		for(int i=0; i < this -> soluongtk; i++){
			cout<<"Tai khoan tiet kiem "<<dstk[i] -> getSoTaiKhoan() <<" so du: "<<dstk[i] -> getSoDu()<<endl;	
		}
	}

	TaiKhoanTietKiem *layTaiKhoantk( string sotk){
		for(int i=0; i < this -> soluongtk; i++){
			if(this -> dstk[i] -> getSoTaiKhoan() == sotk){
				return this -> dstk[i];
			}
		}
	}
	TaiKhoanVangLai *layTaiKhoanvl( string sotk){
		for(int i=0; i < this -> soluongvl; i++){
			if(this -> dsvl[i] -> getSoTaiKhoan() == sotk){
				return this -> dsvl[i];
			}
		}
	}
	
	~KhachHang(){}
	
};