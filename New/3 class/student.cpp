#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    long books;
public:
    // Student(string name, long books): name(name),books(books){};
    void getName(){
        cout << this->name << endl;
    }

    void setName(string name){
        this->name = name;
    }
    
    void issueName(long books){
        this->books=books;


    }
    
    void getIssuedName(){
        cout<< this->books<<endl;


    }
    
};


int main() {
    Student s1;
    s1.getName();
    s1.setName("sanjay");
    s1.getName();
    s1.issueName(123);
    s1.getIssuedName();
    return 0;

}
