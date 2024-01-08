#include <iostream>
using namespace std;

class Time {

   

public: short second, minute, hour;
    Time(short second, short minute, short hour) : second(second), minute(minute), hour(hour) {};

    Time operator++();

    void displayTime() const {
        cout << "Time: " << hour << ":" << minute << ":" << second << endl;
    }
};

Time Time::operator++() {
    ++this->second;

    this->minute += this->second / 60;
    this->second = this->second % 60;

    this->hour += this->minute / 60;
    this->minute = this->minute % 60;
    return *this;
}

int main() {
    // Using your version with cout statements for direct output
    Time t1(59, 56, 4);
    Time t2= ++t1;
    cout << "Updated Time: " << t2.hour << ":" << t2.minute << ":" << t2.second << endl;

    // Using the version with displayTime function
    // Time t2(46, 45, 6);
    // ++t2;
    // t2.displayTime();

    return 0;
}



// class Time {
// private:
//     short hour, minute, second;

// public:
//     Time(short hour, short minute, short second) : hour(hour) , minute(minute), second(second) {}

//     void operator++();

//     void displayTime() const {
//         std::cout << "Time: " << hour << ":" << minute << ":" << second << std::endl;
//     }
// };

// void Time::operator++() {
//     ++this->second; // Increment seconds

//     // If seconds exceed 60, update minutes
//     this->minute += this->second / 60;
//     this->second = this->second % 60;

//     // If minutes exceed 60, update hours
//     this->hour += this->minute / 60;
//     this->minute = this->minute % 60;

// }

// int main() {
//     Time t1(46, 45, 6);
//     ++t1;
//     t1.displayTime(); // Display the updated time
//     return 0;
// }