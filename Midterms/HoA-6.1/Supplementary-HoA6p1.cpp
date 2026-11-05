#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "Supp-HoA6p1.h"
#include "Supp-Node.h"

const int max_size = 50;

int main() {
    int problemList[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int listSize = 10;
    int value = 18;

    int sortedList[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    int listSize2 = 10;
    int value2 = 8;

    int initialLow = 0;
    int initialUp = listSize - 1;

    std::cout<< "Linear Search" <<std::endl;
    linearSearchArr(listSize, value, problemList);
    std::cout << std::endl;

    Node<int>* head = newNode(15);
    head->next = newNode(18);
    head->next->next = newNode(2);
    head->next->next->next = newNode(19);
    head->next->next->next->next = newNode(18);
    head->next->next->next->next->next = newNode(0);
    head->next->next->next->next->next->next = newNode(8);
    head->next->next->next->next->next->next->next = newNode(14);
    head->next->next->next->next->next->next->next->next = newNode(19);
    head->next->next->next->next->next->next->next->next->next = newNode(14);

    std::cout << "Binary Search" << std::endl;
    linearSearchLL(head, value);

    std::cout << std::endl;
    binarySearchDiagram(listSize, value2, sortedList);
    binarySearchRecursive(sortedList, value2, initialLow, initialUp);




    return 0;
}
