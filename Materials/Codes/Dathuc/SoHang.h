#pragma once
class SoHang
{
private:
	int heso;
	int somu;
public:
	SoHang();
	SoHang(int, int);
	//setters
	void setHeso(int);
	bool setSomu(int);
	//getters
	int getHeso()const;
	int getSomu()const;
	~SoHang();
};