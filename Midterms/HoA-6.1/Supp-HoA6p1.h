//
// Created by Vince Urbano on 8/27/2026.
//

#ifndef SUPP_SEARCHINGALGO_SUPP_HOA6P1_H
#define SUPP_SEARCHINGALGO_SUPP_HOA6P1_H



#include "Supp-Node.h"

template <typename T>
void linearSearchArr(int arrSize,T dataFind, const T list[]) {
    int num = 0;
    num++;

    for (int i = 0; i < arrSize; i++) {
        num++;
        if (dataFind == list[i]) {
            std::cout<<num << std::endl;
            return;
        }
    }
    std::cout << num << std::endl;
}

template <typename T>
void linearSearchLL(Node<T>* head,T dataFind) {
    int num = 0;

   while (head != nullptr) {
       num++;
       if (dataFind == head->data) {
           std::cout << num << std::endl;
           return;
       }
       head = head->next;
   }
    std::cout << num << std::endl;
}

template <typename T>
Node<T>* getMiddle(Node<T>* start, Node<T>* last) {
    Node<T>* slow = start;
    Node<T>* fast = start;
    while (fast != last && fast->next != last) {
        // move slow one stp
        slow = slow->next;
        // move fast two steps
        fast = fast->next->next;
    }
    return slow;
}

template <typename T>
void binarySearchLL(Node<T>* head,T dataFind) {
    Node<T>* start = head;
    Node<T>* last = nullptr;

    while (start != last) {
        Node<T>* middle = getMiddle(start, last);

        if (middle->data == dataFind) {
            std::cout << "Searching is successful" << std::endl;
            return;
        }

        if (middle->data == dataFind) {
            std::cout << "Searching is successful" << std::endl;
            return;
        }else if (middle->data < dataFind) {
            start = middle->next;
        }else last = middle;
    }
    std::cout << "Searching is Unsuccessful" << std::endl;

}
template <typename T>
void binarySearchAR(int arrSize, T dataFind, const T list[]) {
    int low = 0, up = arrSize - 1, middle;
    int num = 0;

    while (low <= up) {
        num++;
        middle = low + (up - low) / 2;

        if (dataFind == list[middle]) {
            std::cout << "Searching is successful. Total Comparison: " << num << std::endl;
            return;
        }
        else if (dataFind < list[middle]) {
            up = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }
    std::cout << "Searching is Unsuccessful. Total comparisons: " << num << std::endl;
}
template <typename T>
void binarySearchDiagram(int arrSize, T dataFind, const T list[]) {
    int low = 0, up = arrSize - 1, middle;
    int num = 1;

    while (low <= up) {
        middle = low + (up - low) / 2;

        std::cout << "Iteration " << num++ << ": "
                  << "low=" << low << ", up=" << up
                  << ", middle=" << middle << ", Value=" << list[middle] << "\n";

        if (dataFind == list[middle]) {
            std::cout << "Searching is successful\n";
            return;
        }
        else if (dataFind < list[middle]) {
            up = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }
    std::cout << "Searching is Unsuccessful\n";
}

template <typename T>
void binarySearchRecursive(const T list[], T dataFind, int low, int up) {
    if (low > up) {
        std::cout << "Searching is Unsuccessful\n";
        return;
    }

    int middle = low + (up - low) / 2;

    if (dataFind == list[middle]) {
        std::cout << "Searching is successful at  " << middle << "\n";
        return;
    }
    else if (dataFind < list[middle]) {
        binarySearchRecursive(list, dataFind, low, middle - 1);
    }
    else {
        binarySearchRecursive(list, dataFind, middle + 1, up);
    }
}

#endif //SUPP_SEARCHINGALGO_SUPP_HOA6P1_H
