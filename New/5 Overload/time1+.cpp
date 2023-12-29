#include <iostream>
using namespace std;

class Time {
private:
    short hour, minute, second;

public:
    Time(short hour, short minute, short second) : hour(hour) , minute(minute), second(second) {}

    void operator++();

    void displayTime() const {
        std::cout << "Time: " << hour << ":" << minute << ":" << second << std::endl;
    }
};

void Time::operator++() {
    ++this->second; // Increment seconds

    // If seconds exceed 60, update minutes
    this->minute += this->second / 60;
    this->second = this->second % 60;

    // If minutes exceed 60, update hours
    this->hour += this->minute / 60;
    this->minute = this->minute % 60;

}

int main() {
    Time t1(46, 45, 6);
    ++t1;
    t1.displayTime(); // Display the updated time
    return 0;
}
