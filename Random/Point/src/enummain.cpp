#include<iostream>
#include"enum.h"
using namespace std;
int main()
{
    student s;
    int a;
    cout<< "enter the number"<< endl;
    cin >> a;
    s.setgrade(a);
    int b=s.getgrade();
    switch(b){
        case 0:
        cout<<"A"<< endl;
        break;
        case 1:
        cout<<"Aminus"<< endl;
        break;
        case 2:
        cout<<"B"<< endl;
        break;
        case 3:
        cout<<"fail"<< endl;
        break;
    }
    return 0;
}