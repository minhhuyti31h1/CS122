#ifndef DATE_H
#define DATE_H
class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(/* args */);
    Date(int, int, int);
    ~Date();
};

Date::Date(/* args */):day(0),month(0),year(0)
{
}
Date::Date(int d, int m, int y): day(d),month(m),year(y)
{}
Date::~Date()
{
}

#endif