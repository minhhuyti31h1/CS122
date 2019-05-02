#ifndef LAPTOP_H
#define LAPTOP_H
#include "Computer.h"

class Laptop:public Computer
{
private:
	float weight;
public:
	Laptop():Computer(),weight(0.0){}
	Laptop(Date manufacturedDate, string name,float _weight)
	:Computer(manufacturedDate,name),weight(_weight){}

	//setter
	void setWeight(float _weight)
	{
		this -> weight = _weight;
	}
	//getter
	float getWeight()const{return this -> weight;}

	int getExpiryDate(int year)const
	{
		return year - this->manufacturedDate.getYear();
	}
	~Laptop(){}
	
};
#endif