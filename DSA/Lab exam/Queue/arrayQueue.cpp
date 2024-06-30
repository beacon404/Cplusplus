#include <iostream>

using namespace std;

class Iqueue
{
public:
    virtual ~Iqueue() {}
    virtual void enqueue(int element) = 0;
    virtual void dequeue() = 0;
    virtual void front() = 0;
    virtual void rear() = 0;
};

class queue : public Iqueue
{
private:
    int size;
    int *data;
    int topindex;
    int bottomindex;

public:
    queue(int size) : size(size), topindex(-1), bottomindex(0), data(new int[size]) {}
    void enqueue(int element);
    void dequeue();
    bool isempty();
    void rear();
    void front();
};

bool queue::isempty()
{
    return topindex < bottomindex;
}

void queue::enqueue(int element)
{
    if (isempty())
    {
        data[bottomindex] = element;
        topindex++;
    }
    else
    {
        topindex++;
        data[topindex] = element;
    }
}
void queue::dequeue()
{
    if (isempty())
    {
        cout << "empty";
    }
    else if (topindex >= bottomindex)
    {
        bottomindex++;
    }
}
void queue::front()
{
    if (isempty())
    {
        cout << "empty";
    }
    else if (topindex >= bottomindex)
    {
        cout << data[bottomindex] << " : First" << endl;
    }
}
void queue::rear()
{
    if (isempty())
    {
        cout << "empty";
    }
    else if (topindex >= bottomindex)
    {
        cout << data[topindex] << " : last" << endl;
    }
}

int main()
{
    Iqueue *s = new queue(5);
    try
    {
        s->enqueue(3);
        s->front();
        s->enqueue(4);
        s->front();
        s->enqueue(8);
        s->enqueue(1);
        s->dequeue();
        s->rear();
        s->front();
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }

    delete s; // Don't forget to delete the allocated object

    return 0;
}

// class Iqueue
// {
// public:
//     virtual ~Iqueue() {}
//     virtual void insert(int element) = 0;
//     virtual void remove() = 0;
//     virtual void front() = 0;
//     virtual void end() = 0;
// };

// class Queue : public Iqueue
// {
// private:
//     int size;
//     int *data;
//     int topindex;
//     int bottomindex;

// public:
//     Queue(int size) : size(size), topindex(-1), bottomindex(0), data(new int[size]) {}

//     void insert(int element)
//     {
//         if (topindex < size - 1)
//         {
//             topindex++;
//             data[topindex] = element;
//             cout << "Inserted " << element << endl;
//         }
//         else
//         {
//             throw "Queue is full";
//         }
//     }

//     void remove()
//     {
//         if (bottomindex <= topindex)
//         {
//             cout << "Removed " << data[bottomindex] << endl;
//             bottomindex++;
//         }
//         else
//         {
//             throw "Queue is empty";
//         }
//     }

//     void front()
//     {
//         if (bottomindex <= topindex)
//         {
//             cout << "Front: " << data[bottomindex] << endl;
//         }
//         else
//         {
//             throw "Queue is empty";
//         }
//     }

//     void end()
//     {
//         if (bottomindex <= topindex)
//         {
//             cout << "End: " << data[topindex] << endl;
//         }
//         else
//         {
//             throw "Queue is empty";
//         }
//     }
// };

// int main()
// {
//     Iqueue *s = new Queue(4);

//     try
//     {
//         s->insert(3);
//         s->insert(4);
//         s->insert(8);
//         s->insert(1);
//         s->remove();
//         s->end();
//         s->front();
//     }
//     catch (const char *msg)
//     {
//         cerr << msg << endl;
//     }

//     delete s; // Don't forget to delete the allocated object

//     return 0;
// }
