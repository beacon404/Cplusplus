#include<iostream>
int fact(int n);
int sumofnaturalnumber(int n) throw(int);
using namespace std;
int main()
{
    int n;
    cout<<"n=?\n";
    cin>> n;
    try
    {
        int f=fact(n);
        cout<<n<<"! ="<<f<<endl;
    }
    catch(const char* msg)
    {
        cerr<<"error: "<<msg<<endl;
    }
    try
    {
        int s=sumofnaturalnumber(n);
        cout<<"sum= "<<s<<endl;
    }
    catch(const int &m)
    {
        cerr<<"error:"<<m<<endl;
    }
    return 0;
    
}
int fact(int n)
{
    if(n<1)
    {
        throw "n must be greater than zero";
    }
    int result=1;
    for(int i=1;i<=n;i++)
    {
        result*=i;

    }
    return result;
}
int sumofnaturalnumber(int n) throw(int)
{
    if(n<1)
    {
        throw 505;
    }
    int result=0;
    for(int i=1;i<=n;i++)
    {
        result+=i;
    }
    return result;
}