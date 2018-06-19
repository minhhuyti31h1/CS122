#ifndef GIANGVIEN_H
#define GIANGVIEN_H
#include "CanBo.h"
#include <iostream>
using namespace std;
#include <iomanip>
class GiangVien: public CanBo
{
private:
	string khoa;
	string trinhdo;
	int sotiet;
public:
	GiangVien();
	GiangVien(string ten, float pc, float hsl, string k, string td, int st);

	//setters
	void setKhoa(string k);
	void setTrinhDo(string td);
	void setSoTiet(int st);
	//getters
	string getKhoa()const;
	string getTrinhDo()const;
	int getSoTiet()const;

	float tinhLuong()const;
	friend istream & operator >> (istream & in, GiangVien & gv)
	{
		in >> gv.hovaten;
		in >> gv.hesoluong;
		in >> gv.khoa;
		in >> gv.trinhdo;
		in >> gv.sotiet;
		return in;
	}
	friend ostream & operator << (ostream & out, const GiangVien & gv)
	{
		out << left << setw(15)<< gv.hovaten << setw(15) << gv.khoa<<setw(15)<<gv.trinhdo;
		return out;
	}
	void print()const
	{
		cout << left << setw(15) << this->hovaten << setw(15) << this->khoa << setw(15) << this->trinhdo << endl;
	}
	~GiangVien();
};

#endif