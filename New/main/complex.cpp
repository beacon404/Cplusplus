#include <iostream>

using namespace std;

class Complex {
public:
    double real;
    double comp;

    Complex(double real = 0.0, double comp = 0.0) : real(real), comp(comp) {}

    // Overloading addition operator
    Complex operator+(const Complex& other) const {
        return Complex(this->real + other.real, this->comp + other.comp);
    }
};

int main() {
    Complex c1(1, 2);
    Complex c2(1, 2);

    Complex add = c1 + c2;

    // Output the result without overloading stream insertion operator
    cout << "Result of addition: " << add.real << " + " << add.comp << "i" << endl;

    return 0;
}
