#ifndef SHAPE_H
#define SHAPE_H

class Shape{	// This is the base class!
public:
	Shape(){}
	virtual float get_area()const = 0;
	virtual float get_perimeter()const = 0;
};

#endif 