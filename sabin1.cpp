#include <iostream>
#include <string>

using namespace std;

class Person{

    long id;

    public:
        string name;
        string getName() const 
        {return name;}
        void setID(int id) {
            this->id = id;
        }
};

class Student:public Person
{
private:
std::string group;
std::string batch;
public:
void print() const 
{
    std::cout << name << ":" << group << std::endl;
}
};

int main(){
    Person p1;
    p1.setID(12);
    p1.name = "Sabin Ranabhat";
    Student s1;
    s1.setID(69);
    s1.name = "Gangs";
    s1.print();
    return 0;

}