#include <iostream>
#include "rectangle.h"
#include "point.h"
using namespace std;
int main()
{
    point a;
    a.setX(4.0);
    a.setY(6.0);
    point b(2,2);
    rectangle c(a,b);
    cout<<c.getArea()<<endl;
    cout<<c.getPerimeter()<<endl;

}