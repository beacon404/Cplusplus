#include<iostream>
#include "student.h"
using namespace std;
int main()
{
    student s1;
    int n;
    s1.setname();
    cout<<"No of books:" <<endl;
    cin>>n;
    s1.issuedbooks(n);
    s1.setgrade();
    cout<<endl;
    cout<<"Name:"<<endl;
    s1.getname();
    s1.getissuedbooks(n);
    int b=s1.getgrade();
    switch (b){
     case 0:
    
     cout<<"A"<< endl;
     break;
     
     case 1:
     
    cout<<"A-"<< endl;
     break;
     
        case 2:
     cout << "B" << endl;
     break;
        case 3:
     cout<<"C"<< endl;
     break;
        case 4:
     cout<<"fail"<< endl;
     break;
        default:
    
        cout<<"gaHSGYDH";
        break;
    }
    
    return 0;
}