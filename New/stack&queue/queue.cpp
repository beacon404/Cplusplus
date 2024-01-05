#include<iostream>

using namespace std;



class Iqueue{
    public:
    virtual ~Iqueue(){}
    virtual void insert(int element){} 
    virtual void remove(){} 
    virtual void front(){} 
    virtual void end(){} 
};


class Queue: public Iqueue{
    private:
    int size;
    int *data;
    int topindex;
    int bottomindex;


    public:
    Queue(int size):size(size),topindex(-1),bottomindex(0),data (new int[size]){}
    virtual void insert(int element){
        if(topindex<size-1)
        {
            topindex++;
            data[topindex]= element;
            cout<< "inserted" << endl; 
        }
        else{
            throw "queue is full";
        }
    } 

    virtual void remove(){
        if(bottomindex<=topindex){
            bottomindex++;
            cout<< "removed" << endl;
        }
         else{
            throw "queue is empty";
        }
    } 
    virtual void front(){
         if(bottomindex<=topindex){
            cout<< data[bottomindex]<< "removed" << endl;
        }
         else{
            throw "queue is empty";
        }
    } 
    virtual void end(){
        if(bottomindex<=topindex){
            cout<< data[topindex]<< "removed" << endl;
        }
         else{
            throw "queue is empty";
        }
    } 
};

int main () {
    Iqueue *s = new Queue(4);

    try{
        s->insert(3);
        s->insert(4);
        s->insert(8);
        s->insert(1);
        s->remove();
        s->end();
        s->front();


    }
    catch(const char *msg)
    {
        cerr<< msg<< endl;
    }
}