#ifndef STUDENT_H
#define STUDENT_H
#include "Human.h"
class Student:protected Human
{
private:
    string studentID;
    string major;
public:
    Student();
    Student(string name,bool sex, Date dob, string id, string m);
    //
    void studentJump()const;
    ~Student();
};

Student::Student(/* args */)
{  
}
Student::Student(string name,bool sex, Date dob, string id, string m)
:Human(name,sex,dob),studentID(id),major(m)
{}
void Student::studentJump()const
{
    cout<<this->studentID;
    this->jump;
}
Student::~Student()
{
}
#endif

int main()
{
    Student a("NGUYEN DUC THANG",0,Date(01,01,2000),"CTI034","CS");
    a.studentJump();
    a.
}