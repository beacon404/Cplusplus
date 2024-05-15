#include  <iostream>

using namespace std;

class Point 
{
    protected:
        double x, y;
    public:
        Point(double x = 0, double y = 0) : x(x), y(y) {}
        void print() {
            cout << "(" << x << "," << y << ")" ;
        }
};

class Point3D : public Point 
{
    protected:
        double z;
    public:
        Point3D(double x = 0, double y = 0, double z = 0) : Point(x, y), z(z) {}

        void print() {
            cout << "(" <<  x << "," << y << ")" << z << ")";
        }
};

int main()
{

}//geda muji