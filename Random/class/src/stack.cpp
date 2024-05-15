#include"stack.h"
arraystack::arraystack(int size):size(size), topindex(-1),data(new int[size]) {}
bool arraystack::push(const int element)
{
    if(topindex<size-1)
    {
        topindex++;
        data[topindex]=element;
        return true;
    }
    else
    {
        return false;
    }
}
bool arraystack::pop(int &element)
{
    if (top(element))
    {
        topindex--;
        return true;
    }
    return false;
}
bool arraystack::top(int &element)const
{
    if (topindex<0)
    {
        return false;
    }
    else{
        data[topindex];
        return true;
    }
}