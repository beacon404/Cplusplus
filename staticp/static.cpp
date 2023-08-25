#include<iostream>

class StaticDemo{
    public:
    static int var;

};

int StaticDemo::var=0;

int main(){
    std::cout <<"Static member data= "<< StaticDemo::var++ << std::endl;
    StaticDemo::var = 10;
    std::cout << "Static member data = " << StaticDemo::var << std::endl;


}