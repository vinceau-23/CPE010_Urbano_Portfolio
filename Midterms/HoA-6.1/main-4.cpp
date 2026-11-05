#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "searchingalgo.h"
#include "node.h"

const int max_size = 50;

int main() {


    //generate
    int dataset[max_size];
    srand(time(0));

    for (int i = 0; i < max_size; i++) {
        dataset[i] = rand();
    }


    std::sort(dataset, dataset + max_size);

    std::cout << "Sorted Array:" << std::endl;
    for (int i = 0; i < max_size; i++) {
        std::cout << dataset[i] << " ";
    }
    for (int i = 0; i < max_size; i++) {
        std::cout << dataset[i] << " "<< std::endl;
    }
    std::cout<<std::endl;
    int userInput;
    std::cout << "What Number to search? ";
    std::cin >> userInput;
    linearSearchArr(max_size, userInput, dataset);
    std::cout<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Array list result is ";
    binarySearchAR(max_size, userInput, dataset);


    //create a linklist:
    Node<char>* name1 = newNode('V');
    Node<char>* name2 = newNode('I');
    Node<char>* name3 = newNode('N');
    Node<char>* name4 = newNode('C');
    Node<char>* name5 = newNode('E');

    name1->next = name2;
    name2->next = name3;
    name3->next = name4;
    name4->next = name5;

    std::cout<< "Linked list result is ";
    linearSearchLL(name1, 'N');
    std::cout<<std::endl;

    Node<char>* name6 = newNode('C');
    Node<char>* name7 = newNode('E');
    Node<char>* name8 = newNode('I');
    Node<char>* name9 = newNode('N');
    Node<char>* name10 = newNode('V');

    name6->next = name7;
    name7->next = name8;
    name8->next = name9;
    name9->next = name10;

    std::cout<<"Linked list result is ";
    binarySearchLL(name6, 'C');



}