#include <iostream>
#include <math.h>
using namespace std;

class point
{
    private:
        double x;
        double y;
    public:
        //contructors
        point();
        point(double, double);
        //setters
        void setX(double);
        void setY(double);
        //getters
        double getX()const;
        double getY()const;
        //methods
};
point::point():x(0),y(0)
{}
point::point(double a, double b):x(a),y(b)
{}
void point::setX(double a)
{
    this -> x = a;
}
void point::setY(double b)
{
    this -> y = b;
}

double point::getX()const
{
    return this -> x;
}
double point::getY()const
{
    return this -> y;
}

class HCN
{
    private:
        point tl;
        point br;
    public:
        //contructors
        HCN();
        HCN(point, point);
        HCN(double, double, double, double);
        //setters
        void settl(const point &);
        void settl(double, double);
        void setbr(const point &);
        void setbr(double, double);
        //getters
        point gettl()const;
        point getbr()const;
        //methods
        double getArea()const;
        double getPerimeter()const;
};
HCN::HCN():tl(),br()
{}
HCN::HCN(point tt, point dp):tl(tt),br(dp)
{}
HCN::HCN(double x, double y, double a, double b)
:tl(x,y),br(a,b)
{}
void HCN::settl(const point &a)
{
    this -> tl = a;
}
void HCN::settl(double x, double y)
{
    this -> tl =  point(x,y);
}
void HCN::setbr(const point &a)
{
    this -> br = a;
}
void HCN::setbr(double x, double y)
{
    this -> br =  point(x,y);
}
point HCN::gettl()const
{
    return this -> tl;
}
point HCN::getbr()const
{
    return this -> br;
}
double HCN::getArea()const
{
    double width = abs(this -> tl.getX() - this -> br.getX());
    double hight = abs(this -> tl.getY() - this -> br.getY());
    return width*hight;
}
double HCN::getPerimeter()const
{
    double width = abs(this -> tl.getX() - this -> br.getX());
    double hight = abs(this -> tl.getY() - this -> br.getY());
    return (width+hight)*2;
}
int main()
{
    HCN minh(2,4,5,7);
    cout<<minh.getArea()<<endl;
}