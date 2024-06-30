// for n-1 space

#include <iostream>
using namespace std;

class Cqueue
{
public:
    virtual ~Cqueue(){};
    virtual bool isempty() = 0;
    virtual bool isFull() = 0;
    virtual void enqueue(int element) = 0;
    virtual void dequeue() = 0;
    virtual void front() = 0;
    virtual void rear() = 0;
};

class queue : public Cqueue
{
private:
    int size;
    int *data;
    int element;
    int topIndex;
    int bottomIndex;

public:
    queue(int size) : size(size), bottomIndex(0), topIndex(0), data(new int[size]){};
    bool isempty();
    bool isFull();
    void enqueue(int element);
    void dequeue();
    void front();
    void rear();
};

bool queue::isempty()
{
    return topIndex == bottomIndex;
}
bool queue::isFull()
{
    return ((topIndex + 1) % size) == bottomIndex;
}

void queue::enqueue(int element)
{
    if (isFull())
    {
        cout << "full" << endl;
    }
    else
    {
        topIndex = (topIndex + 1) % size;
        data[topIndex] = element;
    }
}

void queue::dequeue()
{
    if (isempty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << data[bottomIndex] << " : dequeue " << endl;
        bottomIndex = (bottomIndex + 1) % size;
    }
}

void queue::front()
{
    if (isempty())
    {
        cout << "empty" << endl;
    }
    else
    {
        bottomIndex = (bottomIndex + 1) % size;
        cout << data[bottomIndex] << " : front " << endl;
    }
}

void queue::rear()
{
    if (isempty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << data[topIndex] << " : rear " << endl;
    }
}

int main()
{
    Cqueue *s = new queue(5);

    s->enqueue(3);
    s->rear();
    s->enqueue(2);
    s->front();
    s->rear();
    s->dequeue();
    s->enqueue(1);
    s->rear();
    s->dequeue();
    s->enqueue(6);
    s->front();
    s->enqueue(2);
    s->enqueue(2);
    s->enqueue(2);
    s->enqueue(2);
    s->enqueue(2);
}