#include<iostream>
using namespace std;


template <typename T>

T fact(T n) {
    if(n<1)
    {
        throw"Error";
    }

    int facto=0;

    for (int i = 1; i <= n; i++)
{
result *= i;
}
return result;

    }


template<typename T>
int main() {
    T n;
    cin<<n;
    try{
        T ans = fact(n);
        cout<< ans;
    }
    catch (const char *msg)
    {
        cerr<<"Eroor: "<<msg <<endl;
    }

}
