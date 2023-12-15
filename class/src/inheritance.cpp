#include"inheritance.h"
#include<iostream>
std::string person::getname()
{
    return name;
}
 void student::print()
 {
    std:: cout<<getname()<<":"<<getgroup()<< std::endl;
 }
std::string student::setname(std::string n)
{
    this->name=n;
}
 std::string student::getgroup()
 {
    return group;
 }
 std::string student::setgroup(std::string g)
 {
    this->group=g;
 }