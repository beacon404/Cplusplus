#include<iostream>
using namespace std;


int main() {
    int (*b)[3];
    int a[3]={1,2,3};
    b = &a;
    cout<<b<<endl<<*b<<endl<<**b<<endl;
    int *c= a;
    cout<<c<<endl<<*c;
    
   return 0;
}