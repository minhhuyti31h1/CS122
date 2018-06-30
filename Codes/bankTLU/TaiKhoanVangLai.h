#include "TaiKhoan.h"

class TaiKhoanVangLai : public TaiKhoan
{
private :
	string TaiKhoanLienKet;
public:
	TaiKhoanVangLai(): TaiKhoan(), TaiKhoanLienKet(""){}
	TaiKhoanVangLai(string a, int b, string c)
	: TaiKhoan(a, b), TaiKhoanLienKet(c){}

	void setLienKeTaiKhoan(string Tk){
		this -> TaiKhoanLienKet = Tk;
	}
	~TaiKhoanVangLai();
	
};