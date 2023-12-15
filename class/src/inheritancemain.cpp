#include<iostream>
#include"inheritance.h"
#include<string>
using namespace std;
int main()
{
    student s;
    cout<<"enter name: ";
    std::string n;
    cin>> n;
    s.setname(n);
    cout<<"enter group: ";
    std::string g;
    cin>>g;
    s.setgroup(g);
    s.print();
}