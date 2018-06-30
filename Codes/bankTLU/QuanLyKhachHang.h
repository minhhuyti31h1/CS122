#include "TaiKhoanTietKiem.h"
#include "TaiKhoanVangLai.h"

class QuanLyKhachHang
{
private:
	string FullName;
	TaiKhoan * DSTK[10];
	int SoTaiKhoan=0;
public:
	QuanLyKhachHang(){}
	QuanLyKhachHang(string a): FullName(a){}

	TaiKhoan *LayTaiKhoan( string a){
		for(int i=0; i< SoTaiKhoan; i++){
			if(DSTK[i] -> getSoTaiKhoan() == a ){
				return DSTK[i];
			}
		}
	}
	int TongSoTien(){
		int tong=0;
		for(int i=0; i<SoTaiKhoan;i++){
			tong += DSTK[i] -> getSoDu();
		}
		return tong;
	}

	void ThemTaiKhoan(sring t ,string a, int du){
		if( SoTaiKhoan <9){
			if(t == "TK"){
				TaiKhoanTietKiem *temp = new TaiKhoanTietKiem(a, du);
				DSTK[++SoTaiKhoan] = temp;
			}
			else{
				TaiKhoanVangLai *temp = new TaiKhoanVangLai(a, du);
				DSTK[++SoTaiKhoan] = temp;
			}	
		}
	}

	void Print(){
		for(int i=0; i< SoTaiKhoan; i++){
			cout<<"Tai khoan "<<DSTK[i] -> getSoTaiKhoan() <<" :\n";
			cout<<"So du: "<< DSTK[i] -> getSoDu()<<endl;	
		}
	}

	~QuanLyKhachHang();
	
};