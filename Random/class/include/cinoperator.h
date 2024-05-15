#pragma once
#include<iostream>
class time
{
    private:
            int hr, min, sec;
    public:
            time (){}
            time(int hr, int min, int sec): hr(hr), min(min), sec(sec){}
            time operator+(time&);
        
    friend std::istream& operator>>(std::istream& inputstream, time &);
    friend std::ostream& operator<<(std::ostream& outputstream,  time &);
};