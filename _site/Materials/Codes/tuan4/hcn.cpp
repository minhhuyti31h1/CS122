#include <iostream>
#include "bai1.h"
using namespace std;

class HinhChuNhat :public Hinh
{
private:
	int x,y;
public:
	HinhChuNhat():Hinh(0,0){}
	HinhChuNhat(float a, float b): Hinh(a,b){}
	//setters
	void setX(int a)
	{
		this->x=a;
	}
	void setY(int b)
	{
		this->y=b;
	}
	void setXY(int a,int b)
	{
		this->x=a;
		this->y=b;	
	}
	int getX()const
	{
		return this->x;
	}	
	int getY()const
	{
		return this->y;
	}
	HinhChuNhat operator + (HinhChuNhat b)const
	{
		HinhChuNhat kq(this->chieuDai+b.chieuDai, this -> chieuRong + b.chieuRong);
		kq.setXY(this->X,this->Y);
		return kq;
	}


};
int main()
{
	HinhChuNhat a,b,c;
	int x,y;
	float a1,b1,a2,b2;
	cout<<"nhap toa do diem tren cung ben trai ";
	cin>>x;
	cin>>y;
	setxy(x,y);
	cout<<"nhap chieu dai ";
	cin>>a1;
	cout<<"nhap chieu rong ";
	cin>>b1;
	a.HinhChuNhat(a1,b1);
	cout<<"nhap chieu dai ";
	cin>>a2;
	cout<<"nhap chieu rong ";
	cin>>b2;
	b.HinhChuNhat(a2,b2);
	c=a+b;
	cout<<"dien tich"<<c.DT()<<endl;
	cout<<"chu vi"<<c.CV();


}