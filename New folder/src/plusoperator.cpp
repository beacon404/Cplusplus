#include"plusoperator.h"
Time Time::operator+(Time &d1)
{   Time d=d1;
    d.seconds+=this->seconds;
    d.minutes+=this->minutes;
    d.minutes+=d.seconds/60;
    d.seconds=d.seconds%60;
    d.hours+=this->hours;
    d.hours+=d.minutes/60;
    d.minutes=d.minutes%60;
    return d;
}
int Time::gethours()
{
    return hours;
}
int Time::getminutes()
{
    return minutes;
}
int Time::getseconds()
{
    return seconds;
}

