#include "main.h"
#include <iostream>

int main() {

    BinaryTree<char>* root = new BinaryTree<char>('V');
    std::cout <<"The root is: " << root->getRootVal() << std::endl;


    //creating the child of node V
    root->insertLeft('B');
    std::cout<<"The left child is: " << root->getLeftChild()->getRootVal() << std::endl;

    root->insertRight('C');
    std::cout<<"The right child is: " << root->getRightChild()->getRootVal() << std::endl;

    root->getLeftChild()->insertLeft('D');
    std::cout <<"The left child of B is: " << root->getLeftChild()->getLeftChild()->getRootVal() << std::endl;
    root->getLeftChild()->insertRight('E');
    std::cout <<"The right child of B is: " << root->getLeftChild()->getRightChild()->getRootVal() << std::endl;

    root->getRightChild()->insertLeft('F');
    std::cout <<"The left child of C is: " << root->getRightChild()->getLeftChild()->getRootVal() << std::endl;
    root->getRightChild()->insertRight('G');
    std::cout <<"The right child of C is: " << root->getRightChild()->getRightChild()->getRootVal() << std::endl;

    return 0;
}
