#include <iostream>
using namespace std;

class Stack{
    public:
        virtual ~Stack(){}
        virtual bool push(const int element)=0;
        virtual bool top(int &element) =0;
        virtual bool pop(int &element) =0;
};


class ArrayStack : public Stack {
    private:
        int *data;
        int size;
        int topIndex;
    public:
        ArrayStack(int size): size(size),topIndex(-1),data(new int[3]){}

        bool push (const int element){
            if(topIndex<size-1)
            {
                topIndex++;
                data[topIndex] = element;
                return true;
            }
            else{
                return false;
            }
        }

        bool top(int &element){
            if(topIndex<0){
                return false;
            }
            else{
                element = data[topIndex];
                return true; 
            }
           
        }

        bool pop(int &element)
        {
            if(top(element)){
                topIndex--;
                return true;}
            else{
                return false;
            }
        }

};


int main(){
    Stack *p = new ArrayStack(3);
    p->push(3);
    p->push(4);
    int element;
    if(p->top(element)){
        cout<<"top is "<< element<<endl;
    }else
    {
        cout<<"error";
    }
    if(p->pop(element)){
        cout<<"poped  "<< element<<endl;
    }else
    {
        cout<<"error";
    }
    p->top(element);
    cout<<element;
    delete p;
    return 0;
}


// class Stack {
// public:
//     virtual ~Stack() {}
//     virtual bool push(const int element) = 0;
//     virtual bool pop(int &element) = 0;
//     virtual bool top(int &element) const = 0;
// };

// class ArrayStack : public Stack {
// private:
//     int *data;
//     int topIndex;
//     int size;

// public:
//     ArrayStack(int size) : size(size), topIndex(-1), data(new int[size]) {}

//     virtual bool push(const int element) {
//         if (topIndex < size - 1) {
//             topIndex++;
//             data[topIndex] = element;
//             return true;
//         } else {
//             return false;
//         }
//     }

//     virtual bool top(int &element) const {
//         if (topIndex < 0) {
//             return false;
//         } else {
//             element = data[topIndex];
//             return true;
//         }
//     }

//     virtual bool pop(int &element) {
//         if (top(element)) {
//             topIndex--;
//             return true;
//         } else {
//             return false;
//         }
//     }
// };

// int main() {
//     Stack *s = new ArrayStack(10);

//     s->push(10);
//     s->push(9);

//     int element;

//     if (s->top(element)) {
//         std::cout << "Top element is " << element << std::endl;
//     } else {
//         std::cout << "Stack is empty." << std::endl;
//     }

//     if (s->pop(element)) {
//         std::cout << "Popped element is " << element << std::endl;
//     } else {
//         std::cout << "Stack is empty. Cannot pop." << std::endl;
//     }

//     delete s; // Don't forget to delete the dynamically allocated object
//     return 0;
// }
