#include <iostream>

class Time {
private:
    short hours, minutes, seconds;

public:
    Time(short hours = 0, short minutes = 0, short seconds = 0)
        : hours(hours), minutes(minutes), seconds(seconds) {}

    short getHours() const { return hours; }
    short getMinutes() const { return minutes; }
    short getSeconds() const { return seconds; }
};

Time operator-(const Time &d1, const Time &d2) {
    short seconds = d1.getSeconds();
    short minutes = d1.getMinutes();
    short hours = d1.getHours();

    if (seconds < d2.getSeconds()) {
        minutes--;
        seconds += 60;
    }
    seconds -= d2.getSeconds();

    if (minutes < d2.getMinutes()) {
        hours--;
        minutes += 60;
    }
    minutes -= d2.getMinutes();

    hours -= d2.getHours();

    return Time(hours, minutes, seconds);
}

int main() {
    Time t1(12, 30, 45), t3(10, 35, 53);
    Time t4 = t3 - t1;

    // Display the result
    std::cout << "Result: " << t4.getHours() << " hours, " << t4.getMinutes() << " minutes, " << t4.getSeconds() << " seconds\n";

    return 0;
}
