#include <iostream>
#include <cmath>

class Point {
public:
    double x = 0.0;
    double y = 0.0;
};

class Rectangle {
public:
    void setPoints(const Point& topLeft, const Point& bottomRight) {
        this->topLeft = topLeft;
        this->bottomRight = bottomRight;
    }

    void getDimensions(double& width, double& height) {
        width = std::fabs(bottomRight.x - topLeft.x);
        height = std::fabs(bottomRight.y - topLeft.y);
    }

    double perimeter() {
        double width, height;
        getDimensions(width, height);
        return 2 * (width + height);
    }

private:
    Point topLeft;
    Point bottomRight;
};

int main() {
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
