#include <iostream>

using namespace std;
#define maxSize 10

void stack_divide_push_pop(int dec, int *stack)
{
    int top = -1, i;
    int count = 0;
    while (dec != 0)
    {
        int bit = dec % 2;
        dec = dec / 2;
        top++;
        stack[top] = bit;
        count++;
    }

    cout << "binary is ";
    for (i = 0; i < count; i++)
    {
        cout << stack[top] << " ";
        top--;
    }
    cout << endl;
}

int main()
{
    int dec = 12;
    int *stack = new int[maxSize];
    stack_divide_push_pop(dec, stack);
}