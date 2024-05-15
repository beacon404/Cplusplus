#include<string>
#include<iostream>
using namespace std; 
#include"student.h"
void student::setname()
{
    cout<<"Name of students" << endl;
    fflush(stdin);
    getline(cin,name);
}
void student::getname()
{
    cout<< name<<endl;
}
int student::issuedbooks(int n)
{
    cout<<"enter book code:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>books[i];
    }
}
void student::getissuedbooks(int n){
    cout<<"issued books are:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<< books[i]<<endl;
    }
}
void student::setgrade()
{
    cout<<"enter the marks"<< endl;
    int m;
    cin>>m;
    if(m>=80)
    {
        g=Grade(0);
    }
    else if(m<80 && m>=75)
    {
        g=Grade(1);
    }
     else if(m<75 && m>=70)
    {
        g=Grade(2);
    }
    else if(m<70 && m>65)
    {
        g=Grade(3);
    }
    else{
        g=Grade(4);
    }
}
int student::getgrade()
{
    return g;
}