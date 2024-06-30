#include <iostream>
using namespace std;

class Stack
{
public:
    virtual ~Stack() {}
    virtual bool isempty() = 0;
    virtual void push(const int element) = 0;
    virtual void top() = 0;
    virtual void pop() = 0;
};

class ArrayStack : public Stack
{
private:
    int *data;
    int size;
    int topIndex;

public:
    ArrayStack(int size) : size(size), topIndex(-1), data(new int[size]) {}

    bool isempty()
    {

        return topIndex < 0;
    }

    void push(int element)
    {

        if (topIndex <= size - 1)
        {
            topIndex++;
            data[topIndex] = element;
        }
        else
        {
            cout << "stack is full" << endl;
        }
    }

    void top()
    {
        if (isempty())
        {
            cout << "is empty";
        }
        else if (topIndex <= size - 1)
        {
            cout << data[topIndex] << " :top" << endl;
        }
    }

    void pop()
    {
        if (isempty())
        {
            cout << "empty" << endl;
        }
        else
        {
            cout << data[topIndex] << " :Poped" << endl;
            topIndex--;
        }
    }
};

int main()
{
    Stack *p = new ArrayStack(3);
    p->pop();
    p->push(3);
    p->pop();
    p->pop();
    p->push(4);
    p->push(5);

    p->top();
    p->pop();

    p->top();

    delete p;
    return 0;
}