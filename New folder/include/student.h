#include <iostream>
#include<string>
using namespace std;
enum Grade{A,A_,B,B_,C,F};
class student{
    private:
        string name;
        int books[10];
        Grade g;
    public:
        void getname();
        void setname();
        int issuedbooks(int n);
        void getissuedbooks(int n);
        int getgrade();
        void setgrade();

};