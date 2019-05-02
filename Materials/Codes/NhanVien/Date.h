#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std; 

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date():day(0),month(0),year(0){}
	Date(int _day, int _month, int _year):day(_day),month(_month),year(_year){}
	
	//setters
	void setDay(int _day)
	{
		this -> day = _day;
	}

	void setMonth(int _month)
	{
		this -> month = _month;
	}

	void setYear(int _year)
	{
		this -> year = _year;
	}

	//getters
	int getDay()const{return this->day;}
	int getMonth()const{return this->month;}
	int getYear()const{return this->year;}
	//operator
	friend ostream &operator << (ostream & out, const Date &d)
	{
		out<<d.day<<"-"<<d.month<<"-"<<d.year;
		return out;
	}
	~Date(){}
	
};
#endif