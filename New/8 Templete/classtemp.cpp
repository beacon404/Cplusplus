#include<iostream>
using namespace std;



// template <typename T>
// class Pair {
// public:
// T first;
// T second;
// Pair(){}
// Pair(T f, T s) : first(f), second(s) {}
// };
// template <typename T>
// T max(Pair<T> &p) {
// return (p.first < p.second ?
// p.second : p.first);
// }

// int main()
// {
// Pair<int> p1{ 5, 6 };
// std::cout << max(p1) << " is larger\n";
// Pair<double> p2{ 1.2, 3.4 };
// std::cout << max(p2) << " is larger\n";
// return 0;
// }

template <typename T>
class Pair{
    private:
        T a, b;
    public:
        Pair(T a, T b): a(a),b(b){}
        
        T max(){
            return (this->a>this->b? this->a: this->b);

        }

            };

int main () {
    Pair<int> p1(1,2);
    cout << p1.max()<<endl;
     Pair<double> p2(1.5,2.3);
    cout << p2.max();
    return 0;
}


