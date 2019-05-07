#include <iostream>
using namespace std;
class point
{
private:
    double x;
    double y;
public:
    point();
    point(double, double);
    //setters
    void setX(double);
    void setY(double);
    //getters
    double getX()const;
    double getY()const;
    ~point();
};

point::point(/* args */):x(0.0),y(0.0)
{}
point::point(double x, double y):x(x), y(y)
{}

point::~point()
{}
