#include<iostream>

int main() {

    enum day {sunday,monday,tuesday};
    day physics = sunday;
    if (physics == monday)
    {
       std::cout<< "the physics class happens in " << physics << " day not in"; /* code */
    }
    else
    {
        std::cout << "no";
    }
    
    
}