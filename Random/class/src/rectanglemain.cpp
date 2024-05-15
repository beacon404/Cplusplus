#include<iostream>
#include"rectangle.h"
int main() {
    point lt{1.0,4.0};
    point rb{7.0,2.0};
    rectangle rect;
    rect.setpoints(lt, rb);
    double width, height;
    rect.getdimension(width, height);
    std::cout << "Rectangle Dimensions:" << std::endl;
    std::cout << "Width: " << width << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;
    return 0;
}
