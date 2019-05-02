#include <iostream>
using namespace std;
#include "HinhTron.h"

class HinhCau:public HinhTron
{
public:
	HinhCau():HinhTron(0.0){}

	HinhCau(float r):HinhTron(r){}

	float getDienTich()const
	{
		return 4 * this -> banKinh * this -> banKinh * PI;
	}

	~HinhCau(){}
	
};