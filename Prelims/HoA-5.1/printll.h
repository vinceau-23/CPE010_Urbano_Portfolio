#ifndef PRINTLL_H
#define PRINTLL_H

template <typename T>
class qNode{
public:
    T data;
    qNode<T> *next;
};

//creates the new node
template <typename T>
qNode<T>* new_node(T newData){
    qNode<T>* newNode = new qNode<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    return newNode;
}
//enqueue operation
template<typename T>
void enqueue(T newData, qNode<T>** frontPtr, qNode<T>** backPtr){
    //create the new node
    qNode<T>* newNode = new_node(newData);

    //insertint into an empty queue
    if((*frontPtr)==nullptr && (*backPtr) == nullptr){
        (*frontPtr) = newNode;
        (*backPtr) = newNode;

    }
    // inserting an ite, imto a non empty queue
    (*backPtr)->next = newNode;
    (*backPtr) = newNode;

}
template <typename T>
bool isEmpty(qNode<T>** frontPtr) {
    return (*frontPtr == nullptr);
}

template<typename T>
T dequeue(qNode<T>** frontPtr, qNode<T>** backPtr){
    if (isEmpty(frontPtr)) {
        std::cout<<"The queue is empty"<<std::endl;
        return T();
    };
    //create a temporary node
    qNode<T>* deleteNode = *frontPtr;
    T dequeueData =deleteNode->data;
    //
    //check if the has only 1 node
    if((*frontPtr)->next == nullptr && (*backPtr)->next == nullptr){
        (*frontPtr) = nullptr;
        (*backPtr) = nullptr;
        delete deleteNode;
        return dequeueData;
    }


    //delete the node
    (*frontPtr) = (*frontPtr)->next;
    deleteNode->next = nullptr;
    delete deleteNode;
    return dequeueData;
}





#endif
