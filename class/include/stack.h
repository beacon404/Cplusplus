#include<iostream>
class stack
{
    public:
        virtual ~stack(){}
        virtual bool push(const int element)=0;
        virtual bool pop(int &element)=0;
        virtual bool top(int &element) const=0;
};
class arraystack:public stack
{
    private:
    int *data;
    int topindex;
    int size;

    public:
    arraystack(int size);
    virtual bool push(const int element);
    virtual bool pop(int &element);
    virtual bool top(int &element) const;
};
