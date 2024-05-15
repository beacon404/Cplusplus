#pragma once 

class point
{
    private:
        double x;
        double y;
        double distancefrom(double x, double y);
    public:
        void setcoordinates(double x, double y);
        double distancefrom(const point &anotherpoint);
};
