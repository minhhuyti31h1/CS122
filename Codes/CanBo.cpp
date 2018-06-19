#include "CanBo.h"


CanBo::CanBo():hovaten(""), phucap(0.0), hesoluong(0.0)
{

}

CanBo::CanBo(string ten, float pc, float hsl) :hovaten(ten), phucap(pc), hesoluong(hsl)
{
}

//setters
void CanBo::setHoVaTen(string ten)
{
	this->hovaten = ten;
}
void CanBo::setPhuCap(float pc)
{
	this->phucap = pc;
}
void CanBo::setHeSoLuong(float hsl)
{
	this->hesoluong = hsl;
}

//getters
string CanBo::getHoVaTen()const
{
	return this->hovaten;
}
float CanBo::getPhuCap()const
{
	return this->phucap;
}
float CanBo::getHeSoLuong()const
{
	return this->hesoluong;
}

CanBo::~CanBo()
{
}
