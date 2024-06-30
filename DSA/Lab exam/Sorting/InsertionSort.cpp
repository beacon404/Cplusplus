#include <iostream>
// #include <swap>
using namespace std;
#define maxSize 5

void InsertionSort(int array[])
{
    int hole;
    int temp;
    for (int i = 1; i < maxSize; i++)
    {
        temp = array[i];
        hole = i;
        while (hole > 0 && array[hole -1] > temp)
        {
            array[hole] = array[hole - 1];
            hole--;
        }
        array[hole] = temp;
    }
}

void display(int array[])
{
    cout << "sorted: ";
    for (int i = 0; i < maxSize; i++)
    {
        cout << array[i];
    }
}

int main()
{
    int array[maxSize] = {1, 5, 3, 4, 7};
    InsertionSort(array);
    display(array);
    return 0;
}
