#include <iostream>
using namespace std;
#define maxSize 5

int Partition(int array[], int low, int high)
{
    int pivot = array[low];
    int i = low;
    int j = high + 1;
    while (i < j)
    {
        do
        {
            j--;
        } while (array[j] > pivot);

        do
        {
            i++;
        } while (array[i] < pivot);
        if (i < j)
        {
            swap(array[i], array[j]);
        }
    }
    swap(array[j], array[low]);
    return j;
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot = Partition(array, low, high);
        quickSort(array, low, pivot - 1);
        quickSort(array, pivot + 1, high);
    }
}

void display(int array[])
{
    for (int i = 0; i < maxSize; i++)
    {
        cout << array[i];
    }
}

int main()
{
    int array[maxSize] = {1, 3, 2, 9, 8};
    int low = 0, high = maxSize - 1;
    quickSort(array, low, high);
    display(array);
    return 0;
}