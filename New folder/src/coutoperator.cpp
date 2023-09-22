#include<iostream>
#include"coutoperator.h"
std::ostream& operator<<(std::ostream& outputstream, const time& t)
{
    return outputstream<< t.hr<<":"<<t.min<<":"<<t.sec;
}
time time::operator+( time& d1)
{
    time d=d1;
    d.sec+=this->sec;
    d.min+=this->min;
    d.min+=d.sec/60;
    d.sec=d.sec%60;
    d.hr+=this->hr;
    d.hr+=d.min/60;
    d.min=d.min%60;
    return d;
}
