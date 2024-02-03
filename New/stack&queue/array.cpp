#include<iostream>
using namespace std;


class Stack {
    public:
    virtual ~Stack() {}
    virtual void push(int element) {}
    virtual void pop() {}
    virtual void top() {}
};


class arrayStack: public Stack {

    private:
    int *data;
    int topIndex;
    int size;

    public:

    arrayStack(int size):size(size),topIndex(-1),data(new int[size]){}
    virtual void push(int element) {
        if(topIndex<size-1)
        {
            topIndex++;
            data[topIndex] = element;
            cout<<"inserted"<<endl;
        }
        else
        throw("stack is full");
    }

    virtual void pop() {
        if(topIndex>=0)
        {
            cout<<data[topIndex]<<" is poped"<<endl;
            --topIndex;  
        }
        else
        throw("stack is empty");
    }
    virtual void top() {
        if(topIndex>=0)
        {
            cout<<data[topIndex]<<" is top element"<<endl; 
        }
        else
        throw("stack is empty");
    }



};


int main() {
    Stack *s;
    s= new arrayStack(3);
    try
    {
       
        s->push(1);
    s->push(2);
    s->push(3);
    s->pop();
    s->top();
    }
    catch(const char *msg)
    {
        cerr << msg << endl;
    }
    
}