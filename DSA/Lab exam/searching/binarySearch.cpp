#include <iostream>
using namespace std;
#define size 5;

void binarySearch(int array[], int value)
{
    int low = 0;
    int high = size - 1;
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (array[mid] == value)
        {
            cout << "yes value is there in mid";
            return;
        }
        else if (value < array[mid])
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else
        {
            low = mid + 1;
            mid = (low + high) / 2;
        }
    }
    cout << "no value";
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int value = 10;
    binarySearch(array, value);
}