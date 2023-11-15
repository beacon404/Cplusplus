#include <iostream>

// Enumeration declaration
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Using the enumeration
    Day today;
    today = WEDNESDAY;

    // Switch statement using the enumeration
    switch (today) {
        case SUNDAY:
            std::cout << "It's Sunday." << std::endl;
            break;
        case MONDAY:
            std::cout << "It's Monday." << std::endl;
            break;
        case WEDNESDAY:
            std::cout << "It's Wednesday." << std::endl;
            break;
        default:
            std::cout << "It's not Sunday or Monday." << std::endl;
    }

    return 0;
}
