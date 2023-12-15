#pragma once 
class point
{
    private:
        double x;
        double y;
    public:
        point(){}
        point (double, double);
        double getx();
        double gety();
};
class rectangle
{
    private:
        point lt;
        point rb;
    public:
        rectangle(){}
        void setpoints(const point, const point);
        void getdimension(double&, double&);
        double perimeter();
};

