#pragma once
#include "SoHang.h"
#include <iostream>
using namespace std;

class DaThuc
{
	private:
		int n;
		double *hesos;
	public:
		DaThuc();
		DaThuc(int);
		DaThuc(int, double[]);
		//setters
		void setN(int);
		void setHesos(double []);
		bool setHeso(int i, double value);
		//getters
		int getN()const;
		double getsohang(int)const;
		double* getDathuc()const;
		//operators
		DaThuc operator + (const DaThuc &);
		DaThuc operator -(const DaThuc &);
		//DaThuc operator *(const DaThuc &);
		//DaThuc operator /(const DaThuc &);
		double operator [] (int)const;
		//methods
		void display()const;
		~DaThuc()
		{

		}
};

