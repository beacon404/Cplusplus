#include<iostream>
using namespace std;



class Vector{
    private:
        int a,b,c;
    public:
    
        Vector(int a , int b, int c): a(a),b(b),c(c){}
        friend Vector operator-(const Vector &v1, const Vector &v2);
         void display();


};



Vector operator-(const Vector &v1, const Vector &v2){
    Vector v = v1; //(0,0,0);
    v.a = v.a - v2.a;
    v.b = v.b - v2.b;
    v.c = v.c - v2.c;
    // v.a = v1.a - v2.a;
    // v.b = v1.b - v2.b;
    //  v.c= v1.c - v2.c;
    return  v;

};

void Vector::display() {
    cout<<a<<","<<b<<","<<c;
};

int main() {
    Vector v1(1,2,3);
     Vector v2(0,0,3);
     Vector min = v1-v2;
     min.display();
}