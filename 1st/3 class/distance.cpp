#include<iostream>
#include<cmath>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {};
    double distance(Point& another);  // Declaration of the member function
};

double Point::distance(Point& another) {
    // Calculation of Euclidean distance between two points
    return sqrt(pow(another.x - this->x, 2) + pow(another.y - y, 2));
}

int main() {
    Point p1(1, 2);
    Point p2(2, 4);

    double dist = p1.distance(p2);

    cout << "Distance between points: " << dist << endl;

    return 0;
}
