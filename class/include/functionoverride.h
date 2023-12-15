#pragma once
#include<iostream>
class A
{
    public:
        A()
        {
            std::cout<<"A\n";
        }
};
class B: public A
{
    public:
        B()
        {
            std::cout<< "B\n";
        }
};
class C:public B{
    public:
    C()
    {
        std:: cout<< "C\n";
    }
};