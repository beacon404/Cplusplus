#include <iostream>

using namespace std;

class Vector {
private:
    int a, b, c;

public:
    Vector(int a = 0, int b = 0, int c = 0) : a(a), b(b), c(c) {}

    // Overloading unary minus operator
    Vector operator-() {
        return Vector(-this->a, -this->b, -this->c);
    }

    // Function to display the vector
    void display() {
        cout << "Vector: (" << a << ", " << b << ", " << c << ")" << endl;
    }
};

int main() {
    Vector v1(1, 2, 3);

    // Overloaded unary minus operator is called
    Vector negV1 = -v1;

    // Displaying the original and negated vectors
    cout << "Original ";
    v1.display();

    cout << "Negated ";
    negV1.display();

    return 0;
}