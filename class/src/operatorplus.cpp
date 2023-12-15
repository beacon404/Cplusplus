#include<iostream>
#include"operatorplus.h"
using namespace std;
vector vector::operator+(vector& other)
{
    if(isrow==other.isrow)
    {
        return vector(x+other.x, y+other.y,z+other.z,isrow);
    }
}
void vector::display()
{
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
