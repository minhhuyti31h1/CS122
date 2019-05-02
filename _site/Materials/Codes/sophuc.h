#include<iostream>
using namespace std;
class sophuc
{
private:
	float phanthuc;
	float phanao;
public:
	sophuc()
	{
		phanthuc=0;
		phanao=0;
	}
	sophuc(float x)
	{
		phanthuc=x;
		phanao=0;
	}
	sophuc(float x,float y)
	{
		phanthuc=x;
		phanao=y;
	}

	void setThuc(float x)
	{
		phanthuc=x;
	}
	void setAo(float y)
	{
		phanao=y;
	}
	void setAll(float x, float y)
	{
		phanao=x;
		phanthuc=y;
	}
	float getThuc()
	{
		return phanthuc;
	}
	float getAo()
	{
		return phanao;
	}
	void print ()
	{
		cout<<phanthuc;
		if(phanao>0)
		{
			cout<<"+"<<phanao<<"i";
		}else if(phanao<0){
			cout<<phanao<<"i";
		}
		cout<<endl;
	}

	sophuc Add(sophuc a)
	{
		return sophuc(this->phanthuc + a.phanthuc, 
			this->phanao + a.phanao);
	}
	sophuc operator + (sophuc a)
	{
		return sophuc(this->phanthuc + a.phanthuc, 
			this->phanao + a.phanao);
	}
	float modul(){
		return sqrt(phanthuc*phanthuc + phanao*phanao);
	}
	sophuc operator - (sophuc a)
	{
		return sophuc(this->phanthuc - a.phanthuc,
		 this->phanao - a.phanao);
	}
	sophuc operator * (sophuc a)
	{
		return sophuc(this->phanthuc*a.phanthuc-this->phanao*a.phanao, 
			this->phanthuc*a.phanao+this->phanao*phanthuc);
	}
	sophuc operator / (sophuc a)
	{
		sophuc c;
		c.phanthuc = (phanthuc*a.phanthuc + a.phanao*phanao)/(phanthuc
			*phanthuc+a.phanao*a.phanao);
		c.phanao = (a.phanthuc*phanao - a.phanao*phanthuc)/(phanthuc
			*phanthuc+a.phanao*a.phanao);
		return c;
	}
	void operator +=(sophuc a)
	{
		this->phanthuc=this->phanthuc+a.phanthuc;
		this->phanao=this->phanao+a.phanao;
	}
	void operator -=(sophuc a)
	{
		this->phanthuc = this->phanthuc - a.phanthuc;
		this->phanao = this->phanao - a.phanao;
	}
	void operator *=(sophuc a)
	{
		this->phanthuc = this->phanthuc*a.phanthuc-this->phanao*a.phanao;
		this->phanao = this->phanthuc*a.phanao+this->phanao*phanthuc;
	}
	void operator /=(sophuc a)
	{
		this ->phanthuc =(phanthuc*a.phanthuc + a.phanao*phanao)/(phanthuc
			*phanthuc+a.phanao*a.phanao);
		this ->phanao =(a.phanthuc*phanao - a.phanao*phanthuc)/(phanthuc
			*phanthuc+a.phanao*a.phanao);
	}
	
	bool operator ==(sophuc a)
	{
		return this->modul()==a.modul();
	}
	bool operator >(sophuc a)
	{
		return this->modul() > a.modul();
	}
	bool operator <(sophuc a)
	{
		return this->modul() < a.modul();
	}
	bool operator >=(sophuc a)
	{
		return this->modul() >= a.modul();
	}
	bool operator <=(sophuc a)
	{
		return this->modul() <= a.modul();
	}
	bool operator !=(sophuc a)
	{
		return this->modul() != a.modul();
	}
};