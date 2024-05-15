#pragma once
#include<iostream>
class point
{
    protected:
        double x, y;
    public:
        point( double x=0, double y=0):x(x), y(y) {}
        void print()
        {
            std::cout<<"("<< x<<","<<y<<")";
        }
};
class point3d:public point
{
    protected:
        double z;
    public:
        point3d(double x=0, double y=0, double z=0): point(x,y), z(z) {}
        void print()
        {
            std::cout<<"("<< x<<","<<y<<","<<z<<")";
        }
};