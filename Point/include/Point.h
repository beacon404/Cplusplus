#pragma once

class Point{
    private:
        double x,y;
        double distanceFrom(double x, double y);
    public:
        void setCoordinates(double x, double y);
        double distanceFrom(const Point  &anotherPoint);
};
