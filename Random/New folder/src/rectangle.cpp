#include"rectangle.h"
double point::getx()
{
    return x;
}
double point::gety()
{
    return y;
}
void rectangle::setpoints(const point lt, const point rb)
{
    this->lt=lt;
    this->rb=rb;
}
void rectangle::getdimension(double& width, double& height)
{
    width= (rb.getx()-lt.getx());
    height= (lt.gety()-rb.gety());
}
double  rectangle::perimeter()
{
    double width, height;
    getdimension(width,height);
    double peri=2*(width+height);
    return peri;
}
point::point(double x, double y)
{
    this->x= x;
    this->y=y;
}