#include<iostream>

using namespace std;

class Time{
    private:
        short hour,minute,second;
    public:
        Time(short hour, short minute, short second): hour(hour), minute(minute), second(second) {}

        friend Time operator+(const Time &,const Time &);

        void display(){
            cout << "Time: " <<hour << ":" << minute << ":" <<second<< endl; 
        };







};

Time operator+(const Time &t1, const Time &t2){
    Time d = t1;
    d.second += t2.second;
    d.minute += d.second/60;
    d.second %= 60;
    d.minute += this->minute;
    d.hour += d.minute/60;
    d.minute %=60;
    d.hour +=this->hour;
    return d;
};


int main () {

    Time t1(12, 30, 45);
    Time t2(10, 20,25);

    Time t = t1+t2;
    t.display();
    return 0;


}