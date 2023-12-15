#pragma once
class vector
{
    private:
        double x,y,z;
        bool isrow;
    public:
        vector(double x=0, double y=0, double z=0, bool isrow=true):x(x), y(y), z(z), isrow(isrow){}
        vector operator+(vector& other);
        void display();
};