

#ifndef SEARCHINGALGO_H
#define SEARCHINGALGO_H
#include "node.h"

template <typename T>
void linearSearchArr(int arrSize,T dataFind,T list[]) {


    for (int i = 0; i < arrSize; i++) {
        if (dataFind == list[i]) {
            std::cout << "Searching is successful" << std::endl;
            return;
        }
    }
    std::cout << "Searching is Unsuccessful" << std::endl;
}

template <typename T>
void linearSearchLL(Node<T>* head,T dataFind) {
   while (head != nullptr) {
       if (dataFind == head->data) {
           std::cout << "Searching is successful" << std::endl;
           return;
       }
       head = head->next;
   }
    std::cout << "Searching is Unsuccessful" << std::endl;
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

    while (low <= up) {
        middle = low + (up - low) / 2;

        if (dataFind == list[middle]) {
            std::cout << "Searching is successful" << std::endl;
            return;
        }
        else if (dataFind < list[middle]) {
            up = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }
    std::cout << "Searching is Unsuccessful" << std::endl;
}

#endif
