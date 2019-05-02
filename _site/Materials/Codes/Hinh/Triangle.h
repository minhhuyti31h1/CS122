#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include "Point.h"
class Rectangle : public Shape{
private:
	Point topLeft;
	Point botRight;
public:
	Rectangle(int xt,int yt, int xb, int yb):topLeft(xt,yt),botRight(xb,yb){}

	float getLength()const
	{
		return abs(topLeft.getX()-botRight.getX());
	}

	float getWidth()const
	{
		return abs(topLeft.getY()-botRight.getY());
	}

	float get_area() const
	{
		return this -> getWidth() * this -> getLength();
	}

	float get_perimeter() const
	{
		return 2*(this -> getWidth() + this -> getLength());
	}

};


#endif 