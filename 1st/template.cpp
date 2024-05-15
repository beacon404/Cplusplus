
#include <iostream>

template <typename T>
class Pair {
    public:
    T first;
    T second;
    Pair() {}
    Pair(T f, T s) : first(f), second(s) {}
};


template <typename T>

    T max(Pair<T> p) {
        return ( p.first < p.second ? p.second : p.first);
    } 

int main () 
{
    Pair<int> p1(5,6);

    std::cout << max(p1) << " is larger\n";


    Pair<double> p2(1.2,3.4);
    std::cout << max(p2) << " is larger\n";
 return 0;
}





// #include <iostream>

// template <typename T>
// class Pair {

//     private:
//     T first;
//     T second;

//     public:

//     Pair() {}
//     Pair(T f, T s) : first(f), second(s) {}


//     T max() {
//         return (first<second ? second : first);
//     } 
// };


// int main () 
// {
//     Pair<int> p1(5,6);

//     std::cout << p1.max() << " is larger\n";


//     Pair<double> p2(1.2,3.4);
//     std::cout << p2.max() << " is larger\n";

//     return 0;
    
    
//     }



















// #include<iostream>
// using namespace std;

// template <typename T>
// bool greatest (T a, T b) 
// {
// return a>b;
// }

// int main ( )
// {
// bool a = greatest<int>(3,4);
// bool b = greatest<std::string>("a","b");
// bool c = greatest("a","b");
// std::cout << "a = " <<a<< "b =" << b << " c =" << c<< std::endl;
// return 0;
// }























// #include<iostream>
// using namespace std;

// template <class x>
// void swapargs (x &a, x &b)
// {
// x temp;
// temp =a;
// a=b;
// b=temp;
// }

// int main ( )
// {
// int i=10, j=20;
// float x=10.5, y=15.5;
// cout<<"original values of i, j: "<<i<<"\t"<<j<<endl;
// cout<<"original values of x, y: "<<x<<"\t"<<y<<endl;
// swapargs (i,j);
// swapargs (x,y);
// cout<<"after swapargs the value of i,j= "<<i<<"\t"<<j<<endl;
// cout<<"after swapargs the value of x,y: "<<x<<"\t"<<y<<endl;
// return 0;
// }
