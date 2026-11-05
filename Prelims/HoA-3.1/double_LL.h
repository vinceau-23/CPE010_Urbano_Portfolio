#ifndef DOUBLE_LL_H
#define DOUBLE_LL_H

template<typename T>
class DoubleList {
    public:
    T data;
    DoubleList<T>* prev = nullptr;
    DoubleList<T>* next = nullptr;
};

template <typename T>
DoubleList<T>* createNode(T newData) {
    DoubleList<T>* newNode = new DoubleList<T>;

    newNode->data = newData;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    return newNode;
}

template <typename T>
void dllTraverse(DoubleList<T>* currentNode) {
    DoubleList<T>* tail;

    if (currentNode == nullptr) {
        std::cout << "The list is empty." << std::endl;
    }
    //forward:
    std::cout<<"Forward: "<<std::endl;
    while (currentNode != nullptr) {
        std::cout << currentNode->data <<" ";
        tail = currentNode;
        currentNode = currentNode->next;
    }

    std::cout<<std::endl;

    std::cout<<"Backward: "<<std::endl;
    while (tail != nullptr) {
        std::cout << tail->data <<" ";
        tail = tail->prev;

    }
    std::cout<<std::endl;

}
template <typename T>
void dllInsertHead(T newData, DoubleList<T>** currentHead) {
    //create node
    DoubleList<T>* newNode = createNode(newData);

    //new node should point to the current node
    newNode->next = *currentHead;
    (*currentHead)->prev = newNode;
    //update the header pointer
    *currentHead = newNode;
}

template <typename T>
void dllInsertEnd(T newData, DoubleList<T>* currentHead) {
    DoubleList<T>* newNode = createNode(newData);

    while (currentHead->next != nullptr) {
        currentHead = currentHead->next;
    }

    currentHead->next = newNode;
    newNode->prev = currentHead;

}

//insertion
template <typename T>
void dllGeneralInsert(T newData, DoubleList<T>* prevNode){
    if (prevNode == nullptr)return;

    DoubleList<T>* newNode = createNode(newData);
    newNode->next = prevNode->next;
    newNode->prev = prevNode;

    if(prevNode->next != nullptr){
        prevNode->next->prev = newNode;
    }
    prevNode->next = newNode;
}

template <typename T>
void dllDeleteNode(T findData, DoubleList<T>** head) {
    if(*head == nullptr) return;

    DoubleList<T>* currentNode = *head;

    while(currentNode != nullptr  && currentNode->data != findData){
       currentNode = currentNode->next;
    }

    if (currentNode == nullptr) return;

    if (currentNode == *head){
        *head = currentNode->next;
        (*head)->prev = nullptr;
    }else{
       currentNode->prev->next = currentNode->next;
        if (currentNode->next != nullptr) {
            currentNode->next->prev = currentNode->prev;
        }
    }

    delete currentNode;

}


#endif
