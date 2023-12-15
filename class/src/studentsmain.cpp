#include<iostream>
#include<string>
#include"students.h"
using namespace std;
int main()
{
    student s1;
    int n,i,m;
    string names;
    int book;
    cout << "enter the name of student"<< endl;
    cin>> names;
    s1.setname(names);
    cout<< "enter number of books"<< endl;
    cin>> n;
    cout <<"enter books"<< endl;
    for(i=0;i<n;i++)
    {
        cin >> book;
        s1.issuedbooks(book);
    }
    cout<<"enter the marks"<<endl;
    cin>>m;
    s1.setgrade(m);
    cout<< "name " << s1.getname() << endl;
    cout<<"books"<<endl;
    for (i=0;i<n;i++)
    {
        cout << s1.getissuedbooks(i)<<endl;
    }
    cout<<"Grade";
    int b=s1.getgrade();
    switch (b){
     case 0:
     cout<<"A"<< endl;
     break;
     case 1:
     cout<<"A-"<< endl;
     break;
     case 2:
     cout << "B" << endl;
     break;
     case 3:
     cout<<"C"<< endl;
     break;
     case 4:
     cout<<"fail"<< endl;
     break;
     default:
     cout<<"enter valid number";
     break;
    }
    return 0;
}