#ifndef CIRCEL_H
#define CIRCEL_H
#include "point.h"
#include <math.h>
class circle
{
private:
    double r;
    point I;

    /* data */
public:
    circle();
    circle(point I,double r);
    circle(double x,double y, double r);
    void set(double x, double y, double r)
    {
        this -> I.setX(x);
        this -> I.setY(y);
        this -> r = r;
    }
    void setI(const point &I );
    void setr(double r);
    double getr()const;
    point getI()const;
    double getArea()const;
    double getPerimeter()const;
    int exam(const point &)const;
};
#endif
    circle::circle(){
        this->r=0;
        this->I=point(0,0);
    }
    circle::circle(point tam,double r){
        this->I=tam;
        this->r=r;
    }
    circle::circle(double x,double y,double r)
    {
        this->I=point(x,y);
        this->r=r;
    }
    void circle::setI(const point &I)
    {
        this -> I=I;
    }
    void circle::setr(double r)
    {
        this -> r=r;
    }
    double circle::getr()const
    {
        return this -> r;
    }
    point circle::getI()const
    {
        return this -> I;
    }
    double circle::getArea()const
    {
        return 3.14*r*r;
    }
    double circle::getPerimeter()const
    {
        return 2*3.14*r;
    }
    int circle::exam(const point & k)const
    {
        double temp=sqrt(pow(I.getX()-k.getX(),2)+pow(I.getY()-k.getY(),2));
        if(temp < r)
        {
            return 0;
        }
        else if(temp==r)
        {
            return 1;
        }
        else
        {
            return 2;
        }       
    }
