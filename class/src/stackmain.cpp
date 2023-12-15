#include"stack.h"
using namespace std;
int main()
{
    stack *s=new arraystack(10);
    s->push(10);
    s->push(9);
    int element;
    s->top(element);
    cout<<"top element is"<<element<<endl;
    s->pop(element);
    cout<<"poped element is"<<element<<endl;
    s->top(element);
    cout<<"top element is"<<element<<endl;
}