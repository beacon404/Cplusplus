#include<iostream>
using namespace std;

class Point {
public:
    int x, y;
    Point(int x, int y): x(x), y(y) {}
};

class Polygon {
protected:
    Point centroid;
    int sides;

public:
    Polygon(Point &centroid, int sides) : centroid(centroid), sides(sides) {}

    void display() {
        cout << "Centroid: " << centroid.x << " " << centroid.y << " Sides: " << sides << endl;
    }

    void move(Point &p1) {
        centroid.x += p1.x;
        centroid.y += p1.y;
    }
};

class Triangle : public Polygon {
public:
    Triangle(Point &centroid, int sides) : Polygon(centroid, sides) {}

    void display() {
        cout << "Triangle - ";
        Polygon::display();
    }
};

class Rectangle : public Polygon {
public:
    Rectangle(Point &centroid, int sides) : Polygon(centroid, sides) {}

    void display() {
        cout << "Rectangle - ";
        Polygon::display();
    }
};

int main() {
    Point centroid1(0, 0);
    Triangle triangle(centroid1, 3);
    triangle.display();

    Point moveAmount1(2, 3);
    triangle.move(moveAmount1);

    triangle.display();

    Point centroid2(1, 1);
    Rectangle rectangle(centroid2, 4);
    rectangle.display();

    Point moveAmount2(3, 2);
    rectangle.move(moveAmount2);

    rectangle.display();

    return 0;
}
