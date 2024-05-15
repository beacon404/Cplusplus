#include<iostream>
#include"minusoperator.h"
using namespace std;
vector vector::operator-()
{
    return vector(-x,-y,-z);
}
void vector::display()
{
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
