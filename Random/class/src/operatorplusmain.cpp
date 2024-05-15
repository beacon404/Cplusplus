#include<iostream>
#include"operatorplus.h"
using namespace std;
int main()
{
    double a,b,c,d,e,f;
    bool isrow1, isrow2;
    cout<<"enter the vector1&2 and type true for row& false for column"<<endl;
    cin>>a>>b>>c>>d>>e>>f>> isrow1>>isrow2;
    vector aa(a,b,c,isrow1);
    vector bb(d,e,f,isrow2);
    vector cc=aa+bb;
    cout<<"add:";
    cc.display();
    return 0;

}