#include<iostream>
#include"static.h"
using namespace std;
int main()
{
    cout<<"static member data="<< staticdemo::var++<< endl;
    staticdemo::var= 10;
    cout<<"static member data="<< staticdemo::var<< endl;
    return 0;
}