#include <string>
#include <iostream>
using namespace std;

int const n = 10;
enum Grade { A, A_, B, B_, C, F };

class student {
private:
    string name;
    int books[n];
    Grade g;

public:
    void setname(string);
    string getname();

    void issuedbooks(int n);
    void getissuedbooks(int n);

    void setgrade();
    Grade getgrade();
};

void student::setname(string studentName) {
    name = studentName;
}

string student::getname() {
    return name;
}

void student::issuedbooks(int numBooks) {
    cout << "Enter book codes:" << endl;
    for (int i = 0; i < numBooks; i++) {
        cin >> books[i];
    }
}

void student::getissuedbooks(int numBooks) {
    cout << "Issued books are:" << endl;
    for (int i = 0; i < numBooks; i++) {
        cout << books[i] << endl;
    }
}

void student::setgrade() {
    cout << "Enter the marks:" << endl;
    int marks;
    cin >> marks;
    if (marks >= 80) {
        g = A;
    } else if (marks >= 75) {
        g = A_;
    } else if (marks >= 70) {
        g = B;
    } else if (marks >= 65) {
        g = B_;
    } else {
        g = F;
    }
}

Grade student::getgrade() {
    return g;
}

int main() {
    student s1;

    s1.setname("John Doe");
    cout << "Student Name: " << s1.getname() << endl;

    s1.issuedbooks(3);
    s1.getissuedbooks(3);

    s1.setgrade();
    cout << "Grade: " << s1.getgrade() << endl;

    return 0;
}
