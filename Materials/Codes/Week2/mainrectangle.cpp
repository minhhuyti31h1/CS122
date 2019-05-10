#include <iostream>
#include "rectangle.h"
#include "circle.h"
#include "point.h"
using namespace std;
int main()
{
    point b(2,2);
    circle c;
    c.setI(b);
    c.setr(5);
    cout<<c.getArea()<<endl;
    cout<<c.getPerimeter()<<endl;
    c.set(3,3,5);
    cout<<c.getArea()<<endl;
    cout<<c.getPerimeter()<<endl;
}