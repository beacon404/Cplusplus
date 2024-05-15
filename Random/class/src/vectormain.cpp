#include<iostream>
#include"vector.h"
using namespace std;
int main()
{
    vector v1{5,2,9};
    vector v2{3,5,6,};
    vector v3=v1.add(v2);
    cout <<"("<< v3.getx() <<" "<< v3.gety() <<" "<< v3.getz() <<")"<< endl;
    return 0;
} 