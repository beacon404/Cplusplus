#include<iostream>
#include<utility>
using namespace std;

bool compare(int a , int b){

    if(a<b){
       return true;
    }
    else
    {
        return false;
    }
}


void swaper(int &a,int &b, bool (*compareit)(int,int)){
    if(!compareit(a,b))
    {
        swap(a,b);
    }
}

int main()
{
    int a = 2, b=10;
    swaper(a,b,compare);
    std::cout << "a = " << a <<
", b = " << b << "\n";
return 0;

}