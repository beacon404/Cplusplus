#include <iostream>
#include <coroutine>

// Generator-like coroutine that produces a sequence of numbers
struct NumberGenerator {
    int current = 0;

    struct promise_type {
        int current;

        NumberGenerator get_return_object() {
            return {0};
        }

        }
rs() {
    NumberGenerator generator;
    do {
        std::cout << generator.get_current() << " ";
    } while (generator.move_next());
}

int main() {
    generateAndPrintNumbers();

    return 0;
}
