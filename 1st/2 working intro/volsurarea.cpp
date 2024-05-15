#include <iostream>
#include <cmath>

namespace ns1 { 
    double volume(double a) {
        return std::pow(a, 3); // Volume of a cube: a^3
    }

    double volume(double r, double h) {
        return M_PI * std::pow(r, 2) * h; // Volume of a cylinder: π*r^2*h
    }

    double volume(double l, double w, double h) {
        return (l * w * h) / 3.0; // Volume of a right rectangular pyramid: (l*w*h)/3
    }
}

namespace ns2 { // Namespace for surface area calculations
    double surfaceArea(double a) {
        return 6 * std::pow(a, 2); // Surface area of a cube: 6*a^2
    }

    double surfaceArea(double r, double h) {
        return 2 * M_PI * r * (r + h); // Surface area of a cylinder: 2*pi*r*(r+h)
    }

    double surfaceArea(double l, double w, double h) {
        // Surface area of a right rectangular pyramid: base area + (0.5 * perimeter * slant height)
        double baseArea = l * w;
        double perimeter = 2 * (l + w);
        double slantHeight = std::sqrt(h*h + 0.25 * perimeter * perimeter);
        return baseArea + 0.5 * perimeter * slantHeight;
    }
}

int main() {
    // Example usage:
    double cubeSide = 3.0;
    double cylinderRadius = 2.0;
    double cylinderHeight = 4.0;
    double pyramidLength = 5.0;
    double pyramidWidth = 3.0;
    double pyramidHeight = 6.0;

    // Volume calculations
    std::cout << "Cube Volume: " << ns1::volume(cubeSide) << std::endl;
    std::cout << "Cylinder Volume: " << ns1::volume(cylinderRadius, cylinderHeight) << std::endl;
    std::cout << "Pyramid Volume: " << ns1::volume(pyramidLength, pyramidWidth, pyramidHeight) << std::endl;

    // Surface area calculations
    std::cout << "Cube Surface Area: " << ns2::surfaceArea(cubeSide) << std::endl;
    std::cout << "Cylinder Surface Area: " << ns2::surfaceArea(cylinderRadius, cylinderHeight) << std::endl;
    std::cout << "Pyramid Surface Area: " << ns2::surfaceArea(pyramidLength, pyramidWidth, pyramidHeight) << std::endl;

    return 0;
}
