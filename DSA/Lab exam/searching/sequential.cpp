#include <iostream>
using namespace std;
#define maxSize 5

void SequentialSearch(int array[], int data)
{
    for (int i = 0; i < maxSize; i++)
    {
        if (array[i] == data)
        {
            cout << "yes data is in array" << endl;
            return;
        }
    }
    cout << "no data is in array" << endl;
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int data = 4;
    SequentialSearch(array, data);
    return 0;
}