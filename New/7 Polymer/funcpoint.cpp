// Callback Function 












#include<iostream>

int func1(int a, int b) {return a*b;}
int func2(int a, int b) {return a+b;}

int main() {
    int a=2 , b=4;
    int (*F)(int,int);
    F = &func1;
    std::cout<< (*F)(a,b);
    F = &func2;
    std::cout << (F)(a,b);
    return 0;
}