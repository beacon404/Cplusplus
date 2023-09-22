#include<iostream>
#include"coutoperator.h"
using namespace std;
int main()
{
    time t1(10,20,23);
    time t2(34,56,45);
    time t= t1+t2;
    cout<<t<<endl;
    return 0;
}