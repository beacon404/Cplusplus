#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b){
    return a+b;
}

template <typename T>
T sub(T a,T b){
    return a-b;
}

int main() {
    int a,b;
    cout<< "Enter integers a and b";
    cin >> a >> b;
    cout<< "sum is " << add<int>(a,b);
    double c, d;
    cout<< "Enter double a and b";
    cin >> c >> d;
    cout<< "sum is " << sub<double>(c,d);
    return 0;
}








// template<typename T>
// T add(T a, T b) {
//     return a + b;
// }

// template<typename T>
// T subtract(T a, T b) {
//     return a - b;
// }

// int main() {
//     // Example with integers
//     int intA, intB;
//     std::cout << "Enter two integers: ";
//     std::cin >> intA >> intB;

//     std::cout << "Sum: " << add(intA, intB) << std::endl;
//     std::cout << "Difference: " << subtract(intA, intB) << std::endl;

//     // Example with doubles
//     double doubleA, doubleB;
//     std::cout << "Enter two doubles: ";
//     std::cin >> doubleA >> doubleB;

//     std::cout << "Sum: " << add(doubleA, doubleB) << std::endl;
//     std::cout << "Difference: " << subtract(doubleA, doubleB) << std::endl;

//     return 0;
// }
