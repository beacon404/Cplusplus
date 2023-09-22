#include<iostream>
#include"plusoperator.h"
using namespace std;
int main()
{
    Time t1(12,43,9);
    Time t2(10,20,25);
    Time t = t1+t2;
    cout<<"Time ="<<t.gethours()<<":"<<t.getminutes()<<":"<<t.getseconds()<<endl;
    return 0;
}