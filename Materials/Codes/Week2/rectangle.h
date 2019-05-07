#include <iostream>
using namespace std;
#include "point.h"
class rectangle
{
private:
    point tf;//top-left
    point br;//bot-right
public:
    rectangle(/* args */);
    rectangle(point tf, point br);
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

rectangle::rectangle(/* args */)
{
}

rectangle::~rectangle()
{
}
