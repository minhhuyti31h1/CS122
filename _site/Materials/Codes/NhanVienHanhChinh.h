#ifndef NHANVIENHANHCHINH_H
#define NHANVIENHANHCHINH_H
#include "CanBo.h"
#include <string>
using namespace std; 
class NhanVienHanhChinh: public CanBo
{
private:
	string phongban;
	string chucvu;
	int songaycong;
public:
	NhanVienHanhChinh();
	NhanVienHanhChinh(string ten, float pc, float hsl,string pb, string cv, int nc);
	//setters
	void setPhongBan(string pb);
	void setChucVu(string cv);
	void setSoNgayCong(int nc);

	//getters
	string getPhongBan()const;
	string getChucVu()const;
	int getSoNgayCong()const;
	float tinhLuong()const;
	friend istream & operator >> (istream & in, NhanVienHanhChinh & nv)
	{
		in >> nv.hovaten;
		in >> nv.hesoluong;
		in >> nv.phongban;
		in >> nv.chucvu;
		in >> nv.songaycong;
		return in;
	}
	friend ostream & operator << (ostream & out, const NhanVienHanhChinh & nv)
	{
		out << left << setw(15)<< nv.hovaten << setw(15) << nv.phongban << setw(15) << nv.chucvu;
		return out;
	}
	void print()const
	{
		cout << left << setw(15) << this->hovaten << setw(15) << this->phongban << setw(15) << this->chucvu << endl;
	}
	~NhanVienHanhChinh();
};
#endif
