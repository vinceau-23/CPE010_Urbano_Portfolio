#include "supplementary.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

const int maxSize = 100;

void displayFunc(int arr[]);

int main() {
    int arr[maxSize];
    srand(0);

    for (int i = 0; i < maxSize; i++) {
        arr[i] = rand() % 100;
    }
    displayFunc(arr);
    std::cout << std::endl;
    supplementarySort(arr, 0, maxSize - 1);
    displayFunc(arr);


}

void displayFunc(int arr[]) {
    for (int i = 0; i < maxSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}