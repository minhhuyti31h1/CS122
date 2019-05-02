#include <iostream>
using namespace std;
#define PI 3.14
class HinhTron
{
protected:
	float banKinh;
public:
	HinhTron():banKinh(0.0){}
	HinhTron(float r):banKinh(r){}
	//setters
	void setBanKinh(float r)
	{
		this -> banKinh = r;
	}
	//getter
	float getBanKinh()const
	{
		return this -> banKinh;
	}

	float getDuongKinh()const
	{
		return 2*this ->banKinh;
	}
	float getDienTich()const
	{
		return this -> banKinh * this -> banKinh * PI;
	}

	~HinhTron(){}
	
};