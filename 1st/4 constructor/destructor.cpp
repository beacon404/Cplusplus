#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called\n";
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called\n";
    }
};

int main() {
    {
        // Creating an object
        MyClass obj;

        // Object goes out of scope when the block ends
        // Destructor is automatically called
    }

    // Object has been destroyed, and the destructor has already been called

    return 0;
}
