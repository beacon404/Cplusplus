#include <iostream>

int main() {
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Iteration " << i << ": ";

        // Using 'continue' to skip printing odd numbers
        if (i % 2 != 0) {
            std::cout << "Skipped (odd number)\n";
            continue;
        }

        // Using 'break' to exit the loop when i is 4
        if (i == 4) {
            std::cout << "Breaking the loop (i is 4)\n";
            break;
        }

        // This part will be reached only for even numbers (except 4)
        std::cout << "Printed (even number)\n";
    }

    return 0;
}
