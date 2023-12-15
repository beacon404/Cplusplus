#include"queue.h"
using namespace std;
int main()
{
    queue *s=new arrayqueue(10);
    s->enqueue(10);
    s->enqueue(9);
    int element;
    s->rare(element);
    cout<<"last element is"<<element<<endl;
    s->dequeue(element);
    cout<<"dequeued element is"<<element<<endl;
    s->front(element);
    cout<<"front element is"<<element<<endl;
}