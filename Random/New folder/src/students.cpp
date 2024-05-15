#include"students.h"
static int i=0;
string student::getname()
{
    return name;
}
void student::setname(string name)
{
    this->name=name;
}
void student::issuedbooks(int book)
{
    this->books[i]=book;
    i++;
    
}
int student::getissuedbooks(int n)
{
    return books[n];
}
int student::getgrade()
{
    return g;
}
void student::setgrade(int m)
{
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