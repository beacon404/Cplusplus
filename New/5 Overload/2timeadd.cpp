#include<iostream>

using namespace std;

class Time{
    private:
        short hour,minute,second;
    public:
        Time(short hour, short minute, short second): hour(hour), minute(minute), second(second) {}

// friend Time operator+(const Time &d2, const Time &d1);
        Time operator+(const Time &d);


            void displayTime() const {
        cout << "Time: " << hour << ":" << minute << ":" << second << endl;
            }
};



// Time operator+(const Time &d1, const Time &d1)
// { Time d = d1}
// d.second += d1.seocond;




Time Time::operator+(const Time &d1) {
    Time d = d1;
    d.second+=this->second;
    d.minute+=this->minute;
    d.minute+=d.second/60;
    d.second=d.second%60;
    d.hour+=this->hour;
    d.hour+=d.minute/60;
    d.minute=d.minute%60;

    return d;
}




int main() {
    // Using your version with cout statements for direct output
    Time t1(60, 56, 4);
    Time t2(1,1,1);

    Time t3 = t1+t2;

    t3.displayTime();

    // cout << "Updated Time: " << t3.hour << ":" << t3.minute << ":" << t3.second << endl;

    // Using the version with displayTime function
    // Time t2(46, 45, 6);
    // ++t2;
    // t2.displayTime();

    return 0;
}










//         Time operator+(const Time &t);

//         void display(){
//             cout << "Time: " <<hour << ":" << minute << ":" <<second<< endl; 
//         };







// };

// Time Time::operator+(const Time &t){
//     Time d = t;
//     d.second += this->second;
//     d.minute += d.second/60;
//     d.second %= 60;
//     d.minute += this->minute;
//     d.hour += d.minute/60;
//     d.minute %=60;
//     d.hour +=this->hour;
//     return d;
// };


// int main () {

//     Time t1(12, 30, 45);
//     Time t2(10, 20,25);

//     Time t = t1+t2;
//     t.display();
//     return 0;


// }