#include<iostream>
using namespace std;

class Person {
    private:
    long id;

    public:

    string name;
    string getName() const {return name;}        

};

class Student : public Person{
    private:
    string group;
    string batch;
    public:
    void print() const 
    {
        cout<<name //public
        <<": " << group << "\n";
    }
 
};


int main()
{
    Student s;
    s.group = "ce" 
}