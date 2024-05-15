#include <iostream>
#include <cmath>

class Point {
public:
    Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}
    double getX() const { return x; }
    double getY() const { return y; }

private:
    double x, y;
};

class Rectangle {
public:
    void setPoints(const Point& topLeft, const Point& bottomRight) {
        this->topLeft = topLeft;
        this->bottomRight = bottomRight;
    }

    void getDimensions(double& width, double& height) {
        width = fabs(bottomRight.getX() - topLeft.getX());
        height = fabs(bottomRight.getY() - topLeft.getY());
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
    Point topLeft(1.0, 4.0);
    Point bottomRight(7.0, 2.0);

    Rectangle rect;
    rect.setPoints(topLeft, bottomRight);

    double width, height;
    rect.getDimensions(width, height);

    std::cout << "Rectangle Dimensions:" << std::endl;
    std::cout << "Width: " << width << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;

    return 0;
}
