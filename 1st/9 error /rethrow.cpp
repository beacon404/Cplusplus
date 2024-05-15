#include <iostream>
#include <exception>

void foo() noexcept(false) {
    throw 100;  // Throws an integer exception
}

void bar() noexcept(false) {
    try {
        foo();  // Calls foo which may throw an exception
    } catch (int i) {
        // Catch block for handling the exception thrown by foo
        std::cout << "Caught inside bar: " << i << "\n";

        // Rethrow the same exception
        throw;  // This rethrows the caught exception
    }
}

int main() {
    try {
        bar();  // Calls bar, which in turn calls foo
    } catch (int i) {
        // Catch block for handling the rethrown exception
        std::cout << "Caught inside main: " << i << "\n";
    }

    return 0;
}

