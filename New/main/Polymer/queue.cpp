#include<iostream>
using namespace std;

class IQueue{
    public:
      virtual ~IQueue(){}
      virtual void insert(int element) = 0;
      virtual void remove() = 0;
      virtual void front() = 0;
      virtual void rear() = 0;
};

class ArrayQueue : public IQueue{
    private:
      int *data;
      int topIndex;
      int bottomIndex;
      int size;

    public:
      ArrayQueue(int size): size(size),topIndex(-1),bottomIndex(0),data(new int[size]){}

      void insert(int element){
        if(topIndex < size-1){
            topIndex++;
            data[topIndex] = element;
            cout<<element<<" is inserted"<<endl;
        }
        else{
            cout<<element<<" cannot be inserted. Queue is full"<<endl;
        }
      }

      void remove(){
        if(bottomIndex <= topIndex){
            cout<<data[bottomIndex]<<" is removed"<<endl;
            bottomIndex++;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
      }

      void front(){
        if(topIndex>=bottomIndex){
            cout<<"The front element is "<<data[bottomIndex]<<endl;
        }
        else{
            cout<<"Queue is empty"<<endl;
        }
      }
      
      void rear(){
        if(topIndex>=bottomIndex){
            cout<<"The back element is "<<data[topIndex]<<endl;
        }
        else{
            cout<<"Queue is empty"<<endl;
        }
      }
};

    int main(){
        IQueue *q = new ArrayQueue(3);
        q->insert(1);
        q->insert(2);
        q->insert(3);
        q->front();
        q->rear();
        q->remove();
        q->remove();
        q->front();
        q->rear();

    }