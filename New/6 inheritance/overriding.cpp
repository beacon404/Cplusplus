#include <iostream>
using namespace std;


class Person {
    private:
        string name;

    public:
        Person(string name): name(name){}

        void print(){
            cout << "Name: " << name ;
        }
};

class Employe{
     private:
        int salary;

    public:
        Employe(int salary): salary(salary){}

        void print() {
            cout << "salary: " << salary ;
        }

};

class Teacher: public Person, public Employe{

    private:
        int grade;

    public:
        Teacher(int grade, string name, int salary): grade(grade), Person(name), Employe(salary){}

        void print() {
            Person::print();
            Employe::print();
            cout << "grade: " << grade  ;
        }
};


int main(){
    Teacher t1(12,"sanjay",12);
    t1.print();
    t1.Employe::print();
    return 0;
}






























// class Person {
// protected:
//     std::string name;
//     int age;

// public:
//     Person() {}
//     Person(std::string name, int age) : name(name), age(age) {}

//     void print() const {
//         std::cout << "Name: " << name << " Age: " << age << " ";
//     }
// };

// class Employee : public Person {
// protected:
//     std::string employer;
//     double wage;

// public:
//     Employee() {}
//     Employee(std::string name, int age, std::string employer, double wage)
//         : Person(name, age), employer(employer), wage(wage) {}

//     virtual void print() const {
//         Person::print();
//         std::cout << "Employer: " << employer << " Wage: " << wage << " ";
//     }
// };

// class Teacher : public Employee {
// protected:
//     int teachergrade;

// public:
//     Teacher() {}
//     Teacher(std::string name, int age, std::string employer, double wage, int teachergrade)
//         : Employee(name, age, employer, wage), teachergrade(teachergrade) {}

//     void print() const {
//         // Access method 1: Using BaseClass::Function()
//         Employee::print();
//         std::cout << "Teacher's Grade: " << teachergrade;

//         // Access method 2: Without BaseClass:: Prefix
//         // Function(); // This would call Teacher::print() recursively

//         // Access method 3: Using this pointer
//         // this->print(); // This would also call Teacher::print() recursively

//         // Access method 4: Using polymorphism (virtual functions)
//         // print(); // This would call Teacher::print() recursively
//     }
// };

// int main() {
//     Teacher t("ram", 30, "test", 12345, 4);
//     t.print();

//     return 0;
// }
