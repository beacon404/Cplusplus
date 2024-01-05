#include<iostream>


//pass by reference 
void sum(int &a,int &b){
    a=5;b=7;
    std::cout<< a+b;
}

int main(){
    int x=1,y=7;
    std::cout<<x<<y;
    sum(x,y);
    std::cout<<x<<y;
    return 0;
}



// pass by value
// void sum(int a,int b){
//     std::cout<< a+b;
// }

// int main(){
//     int x=1,y=7;
//     sum(x,y);
//     return 0;
// }



// reference variable
// int main()

// {
//     int a=5;
//     int &b = a;
//     std::cout << b << a;
//     return 0;
    
// }