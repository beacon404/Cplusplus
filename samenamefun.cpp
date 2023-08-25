#include<iostream>
#include<math.h>
using namespace std;
namespace ns1{
    double volume(double);
    double volume(double, double);
    double volume(double, double, double);

}
namespace ns2{
    double SurfaceArea(double);
    double SurfaceArea(double, double);
    double SurfaceArea(double, double, double);

}

double ns1::volume(double a)
{
    return a*a*a;
}
double ns1::volume(double r,double h)
{
    return 3.14*r*r*h;
}
double ns1::volume(double l,double w, double h)
{
    double x;
    x= l*w*h;
    return x/3;
}

double ns2::SurfaceArea(double a)
{
    return 6*a*a;
}
double ns2::SurfaceArea(double r,double h)
{
    return (2*3.14*r*h)+(2*3.14*r*r);
}
double ns2::SurfaceArea(double l,double w, double h)
{
    double r1;
    r1 = sqrt(pow((w/2),2)+pow(h,2)); 
    double r2;;
    r2 = sqrt(pow((l/2),2)+pow(h,2));
    double x;
    x = l*w+l*r1+w*r2;
    return x;
}

int main ()
{
    double a,r,h, l,w ,h1;
    string user;
    cout << "Choose one object; cube or cylinder or pyramid to calculate volume and surface area  " << endl;
    cin >> user;

    if(user == "cube")
    {
         cout << "Enter length for cube.";
        cin >> a;
        double v1 = ns1::volume(a);
   
        double v4 = ns2::SurfaceArea(a);
        cout << v1 << '\n' << v4;
    }
    else if(user == "cylinder" )
    {
        cout << "Enter height and radius for cylinder.";
        cin >> h >> r; 
        double v2 = ns1::volume(h,r);
        double v5 = ns2::SurfaceArea(h,r);
         cout << v2 << '\n' << v5;
    } 
    else if( user == "pyramid")
   {
        cout << "Enter length, width and height for pyramid.";
        cin >> l >> w >> h1;
        double v3 = ns1::volume(l,w,h1);
        double v6 = ns2::SurfaceArea(l,w,h1);
        cout << v3 << '\n';
        cout << v6;
    }
    else
    {
        cout << "Wrong Input";
    }
    return 0;
}








// #include <iostream>
// #include <math.h>
// using namespace std;

// namespace ns1 {
//     double volume(double);
//     double volume(double, double);
//     double volume(double, double, double);
// }

// namespace ns2 {
//     double SurfaceArea(double);
//     double SurfaceArea(double, double);
//     double SurfaceArea(double, double, double);
// }

// double ns1::volume(double a) {
//     return a * a * a;
// }

// double ns1::volume(double r, double h) {
//     return 3.14 * r * r * h;
// }

// double ns1::ns1::fundouble l, double w, double h) {
//     double x;
//     x = l * w * h;
//     return x / 3;
// }

// double ns2::SurfaceArea(double a) {
//     return 6 * a * a;
// }

// double ns2::SurfaceArea(double r, double h) {
//     return (2 * 3.14 * r * h) + (2 * 3.14 * r * r);
// }

// double ns2::SurfaceArea(double l, double w, double h) {
//     double r1;
//     r1 = sqrt(pow((w / 2), 2) + pow(h, 2));
//     double r2;
//     r2 = sqrt(pow((l / 2), 2) + pow(h, 2)); // Missing semicolon here
//     double x;
//     x = l * w + l * r1 + w * r2; // Added missing multiplication operators
//     return x;
// }

// int main() {
//     double a, r, h, l, w, h1; // Removed extra comma
//     cout << "Enter length for cube: ";
//     cin >> a;
//     double v1 = ns1::ns1::funa); // Removed redundant 'double' keyword
//     cout << v1;

//     return 0; // Added a return statement for main function
// }
