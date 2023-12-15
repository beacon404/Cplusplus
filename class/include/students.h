#pragma once
#include<string>
using namespace std;
int const n=10;
enum Grade{A,A_,B,B_,C,F};
class student
{
    private:
        string name;
        int books[n];
        Grade g;
    public:
        string getname();
        void setname(string);
        void issuedbooks(int n);
        int getissuedbooks(int n);
        int getgrade();
        void setgrade(int m);
};