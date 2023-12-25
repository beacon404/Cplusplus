#include <iostream>

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                // Swap using a temporary variable
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int intArray[] = {64, 25, 12, 22, 11};
    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);

    double doubleArray[] = {5.5, 4.4, 3.3, 2.2, 1.1};
    int doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Original integer array: ";
    printArray(intArray, intArraySize);

    bubbleSort(intArray, intArraySize);

    std::cout << "Sorted integer array: ";
    printArray(intArray, intArraySize);

    std::cout << "\nOriginal double array: ";
    printArray(doubleArray, doubleArraySize);

    bubbleSort(doubleArray, doubleArraySize);

    std::cout << "Sorted double array: ";
    printArray(doubleArray, doubleArraySize);

    return 0;
}
