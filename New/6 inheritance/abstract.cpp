#include<iostream>
using namespace std;


class Abstract{
    public:
        virtual void area(){};
}
;

class Polygon: public Abstract{
    private:
    string name;
        public:
    Polygon(string name): name(name){};
    void print() {
    cout<<name<<endl;}
    

};

class Area: public Polygon{
    private:
        int side;
    public:
    Area(string name,int side): Polygon(name),side(side){}
void area()  {
    Polygon::print();
    
    cout<<(side*side)<<" is a area."<<endl;
    }
};


int main(){
    Area p1("Square",2);
    p1.area();
    return 0;
}

