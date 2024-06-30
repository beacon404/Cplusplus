#include <iostream>
using namespace std;
#define maxSize 5

void display(int lst[])
{
    int i;
    cout << "\nReverse: \n";
    for (i = 0; i < 5; i++)
    {
        cout << lst[i] << " ";
    };
    cout << endl;
}

void Stack_Push_Pop(int rev[], int lst[])
{
    int i;
    int top = -1;

    // Push
    for (i = 0; i < 5; i++)
    {
        top++;
        rev[top] = lst[i];
    }

    // Pop
    for (i = 0; i < 5; i++)
    {
        lst[i] = rev[top];
        top--;
    }
}

int main()
{
    int lst[maxSize] = {1, 2, 3, 4, 5};
    int rev[maxSize];
    Stack_Push_Pop(rev, lst);
    display(lst);
}
