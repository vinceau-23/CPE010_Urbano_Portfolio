#ifndef GENERAL_TREE_H
#define GENERAL_TREE_H

#include <iostream>

template <typename T>
class CustomVector {
private:
    T* data;
    int capacity;
    int size;

    void resize(int new_capacity) {
        T* new_data = new T[new_capacity];
        for (int i = 0; i < size; ++i) {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
        capacity = new_capacity;
    }

public:
    CustomVector() : data(nullptr), capacity(0), size(0) {}

    ~CustomVector() {
        delete[] data;
    }

    void push(const T& value) {
        if (size == capacity) {
            int new_capacity = (capacity == 0) ? 1 : capacity * 2;
            resize(new_capacity);
        }
        data[size++] = value;
    }

    T& operator[](int index) {
        return data[index];
    }

    const T& operator[](int index) const {
        return data[index];
    }

    int getSize() const {
        return size;
    }

    bool empty() const {
        return size == 0;
    }
};

template <typename T>
struct GeneralTreeNode {
    T data;
    CustomVector<GeneralTreeNode<T>*> children;

    GeneralTreeNode(T val) : data(val) {}
};

template <typename T>
void preOrder(GeneralTreeNode<T>* node) {
    if (!node) return;
    std::cout << node->data << " ";
    for (int i = 0; i < node->children.getSize(); ++i) {
        preOrder(node->children[i]);
    }
}

template <typename T>
void postOrder(GeneralTreeNode<T>* node) {
    if (!node) return;
    for (int i = 0; i < node->children.getSize(); ++i) {
        postOrder(node->children[i]);
    }
    std::cout << node->data << " ";
}

template <typename T>
void inOrder(GeneralTreeNode<T>* node) {
    if (!node) return;

    int totalChildren = node->children.getSize();

    if (totalChildren == 0) {
        std::cout << node->data << " ";
        return;
    }

    inOrder(node->children[0]);

    std::cout << node->data << " ";

    for (int i = 1; i < totalChildren; ++i) {
        inOrder(node->children[i]);
    }
}

template <typename T>
class GeneralTree {
private:
    GeneralTreeNode<T>* root;

    void clear(GeneralTreeNode<T>* node) {
        if (!node) return;
        for (int i = 0; i < node->children.getSize(); ++i) {
            clear(node->children[i]);
        }
        delete node;
    }

public:
    GeneralTree() : root(nullptr) {}

    GeneralTree(T rootValue) {
        root = new GeneralTreeNode<T>(rootValue);
    }

    ~GeneralTree() {
        clear(root);
    }

    GeneralTreeNode<T>* getRoot() const {
        return root;
    }

    void setRoot(GeneralTreeNode<T>* node) {
        root = node;
    }

    GeneralTreeNode<T>* createNode(T val) {
        return new GeneralTreeNode<T>(val);
    }

    void addChild(GeneralTreeNode<T>* parent, GeneralTreeNode<T>* child) {
        if (parent && child) {
            parent->children.push(child);
        }
    }

    void printPreOrder() const {
        preOrder(root);
        std::cout << "\n";
    }

    void printPostOrder() const {
        postOrder(root);
        std::cout << "\n";
    }

    void printInOrder() const {
        inOrder(root);
        std::cout << "\n";
    }
};

#endif // GENERAL_TREE_H