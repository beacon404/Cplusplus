#include<iostream>
class queue
{
    public:
        virtual ~queue(){}
        virtual bool enqueue(const int element)=0;
        virtual bool dequeue(int &element)=0;
        virtual bool front(int &element) const=0;
        virtual bool rare(int &element)const=0;
};
class arrayqueue:public queue
{
    private:
    int *data;
    int rareindex;
    int frontindex;
    int size;

    public:
    arrayqueue(int size);
    virtual bool enqueue(const int element);
    virtual bool dequeue(int &element);
    virtual bool front(int &element) const;
    virtual bool rare(int &element) const;
};
