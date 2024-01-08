#include<iostream>
using namespace std;

inline int add(int a, int b){
    return a+b;
}
inline int add(int a, int b, int c){
    return a+b+c;
}

int main()
{

    int x=5,y=6,z=5;
    cout<<add(x,y)<<endl;
    cout<<add(x,y,z);
    return 0;

}