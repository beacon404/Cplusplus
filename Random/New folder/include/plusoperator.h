#pragma once
class Time
{
    private:
            int hours,minutes,seconds;
    public:
          Time(){}
          Time(int hours,int minutes,int seconds):hours(hours),minutes(minutes),seconds(seconds){}
          Time operator+(Time &);
          int gethours();
          int getminutes();
          int getseconds();

};

