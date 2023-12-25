#include<iostream>

using namespace std;



int factorial (int n ) {

    if(n<1){
        throw 543;

    }
    int result = 1;
    for(int i= 1 ; i<=n; i++ ){
        result *=i ;
    }
    return result;

} 



int main()
{
    int n;
    cout << "n = ?";
    cin >>n;


    try
    {
        int f = factorial(n);
        cout << n << "! =" << f << "\n";    
    }
        catch (const int  msg)
        {
            cerr << "Error " << msg << "\n";
        }  
        return 0;
    }

