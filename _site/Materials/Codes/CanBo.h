#ifndef CANBO_H
#define CANBO_H
#include <string>
#include <iostream>
using namespace std;
#include <iomanip>
class CanBo
{
protected:
	string hovaten;
	float phucap;
	float hesoluong;
public:
	CanBo();
	CanBo(string ten, float pc, float hsl);

	//setters
	void setHoVaTen(string ten);
	void setPhuCap(float pc);
	void setHeSoLuong(float hsl);

	//getters
	string getHoVaTen()const;
	float getPhuCap()const;
	float getHeSoLuong()const;

	virtual float tinhLuong()const=0;
	virtual void print()const = 0;
	
	~CanBo();
};
#endif