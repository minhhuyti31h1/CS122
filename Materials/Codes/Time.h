#include <iostream>
using namespace std;

class Time
{
private:
    /* data */
    int hour;
    int mins;
    int secs;
public:
    Time(/* args */);
    /*
    int h: Hour
    int m: Mins
    int s: Secs
    */
    Time(int, int, int);
    //seters
    bool setTime(int,int,int);
    bool setHour(int);
    bool setMins(int);
    bool setSecs(int);
    //getters
    int getHour()const;
    int getMins()const;
    int getSecs()const;
    void print()const;
    //methods
    int convertTimetoSecs()const;
    double convertTimetoMins()const;
    //operators

    Time operator+(const Time &) const;

    ~Time();
};

Time::Time(/* args */)
{
    this -> hour=0;
    this -> mins=0;
    this -> secs=0;
}
Time::Time(int h, int m, int s):hour(h),mins(m),secs(s)
{}

bool Time::setTime(int h,int m,int s)
{
    return setHour(h) && setMins(m) && setSecs(s);
}
bool Time::setHour(int h)
{
    if(h>=0 && h <24)
    {
        this -> hour = h;
        return true;
    }
    return false;
    
}
bool Time::setMins(int m)
{
    if(m>=0 && m <60)
    {
        this -> mins = m;
        return true;
    }
    return false;
}
bool Time::setSecs(int s)
{
    if(s>=0 && s <60)
    {
        this -> secs = s;
        return true;
    }
    return false;
}

int Time::getHour()const
{
    return this -> hour;
}
int Time::getMins()const
{
    return this -> mins;
}
int Time::getSecs()const
{
    return this -> secs;
}
void Time::print()const
{
    cout<<this->hour<<":"<<this->mins<<":"<<this->secs<<endl;
}

int Time::convertTimetoSecs()const
{
    return  this->hour*60*60 + 
            this -> mins * 60 +
            this -> secs;
}
double Time::convertTimetoMins()const
{
    return  this->hour*60 + 
            this -> mins +
            this -> secs/60.0;
}

Time Time::operator+(const Time & B) const
{
    int s = B.getSecs() + this -> secs;
    int m = B.getMins() + this -> mins + s/60;
    int h = B.getHour() + this -> hour + m/60;
    return Time(h%24,m%60,s%60);
}

Time::~Time()
{
}
