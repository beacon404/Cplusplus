#include<iostream>
using namespace std;

class Copy {
private:
    int a;

public:
    // Parameterized constructor with a default parameter
    Copy(int b = 3) {
        a = 5;
        cout << b;
    }

    // Copy(double a = 0);

    // Copy constructor
    Copy(const Copy &another) {
        a = another.a;
        cout << a;
    }
};

int main() {
    Copy san;         // Calls the parameterized constructor with default value (3), sets a to 5, and prints 3
    Copy copy(san);   // Calls the copy constructor, copies the value of a from san, and prints it
    return 0;
}
