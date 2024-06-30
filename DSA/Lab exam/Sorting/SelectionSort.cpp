#include <iostream>
using namespace std;
#define maxSize 5

void selectionSort(int array[])
{
    int min_index = 0;
    for (int i = 0; i < maxSize; i++)
    {
        for (int j = i + 1; j < maxSize; j++)
        {
            if (array[j] < array[i])
            {
                min_index = j;
            }
        }
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}

void display(int array[])
{
    for (int i = 0; i < maxSize; i++)
    {
        cout << array[i];
        cout << " ";
    }
}

int main()
{
    int array[maxSize] = {1, 4, 5, 3, 6};
    selectionSort(array);
    display(array);
    return 0;
}
