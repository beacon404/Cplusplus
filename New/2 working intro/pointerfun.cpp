#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}

int main() {
    int x=5,y=1;
    int (*F)(int,int);
    F = add;
    cout<<F(x,y)<<endl;
        F = sub;
    cout<<F(x,y)<<endl;
    return 0;

}



// Dynamic allocation

// int *p = new data(4)