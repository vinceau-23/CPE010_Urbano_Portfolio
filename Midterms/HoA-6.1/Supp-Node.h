//
// Created by Vince Urbano on 8/27/2026.
//

#ifndef SUPP_SEARCHINGALGO_SUPP_NODE_H
#define SUPP_SEARCHINGALGO_SUPP_NODE_H
template <typename T>
class Node {
public:
    T data;
    Node *next;
};

template <typename T>
Node<T> *newNode(T newData) {
    Node<T> *newNode = new Node<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    return newNode;
}
#endif //SUPP_SEARCHINGALGO_SUPP_NODE_H
