#include<iostream>
#include"functionoverridep.h"
using namespace std;
int main()
{
    double x, y,z;
    cout<<"enter the dimensions"<<endl;
    cin>> x>>y>>z;
    point3d d(x,y,z);
    d.print();
    point f(x,y);
    f.print();
    return 0;
}