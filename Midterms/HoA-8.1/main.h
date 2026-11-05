//
// Created by Vince Urbano on 9/15/2026.
//

#ifndef sortingAlgo2
#define sortingAlgo2
#include <algorithm>
#include <iostream>

template <typename T>
void shellSort(T arr[], int arrSize) {
    for (int gap = arrSize / 2; gap > 0; gap = gap / 2) {
        for (int i = gap; i < arrSize; i++) {
            T temp = arr[i];
            int j = i;

            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            arr[j] = temp;
        }
    }
}

template <typename T>
void merge(T arr[], int left, int mid, int right) {
    int num1 = mid - left + 1;
    int num2 = right - mid;

    T* Arr = new T[num1];
    T* Arr2 = new T[num2];

    for (int i = 0; i < num1; i++) {
        Arr[i] = arr[left + i];
    }
    for (int j = 0; j < num2; j++) {
        Arr2[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < num1 && j < num2) {
        if (Arr[i] <= Arr2[j]) {
            arr[k] = Arr[i];
            i++;
        } else {
            arr[k] = Arr2[j];
            j++;
        }
        k++;
    }

    while (i < num1) {
        arr[k] = Arr[i];
        k++;
        i++;
    }

    while (j < num2) {
        arr[k] = Arr2[j];
        k++;
        j++;
    }

    delete[] Arr;
    delete[] Arr2;
}

template <typename T>
void mergeSort(T arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
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
void quickSort(T arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot -1);
        quickSort(arr, pivot + 1, high);
    }
}


#endif
