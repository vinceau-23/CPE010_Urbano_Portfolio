#include "main.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

const int maxSize = 100;

void displayFunc(int arr[]);

int main() {
    int arr[maxSize];
    int arr2[maxSize];
    int arr3[maxSize];
    srand(time(0));

    for (int i = 0; i < maxSize; i++) {
        arr[i] = rand() % 100;
        arr2[i] = arr[i];
        arr3[i] = arr[i];
    }
    std::cout << "Shell Sort" << std::endl;
    displayFunc(arr);
    std::cout << std::endl;

    shellSort(arr, maxSize);
    displayFunc(arr);
    std::cout << std::endl;

    std::cout << "Merge Sort" << std::endl;
    displayFunc(arr2);
    std::cout << std::endl;
    mergeSort(arr2, 0 , maxSize -1);
    displayFunc(arr2);
    std::cout << std::endl;

    std::cout << "Quick Sort" << std::endl;
    displayFunc(arr3);
    std::cout << std::endl;
    quickSort(arr3, 0 , maxSize -1);
    displayFunc(arr3);
    std::cout << std::endl;
}

void displayFunc(int arr[]) {
    for (int i = 0; i < maxSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
