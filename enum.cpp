#include <iostream>

enum class Grade {
    A, Aminus, Bplus, B, Bminus, Cplus, C, Cminus, D, F
};

class Student {

private:
    Grade grade;
    
public:

    Student(Grade _grade) : grade(_grade) {}
    
    
    Grade getGrade() const {
        return grade;
    }
    
    void setGrade(Grade _grade) {
        grade = _grade;
    }
};

int main() {

    Student student(Grade::B);
    
   
    std::cout << "Student's Grade: ";
    switch (student.getGrade()) {
        case Grade::A: std::cout << "A"; break;
        case Grade::Aminus: std::cout << "A-"; break;
        case Grade::Bplus: std::cout << "B+"; break;
        case Grade::B: std::cout << "B"; break;
        case Grade::Bminus: std::cout << "B-"; break;
        case Grade::Cplus: std::cout << "C+"; break;
        case Grade::C: std::cout << "C"; break;
        case Grade::Cminus: std::cout << "C-"; break;
        case Grade::D: std::cout << "D"; break;
        case Grade::F: std::cout << "F"; break;
    }
    std::cout << std::endl;

    student.setGrade(Grade::Aminus);
    std::cout << "Updated Student's Grade: ";
    switch (student.getGrade()) {
        case Grade::A: std::cout << "A"; break;
        case Grade::Aminus: std::cout << "A-"; break;
        case Grade::Bplus: std::cout << "B+"; break;
    }
    std::cout << std::endl;
    
    return 0;
}
