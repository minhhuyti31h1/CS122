#ifndef HINHTRON_H
#define HINHTRON_H
#include <iostream>
using namespace std;
#include <math.h>
#include "Diem.h"
class HinhTron
{
private:
	float r;
	Diem tam;
public:
	HinhTron():r(0.0),tam(){}
	HinhTron(float bk, Diem i):r(bk),tam(i){}
	HinhTron(float bk, float x, float y):r(bk),tam(x,y){}

	//setters
	void setBanKinh(float bk)
	{
		this -> r = bk;
	}
	void setTam(Diem i)
	{
		this -> tam = i;
	}
	void setTam(float x, float y)
	{
		this -> tam = Diem(x,y);
	}

	//getters
	float getBanKinh()const
	{
		return this -> r;
	}
	Diem getTam()const
	{
		return this -> tam;
	}
	//operators
	HinhTron operator + (float n) const 
	{
		return HinhTron(this -> r + n, this ->tam);
	}
	HinhTron operator - (float n) const
	{
		return HinhTron(this -> r - n, this -> tam);
	}
	bool operator > (HinhTron a)const 
	{
		return this -> r > a.r;
	}
	bool operator < (HinhTron a)const 
	{
		return this -> r < a.r;
	}
	// operators input/output stream
	friend istream &operator >> (istream & in, HinhTron & a)
	{
		float x,y;
		in>>x>>y;
		a.tam = Diem(x,y);
		in>>a.r;
		return in;
	}

	friend ostream &operator << (ostream & out, const HinhTron & a)
	{
		out<<"I("<<a.tam.getX()<<", "<<a.tam.getY()<<") and R = "<<a.r;
		return out;
	}
	//methods
	bool ktThuoc(Diem a)
	{
		float x = a.getX();
		float y = a.getY();
		return sqrt(pow(this -> tam.getX() - x,2) + pow(this -> tam.getY() -y, 2)) <= this -> r;
	}
	~HinhTron(){}
	
};
#endif