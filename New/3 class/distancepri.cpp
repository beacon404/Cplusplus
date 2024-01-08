#include<iostream>
#include<cmath>
using namespace std;

class Point {
private:
    int x, y;
    double distance(int x, int y);

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {};
    double distance(Point& another);  // Declaration of the member function
};

double Point::distance(Point& another) {
    // Calculation of Euclidean distance between two points
    return distance(another.x,another.y);
}

double Point::distance(int x, int y) {
    // Calculation of Euclidean distance between two points
    return sqrt(pow(x - this->x, 2) + pow(y - this->y, 2));
}

int main() {
    Point p1(1, 2);
    Point p2(2, 4);

    double dist = p1.distance(p2);

    cout << "Distance between points: " << dist << endl;

    return 0;
}
