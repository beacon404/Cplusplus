#include <iostream>


int main()
{
    Point p1;
    p1.setCoordinates(10,20);

    Point p2;
    p2.setCoordinates(0,10);
    std::cout << "Distance =" << p1.distanceFrom(p2) << std::endl;
    return 0;
 
}



// ##############################main.cpp:

// #include<iostream>
// #include<math.h>
// #include"point.cpp"

// int main()
// {
//     Point p1;
//     p1.setCoordinates(10,20);

//     Point p2;
//     p2.setCoordinates(0,10);
//     std::cout << "Distance =" << p1.distanceFrom(p2) << std::endl;
//     return 0;
 
// }


// #######################point.cpp;

// #include<iostream>
// #include<math.h>
// #include"Point.h" 

// void Point::setCoordinates(double x, double y)
//  {
//     this->x = x;
//     this ->y = y;
//  }
// double Point::distanceFrom(const Point &anotherPoint)
// {
//     double sq_xdiff= pow(anotherPoint.x - this->x,2);
//     double sq_ydiff = pow(anotherPoint.y - this-> y,2);
//     return sqrt(sq_xdiff + sq_ydiff);
// }


// #######################################point.h 


// #pragma once

// #include<iostream>


// class Point{
//     private:
//     double x,y;
//     public:
//     void setCoordinates(double x, double y);
//     double distanceFrom(const Point  &anotherPoint);
// };
