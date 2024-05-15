#include<iostream>
using namespace std;


class Stack {
  public:
  virtual ~Stack(){}
  virtual void push(int element){}
  virtual void pop(){}
  virtual void top(){}
};


class ArrayStack: public Stack{
  private:
  int size;
  int *data;
  int topIndex;

  public:

  ArrayStack(int size): size(size), topIndex(-1), data(new int[size]){}

  void push(int element) {
    if(topIndex<size-1)
    {
      data[topIndex]= element;
      topIndex++;


    }
    else
    {
      throw "stack is full";
    }
  } 


    void pop() {
    if(topIndex>=0)
    {
      cout <<
      --topIndex;


    }
    else
    {
      throw "stack is full";
    }
  } 

};

int main () {
  Stack *p = new ArrayStack(4);

}




// class Stack{
//     public:
//       virtual ~Stack(){}
//       virtual void push(int element){}
//       virtual void pop(){}
//       virtual void top(){}
// };

// class arrayStack: public Stack{
//     private:
//       int *data;
//       int topIndex;
//       int size;

//     public:
//       arrayStack(int size):size(size),topIndex(-1),data(new int[size]){}

//       void push(int  element){
//         if(topIndex<size-1){
//             topIndex++;
//             data[topIndex] = element;
//             cout<<element<<" is pushed"<<endl;
//         }
//         else{
//             throw " cannot be pushed. Stack is full";
//         }
//       }

//       void pop(){
//         if(topIndex>=0){
//             cout<<data[topIndex]<<" is popped"<<endl;
//             --topIndex;
//         }
        
//         else
//         throw "Stack is empty";

//       }

//       void top(){
//         if(topIndex>=0){
//             cout<<"The top element is ";
//             cout<< data[topIndex]<<endl;
//         }
        
//         else{
//         throw"Stack is empty";
//       }
//       }
// };

// int main(){
//     Stack *s = new arrayStack(3);
//     try{
//     s->push(1);
//     s->push(2);
//     s->push(3);
    
//     s->pop();
    
//     s->top();
  
//     s->top();
//     }
//     catch(const char* msg){
//       cerr<<"Error : "<<msg<<"\n";
//     }
// }