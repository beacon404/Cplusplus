#include<iostream>
using namespace std;



class Time {
private:
short hours, minutes, seconds;
public:
Time() { }
Time(short hours, short minutes, short seconds)
: hours(hours), minutes(minutes), seconds(seconds) { }

        Time operator++(int);
        void display();

};

void Time::display(){
    cout<<this->hours<<":"<<this->minutes<<":"<<this->seconds<<endl;
}
Time Time::operator++(int a){
    Time temp(hours, minutes, seconds);
    this->seconds++;
// If seconds > 60, update minutes accordingly
this->minutes += this->seconds / 60;
this->seconds = this->seconds % 60;
// If minutes > 60, update hours accordingly
this->hours += this->minutes / 60;
this->minutes = this->minutes % 60;
return temp;
}

int main() {
Time t1(12, 30, 45);
t1.display();
Time t = t1++;
t.display();
Time b = t1++; 
b.display();
}