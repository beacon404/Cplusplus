#include<iostream>
using namespace std;
#include<cmath>

class Point{
    public:
    double x=0;
    double y=0;
};


class Rectangle{


    private:
    Point topleft;
    Point botright;

    public:

    void setPoints(const Point &topleft, const Point &botright)
    {
        this->topleft= topleft;
        this->botright = botright;

    }

void getDimensions(double& width, double& height) {
        width = std::fabs(botright.x - topleft.x);
        height = std::fabs(botright.y - topleft.y);
    }

    double perimeter() {
        double width, height;
        getDimensions(width, height);
        return 2 * (width + height);
    }

};


int main(){
      Rectangle rect;
    Point topLeft;
    Point bottomRight;

    std::cout << "Enter top-left point coordinates (x y): ";
    std::cin >> topLeft.x >> topLeft.y;

    std::cout << "Enter bottom-right point coordinates (x y): ";
    std::cin >> bottomRight.x >> bottomRight.y;

    rect.setPoints(topLeft, bottomRight);

    double width, height;
    rect.getDimensions(width, height);

    std::cout << "Rectangle Dimensions: Width = " << width << ", Height = " << height << std::endl;
    std::cout << "Rectangle Perimeter: " << rect.perimeter() << std::endl;

    return 0;


}
