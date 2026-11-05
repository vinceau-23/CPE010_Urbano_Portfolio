
#ifndef supplementary_h
#define supplementary_h
#include <iostream>



template <typename T>
int partition(T arr[], int low, int high) {
    T pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i+1;
}

template <typename T>
void shellSort(T arr[], int low, int high) {
    int subSize = high - low + 1;
    for (int gap = subSize / 2; gap > 0; gap /= 2) {
        for (int i = low + gap; i <= high; i++) {
            T temp = arr[i];
            int j = i;
            while (j >= low + gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}

template <typename T>
void supplementarySort(T arr[], int left, int right) {
    if (left < right) {
        int pivot = partition(arr, left, right);

        shellSort(arr, left, pivot - 1);
        shellSort(arr, pivot + 1, right);
    }
}


#endif
