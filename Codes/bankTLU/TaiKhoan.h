
class TaiKhoan
{
protected:
	string SoTaiKhoan;
	int SoDu;
public:
	TaiKhoan(): SoTaiKhoan(""), SoDu(0){}
	TaiKhoan(string a, int b) : SoTaiKhoan(a), SoDu(b){}

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
	bool KiemTraSoDu()const{
		return this -> SoDu >0;
	}
	void RutTien(int a){
		if(a >0){
			this -> SoDu -=a;
		}
	}
	~TaiKhoan();
	
};