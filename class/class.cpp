#include<iostream>
#include<cmath>
using namespace std;
class point{
    private:
        double x;
        double y;
        double distancefrom(double x, double y);
    public:
        void setcoordinates(double x, double y);
        double distancefrom(const point &anotherpoint);
};
void point::setcoordinates(double x, double y)
{
    this-> x=x;
    this-> y=y;
}
double point::distancefrom( const point &anotherpoint)
{
    double sq_xdiff=pow((anotherpoint.x-this->x),2);
    double sq_ydiff=pow((anotherpoint.y-this->y),2);
    return sqrt(sq_xdiff+sq_ydiff);
}
int main()
{
    point p1;
    p1.setcoordinates(10,20);
    point p2;
    p2.setcoordinates(0,20);
    cout<<"distance ="<< p1.distancefrom(p2)<< endl;
    return 0;
}
