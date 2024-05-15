#include"enum.h"
using namespace std;
int student::getgrade()
{
    return g;
}
void student::setgrade(int a)
{
    if(a>=80)
    g=Grade(0);
    else if(a>=70)
    g=Grade(1);
    else if(a>=60)
    g=Grade(2);
    else
    g=Grade(3);
}
