#include<iostream>

#include"./sepratefile/include/distance.h"

using namespace std;
int main()
{
    point p1;
    p1.setcoordinates(10,20);
    point p2;
    p2.setcoordinates(0,20);
    cout<<"distance ="<< p1.distancefrom(p2)<< endl;
    return 0;
    
}
