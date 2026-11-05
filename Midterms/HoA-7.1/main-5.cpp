#include <iostream>
#include <time.h>
#include <cstdlib>
#include "sortingAlgo.h"

const int maxSize = 100;

void displayFunc(int arr[]);

int main() {
    int data[maxSize];
    srand(time(0));

    for (int i = 0; i < maxSize; i++) {
        data[i] = rand()%5 + 1;
    }
    displayFunc(data);

    std::cout << std::endl;
    std::cout << "bubble sort: " << std::endl;
    bubbleSort(data, maxSize);
    displayFunc(data);

    std::cout << std::endl;
    std::cout << "selection sort: " << std::endl;
    selectionSort(data, maxSize);
    displayFunc(data);

    std::cout << std::endl;
    std::cout << "insertion sort: " << std::endl;
    insertionSort(data, maxSize);
    displayFunc(data);

}
void displayFunc(int arr[]) {
    for (int i = 0; i < maxSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}