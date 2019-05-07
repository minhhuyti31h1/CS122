#include<iostream>
using namespace std;
#include "Time.h"

int main(int argc, char const *argv[])
{
    Time today(9,51,25);
    Time nextTime(1,9,35);
    Time kq = today + nextTime;

    kq.print();

    return 0;
}
