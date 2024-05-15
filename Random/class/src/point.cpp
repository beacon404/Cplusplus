#include<cmath>

#include"point.h"

void point::setcoordinates(double x, double y)
{
    this-> x=x;
    this-> y=y;
}
double point::distancefrom( const point &anotherpoint)
{
    return distancefrom(anotherpoint.x, anotherpoint.y);
}
double point::distancefrom(double x, double y)
{
    double sq_xdiff=pow((x-this->x),2);
    double sq_ydiff=pow((y-this->y),2);

    return sqrt(sq_xdiff+sq_ydiff);
    
}