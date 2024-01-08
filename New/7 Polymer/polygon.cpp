#include<iostream>
using namespace std;


class Polygon {
    public:
    virtual ~Polygon(){};
    virtual void area()=0;   
};

class Triangle: public Polygon {
    private:
        double height, base;
    public:
        Triangle(double height, double base): height(height), base(base){}
         void area(){
            double a= (0.5)*height*base;
            cout <<a <<endl;
            
        }
};


int main() {
    Polygon *p;
    Triangle t1(5,2);
    p = &t1;
    p->area();
    t1.area();
    return 0;
}