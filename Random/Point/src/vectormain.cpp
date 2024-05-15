#include<iostream>
#include"vector.h"
using namespace std;
int main()
{
    vector v1{1,2,3};
    vector v2{3,4,5};
    vector v3=v1.add(v2);
    cout<<v3.getx()<<" "<<v3.gety()<<" "<<v3.getz()<<endl;
    return 0;
}
//g++ -I includes src/vector.cpp src/vectormain.cpp -o vector.ex