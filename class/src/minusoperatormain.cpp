#include<iostream>
#include"minusoperator.h"
using namespace std;
int main()
{
    vector a(2,-5,6);
    vector neg_a=-a;
    cout<<"a:";
    a.display();
    cout<<"\n"<<"-a:";
    neg_a.display();
    return 0;
}