#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;
#include <math.h>
#include "point.h"
class rectangle
{
private:
    point tf;//top-left
    point br;//bot-right
public:
    rectangle(/* args */);
    rectangle(const point &, const point &);
    rectangle(double,double,double,double);
    //setters
    bool settf(const point &);
    bool setbr(const point &);
    bool settf(double, double);
    bool setbr(double, double);
    //getters
    point gettf()const;
    point getbr()const;
    //methods
    double getArea()const;
    double getPerimeter()const;
    ~rectangle();
};
#endif