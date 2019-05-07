#ifndef PERSONALCOMPUTER_H
#define PERSONALCOMPUTER_H
#include "Computer.h"

class PersonalComputer:public Computer
{
private:
	bool typeOfCase;
public:
	PersonalComputer():Computer(),typeOfCase(0){}
	PersonalComputer(Date manufacturedDate,string productorName,bool _typeofCase)
	:Computer(manufacturedDate,productorName),typeOfCase(_typeofCase){}

	//setters
	void setTypeofCase(bool _typeofCase)
	{
		this -> typeOfCase = _typeofCase;
	}

	//getters
	bool getTypeofCase()const{return this -> typeOfCase;}
	
	~PersonalComputer(){}
};
#endif