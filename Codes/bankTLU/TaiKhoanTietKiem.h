#include "TaiKhoan.h"

class TaiKhoanTietKiem : public TaiKhoan
{
private :
	float LaiSuat;
public:
	TaiKhoanTietKiem() : TaiKhoan(), LaiSuat(0){}
	TaiKhoanTietKiem(string a, int b, float c) 
	: TaiKhoan(a,b), LaiSuat(c){}


	~TaiKhoanTietKiem();
	
};