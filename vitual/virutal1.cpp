#include <iostream>

class Shape
{
    public:
        virtual double getArea() const = 0;
        virtual ~Shape(){
            std::cout << "Base destructure is called" << std::endl;
        }
};
class Rectangle : public Shape
{
    private:
        double length;
        double breadth;
    public:
    Rectangle(double length=0.0, double breadth = 0.0):length{length},breadth{breadth}{
        std::cout << "created Rectangle" << std::endl;
    };

    double getArea () const 
    {
        return length * breadth;
    }
};

class Circle : public Shape
{
    private:
        double radius;
    public:
        Circle(double radius): radius(radius){
            std::cout << "Creating circle" << std::endl;
        };
    double getArea () const 
    {
        return 3.14 * radius * radius;
    }
};
int main()
{

    Circle circle(5.0);
    Rectangle rectangle(2,3);
    
    Shape* shape1  = &circle;
    Shape* shape2  = &rectangle;

    std::cout << "Area of the circle is " << shape1->getArea();
    // std::cout << "Area of the reactangle "<< shape2->getArea(); 
    std::cout << "Area of the rectangel is " << rectangle.getArea();


    return 0;
}