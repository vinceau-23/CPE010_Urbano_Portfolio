#ifndef QUEUELL_H
#define QUEUELL_H

//create a class the class nod
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

template<typename T>
void dequeue(qNode<T>** frontPtr, qNode<T>** backPtr){
    //create a temporary node
    qNode<T>* deleteNode = nullptr;
    deleteNode = (*frontPtr);
    //
    //check if the has only 1 node
    if((*frontPtr)->next == nullptr && (*backPtr)->next == nullptr){
        (*frontPtr) = nullptr;
        (*backPtr) = nullptr;
        delete deleteNode;
        return;
    }


    //delete the node
    (*frontPtr) = (*frontPtr)->next;
    deleteNode->next = nullptr;
    delete deleteNode;
}
//check the front
template <typename T>
void frontQ(qNode<T>** frontPtr){
    if((*frontPtr == nullptr)) return;

    qNode<T>* temp = (*frontPtr);
    std::cout<<"The front is "<< temp->data <<std::endl;

}

//check the back
template <typename T>
void backQ(qNode<T>** backPtr){
    if((*backPtr == nullptr )) return;

    qNode<T>* temp = (*backPtr);
    std::cout<<"The back is "<< temp->data <<std::endl;

}
//display all
template <typename T>
void displayAll(qNode<T>** frontPtr, qNode<T>** backPtr){
    if((*frontPtr) == nullptr && (*backPtr) == nullptr) return ;

    qNode<T>* display = (*frontPtr);

    while(display != nullptr){

        std::cout<< display->data <<std::endl;
        display = display->next;
    }
}


#endif