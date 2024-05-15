#include"queue.h"
arrayqueue::arrayqueue(int size):size(size), frontindex(-1),rareindex(-1),data(new int[size]) {}
bool arrayqueue::enqueue(const int element)
{
    if(rareindex<size-1)
    {
        rareindex++;
        data[rareindex]=element;
        return true;
    }
    else
    {
        return false;
    }
}
bool arrayqueue::dequeue(int &element)
{
    if (rare(element))
    {
        frontindex++;
        return true;
    }
    else{

        return false;
    }
}
bool arrayqueue::rare(int &element)const
{
    if (rareindex>size-1)
    {
        return false;
    }
    else{
        data[rareindex];
        return true;
    }
}
bool arrayqueue::front(int &element)const
{
    if (frontindex<0)
    {
        return false;
    }
    else{
        data[frontindex];
        return true;
    }
}
