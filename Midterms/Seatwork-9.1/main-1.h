#ifndef tree_h
#define tree_h
#include <iostream>

template <typename T>
class BinaryTree {
    private:
    //key
    T key;
    //left child and right child
    BinaryTree<T>* leftChild;
    BinaryTree<T>* rightChild;

    public:

    //constructor
    BinaryTree<T>(T rootObj);
    //insert children left and right
    void insertLeft(T newNode);
    void insertRight(T newNode);
    // to access the child nodes
    BinaryTree<T>* getLeftChild();
    BinaryTree<T>* getRightChild();

    // get root value & set root node
    T getRootVal();
    void setRootVal(T obj);
    //node checker

    bool isLeaf();


};
template <typename T>
BinaryTree<T>::BinaryTree(T rootObj) {
    key = rootObj;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <typename T>
T BinaryTree<T>::getRootVal() {
    return key;
}
template <typename T>
void BinaryTree<T>::insertLeft(T newNode) {
    // two types

    // if there currently no child
    if (leftChild == nullptr) {
        leftChild = new BinaryTree<T>(newNode);
    }
    // if we want to insert a certain node
    else {
        //create a new Node
        BinaryTree<T>* newChild = new BinaryTree<T>(newNode);

        //move the existing left child
        newChild->leftChild = leftChild;

        //make new node the left child
        leftChild = newChild;

    }
}
template <typename T>
void BinaryTree<T>::setRootVal(T obj) {
    key = obj;
}



template <typename T>
BinaryTree<T>* BinaryTree<T>::getLeftChild() {
    return leftChild;
}

template <typename T>
void BinaryTree<T>::insertRight(T newNode) {
    if (rightChild == nullptr) {
        rightChild = new BinaryTree<T>(newNode);
    }else {
        BinaryTree<T>* newChild = new BinaryTree<T>(newNode);
        newChild->rightChild = rightChild;
        rightChild = newChild;
    }
}

template <typename T>
BinaryTree<T>* BinaryTree<T>::getRightChild() {
    return rightChild;
}
template <typename T>
bool BinaryTree<T>::isLeaf() {
    return leftChild == nullptr && rightChild == nullptr;
}
#endif