#include<iostream>
#include<cmath>

#include "point.h" 

void Point::setCoordinates(double x, double y)
 {
    this ->x = x;
    this ->y = y;
 }
double Point::distanceFrom(const Point &anotherPoint)
{
    double sq_xdiff= pow(anotherPoint.x - this->x,2);
    double sq_ydiff = pow(anotherPoint.y - this-> y,2);
    return sqrt(sq_xdiff + sq_ydiff);
}


// #include <iostream> // Include the input/output stream library
// #include <cmath>    // Include the math library for mathematical functions

// class Point {         // Define a class named Point
// private:
//     double x, y;      // Private member variables for the coordinates
// public:
//     void setCoordinates(double x, double y); // Declare a function to set the coordinates
//     double distanceFrom(const Point &asimpoudel); // Declare a function to calculate distance
// };

// void Point::setCoordinates(double x, double y) {
//     this->x = x;       // Set the x coordinate of the current point object
//     this->y = y;       // Set the y coordinate of the current point object
// }

// double Point::distanceFrom(const Point &asimpoudel) {
//     double sq_xdiff = pow(asimpoudel.x - this->x, 2); // Calculate the squared x difference
//     double sq_ydiff = pow(asimpoudel.y - this->y, 2); // Calculate the squared y difference
//     return sqrt(sq_xdiff + sq_ydiff); // Return the square root of the sum of squared differences
// }

// int main() {
//     Point p1;                    // Create a Point object named p1
//     p1.setCoordinates(10, 20);   // Set the coordinates of p1 to (10, 20)

//     Point p2;                    // Create another Point object named p2
//     p2.setCoordinates(0, 10);    // Set the coordinates of p2 to (0, 10)

//     std::cout << "Distance =" << p1.distanceFrom(p2) << std::endl; // Print the distance between p1 and p2

//     return 0; // Return 0 to indicate successful execution
// }





// Here's the explanation, step by step:

// #include <iostream>: This includes the input/output stream library, which is necessary for printing to and reading from the console.

// #include <cmath>: This includes the math library, which provides various mathematical functions, including pow and sqrt.

// class Point { ... }: This block starts the definition of a class named Point.

// private:: This keyword indicates that the following member variables and functions are private and cannot be accessed directly from outside the class.

// double x, y;: These are private member variables of the class Point, representing the x and y coordinates of a point.

// public:: This keyword indicates that the following member functions are public and can be accessed from outside the class.

// void setCoordinates(double x, double y);: This is a function declaration for a public member function that sets the coordinates of a point.

// double distanceFrom(const Point &asimpoudel);: This is a function declaration for a public member function that calculates the distance between two points.

// void Point::setCoordinates(double x, double y) { ... }: This defines the member function setCoordinates for the Point class.

// this->x = x;: Inside setCoordinates, this line sets the x coordinate of the current Point object to the value passed as an argument.

// this->y = y;: Inside setCoordinates, this line sets the y coordinate of the current Point object to the value passed as an argument.

// double Point::distanceFrom(const Point &asimpoudel) { ... }: This defines the member function distanceFrom for the Point class.

// double sq_xdiff = pow(asimpoudel.x - this->x, 2);: This calculates the squared difference in x coordinates between the current Point object and another point.

// double sq_ydiff = pow(asimpoudel.y - this->y, 2);: This calculates the squared difference in y coordinates between the current Point object and another point.

// return sqrt(sq_xdiff + sq_ydiff);: This calculates the Euclidean distance using the squared differences and returns the result.

// int main() { ... }: This starts the main function, which is the entry point of the program.

// Point p1;: This creates an instance of the Point class named p1.

// p1.setCoordinates(10, 20);: This sets the coordinates of p1 to (10, 20) using the setCoordinates function.

// Point p2;: This creates another instance of the Point class named p2.

// p2.setCoordinates(0, 10);: This sets the coordinates of p2 to (0, 10) using the setCoordinates function.

// std::cout << "Distance =" << p1.distanceFrom(p2) << std::endl;: This calculates the distance between p1 and p2 using the distanceFrom function and prints the result along with the "Distance =" text.

// return 0;: This indicates that the program has run successfully and is returning an exit code of 0 to the operating system.
