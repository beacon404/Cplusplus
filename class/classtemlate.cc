#include<iostream>
template<typename T>
class pair
{
    public:
        T first;
        T second;
        pair(){}
        pair(T f, T s):first(f), second(s){}
};
template<typename T>
 T max(pair<T> p)
    {
        return (p.first<p.second? p.second:p.first);
    }
int main()
{
    pair<int> p1(5,6);
    std::cout<< max(p1)<<"is large \n";
    pair<double> p2(1.2, 3.4);
    std::cout<<max(p2)<<"is larger";
    return 0;
}