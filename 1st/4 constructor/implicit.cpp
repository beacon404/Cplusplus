// implicit
// Complex a(3);
// explicit
// Complex a = Complex(3);

#include <iostream>

class MyClass {
    public:
        int a;
        void print(){
        std::cout<< "Default";}
    // No explicit constructors defined
    // The compiler will generate a default constructor if needed
};

int main() {
    MyClass obj{};  // Attempting to use the default constructor

    // Uncomment the line below to see if the compiler allows the default constructor
    // obj.someFunction();  // Call a member function to see if the object is valid

    return 0;
}


// #include <iostream>

// class ImplicitConstructor {
// public:
//     ImplicitConstructor(){
//         std::cout<< "hello" << std::endl;
//     }
// };

// class ExplicitConstructor {
// public:
//     // Explicit constructor with a parameter
//     explicit ExplicitConstructor(int value) {
//         // Initialization code using the parameter
//         std::cout << "ExplicitConstructor with value: " << value << std::endl;
//     }
// };

// int main() {
//     // Implicitly calls the default constructor
//     ImplicitConstructor objImplicit;

//     // Explicitly calling the constructor with a parameter
//     ExplicitConstructor objExplicit(42);

//     return 0;
// }
