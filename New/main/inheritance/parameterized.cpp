// ############### first Way #############

#include<iostream>
using namespace std;

class Car {
    public:
    string color;
    Car(const string& carcolor = "red") : color(carcolor)
    {
        cout<< "Car color is " << color;
    }
};


int main () {
    Car sanjaycar;
    cout << sanjaycar.color;
    return 0;
}

// ############### Second Way ######################

// #include<iostream>
// using namespace std;

// class Car {
//     public:
//     string color;
//     Car(const string& carcolor) : color(carcolor)
//     {
//         cout<< "Car color is " << color;
//     }
// };


// int main () {
//     Car sanjaycar("red");
//     return 0;
// }