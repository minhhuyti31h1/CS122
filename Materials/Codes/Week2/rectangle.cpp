#include "rectangle.h"
rectangle::rectangle():tf(0.0,0.0),br(0.0,0.0)
{
}
rectangle::rectangle(const point &tf, const point &br)
{
    this->tf = tf;
    this->br = br;
}
rectangle::rectangle(double a,double b,double c,double d):
tf(a,b),br(c,d)
{}
bool rectangle::settf(const point &a)
{
    this ->tf=a;
    return true;
}
bool rectangle::setbr(const point &a)
{
    this->br=a;
    return true;
}

bool rectangle::settf(double a, double b){
    this ->tf=point(a,b);
    return true;
}
bool rectangle::setbr(double a, double b){
    this->br=point(a,b);
    return true;
}
point rectangle::gettf()const
{
    return this -> tf;
}
point rectangle::getbr()const
{
    return this -> br;
}
rectangle::~rectangle()
{
}
double rectangle::getArea()const
{
    double width = abs(this->br.getX()- this->tf.getX());
    double hight = abs(this->br.getY()- this->tf.getY());
    return width*hight;
}
double rectangle::getPerimeter()const
{
    double width = abs(this->br.getX()- this->tf.getX());
    double hight = abs(this->br.getY()- this->tf.getY());
    return (width+hight)*2;
}