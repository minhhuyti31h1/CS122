#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "Date.h"
#include <iostream>
using namespace std;
class Human
{
protected:
    string fullname;
    bool sex;
    Date DOB;
public:
    Human(/* args */);
    Human(string, bool, Date);
    //methods
    void run()const;
    void jump()const;
    ~Human();
};

Human::Human(/* args */)
{
}
Human::Human(string name, bool s, Date dob)
:fullname(name),sex(s),DOB(dob)
{}
void Human::run()const
{
    cout<<this->fullname<<" RUN!!!";
}
void Human::jump()const
{
    cout<<this->fullname<<" JUMP!!!";
}
Human::~Human()
{
}

#endif