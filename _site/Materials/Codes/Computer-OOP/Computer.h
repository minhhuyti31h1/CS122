#ifndef COMPUTER_H
#define COMPUTER_H
#include "Date.h"
#include <string>
using namespace std;
class Computer
{
protected:
	Date manufacturedDate;
	string productorName;
public:
	Computer():manufacturedDate(),productorName("No name"){}
	Computer(int day,int month,int year,string name):manufacturedDate(day,month,year),productorName(name){}
	Computer(Date _manufacturedDate,string name):manufacturedDate(_manufacturedDate),productorName(name){}
	//setters
	void setmanufacturedDate(int day, int month, int year)
	{
		this->manufacturedDate = Date(day,month,year);
	}
	void setProductorName(string name)
	{
		this ->productorName=name;
	}

	//getters
	Date getManufacturedDate()const {return this -> manufacturedDate;}
	string getProductorName()const {return this -> productorName;}

	~Computer(){}
	
};
#endif