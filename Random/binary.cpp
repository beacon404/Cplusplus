#include<iostream>
class Time{

    private :
        short hours, minutes, seconds;
    public :
        Time(){}
        Time(short hours, short minutes, short seconds) 
        :hours(hours), minutes(minutes), seconds(seconds){}

    Time operator+(const Time &);
};

Time Time::operator+( const Time &d1)
{
    Time d= d1;
    d.seconds += this->seconds;
    d.minutes += d.seconds/60;
    d.seconds %= 60;
    d.minutes += this->minutes;
    d.hours += d.minutes/60;
    d.minutes %=60;
    d.hours += this-> hours;
}
    
std::ostream operator<<(std::ostream& outStream, const Time& t) {
    return outStream << t.hours << ":" << t.minutes << ":" << t.seconds; 
}
int main()

{
    t1(12,30,45);

    return 0;
}