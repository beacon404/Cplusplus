#include<iostream>
#include<string>
using namespace std;
template<typename T> bool func(T a, T b)
{
    return a<b;
}
int main()
{
    cout<<func(10,20)<<endl;
    cout<<func("ac","b")<<endl;
    cout<<func('10','14')<<endl;
    return 0;
}