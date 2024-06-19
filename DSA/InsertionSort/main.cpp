#include <iostream>
#include <iomanip>
using namespace std;

void insertionSort(int array[], int size);
void DisplayInstantSort(int array[], int size, int sortedIndex, int newElementIndex);

int main() {
    int array[6] = {1, 4, 7, 3, 2, 6};
    int size = sizeof(array) / sizeof(array[0]);
    insertionSort(array, size);
    return 0;
}

void insertionSort(int array[], int size) {
    int i, j, temp, hole;
    for (i = 0; i < size; i++) {
        temp = array[i];
        hole = i;
        while (hole > 0 && array[hole - 1] > temp) {
            array[hole] = array[hole - 1];
            hole -= 1;
        }
        array[hole] = temp;
        DisplayInstantSort(array, size, i, hole);
    }
}

void DisplayInstantSort(int array[], int size, int sortedIndex, int newElementIndex) {
    // Display the top border
    for (int i = 0; i < size; i++) {
        cout << "\033[1;34m+----\033[0m"; // Blue border
    }
    cout << "\033[1;34m+\033[0m" << endl;

    // Display the array elements with partitions
    for (int i = 0; i < size; i++) {
        if (i <= sortedIndex) {
            if (i == newElementIndex) {
                cout << "| \033[1;32m" << setw(2) << array[i] << "\033[0m "; // Bold and green for new sorted element
            } else {
                cout << "| \033[32m" << setw(2) << array[i] << "\033[0m "; // Green for sorted elements
            }
        } else {
            cout << "| \033[31m" << setw(2) << array[i] << "\033[0m "; // Red for unsorted elements
        }
    }
    cout << "|" << endl;

    // Display the bottom border
    for (int i = 0; i < size; i++) {
        if (i == newElementIndex) {
            cout << "\033[1;34m+====\033[0m"; // Blue bold border for partition
        } else {
            cout << "\033[1;34m+----\033[0m"; // Blue border
        }
    }
    cout << "\033[1;34m+\033[0m" << endl;

    // Display the partition indicator
    cout << "\033[32mSorted\033[0m";
    for (int i = 0; i < sortedIndex; i++) {
        cout << "     ";
    }
    cout << "\033[1;34m|\033[1;0m \033[31mUnsorted\033[0m" << endl; // Blue separator and red unsorted label

    cout << "Element " << array[newElementIndex] << " sorted into position " << newElementIndex << endl;

    cout << endl;
}
