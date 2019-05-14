#include "DaThuc.h"


DaThuc::DaThuc()
{
	this->n = 0;
	this->hesos = NULL;
}
DaThuc::DaThuc(int n)
{
	this->n = n+1;
	this->hesos = new double[n + 1]();
}
DaThuc::DaThuc(int n, double hesos[])
{
	this->n = n+1;
	this->hesos = hesos;
}
void DaThuc::setN(int n)
{
	this->n = n+1;
	delete[] this->hesos;
	this->hesos = new double[n + 1]();
}
void DaThuc::setHesos(double a[])
{
	this->hesos =a;
}
bool DaThuc::setHeso(int i,double value)
{
	this->hesos[i] = value;
	return true;
}
int DaThuc::getN()const
{
	return this->n;
}
double DaThuc::getsohang(int i)const
{
	return this->hesos[i];
}
double* DaThuc::getDathuc()const
{
	return this->hesos;
}
DaThuc DaThuc::operator + (const DaThuc &b)
{
	int maxsize = this->n > b.getN() ? this->n : b.getN();
	double *kq= new double[maxsize]();
	for (int i = 0; i < maxsize ; i++)
	{
		if (i < this->n && i < b.getN())
			kq[i] = this->hesos[i] + b[i];
		else if (i > this->n)
			kq[i] = b[i];
		else
			kq[i] = this -> hesos[i];
		
	}
	return DaThuc(maxsize-1, kq);
}
DaThuc DaThuc::operator -(const DaThuc &b)
{
	int maxsize = this->n > b.getN() ? this->n : b.getN();
	double *kq = new double[maxsize]();
	for (int i = 0; i < maxsize; i++)
	{
		if (i < this->n && i < b.getN())
			kq[i] = this->hesos[i] - b[i];
		else if (i > this->n)
			kq[i] = b[i];
		else
			kq[i] = this->hesos[i];

	}
	return DaThuc(maxsize - 1, kq);
}
//DaThuc DaThuc::operator *(const DaThuc &);
//DaThuc DaThuc::operator /(const DaThuc &);
double DaThuc::operator [] (int i)const
{
	return this->hesos[i];
}
void DaThuc::display()const
{
	for (int i = n -1; i >=0; i--)
	{
		if (this->hesos[i] != 0)
		{
			cout << this->hesos[i] << ".x^" << i;
			if (i == 0)
				break;
			else
				cout << "+";
		}
	}
	cout << endl;
}