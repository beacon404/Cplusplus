#include <iostream>

using namespace std;

class A {
    public:
        A() {cout << "A\n";}
};

class B : public A {
    public:
        B() {cout << "B\n";}
};

class C : public B{
    public:
        C() {cout << "C\n";}
};

int main() 
{
    cout << "Constructing A: \n"; 
    A cA;

    cout << "Constructing B: \n"; 
    B cB;

    cout << "Constructing C: \n"; 
    C cC;
}
