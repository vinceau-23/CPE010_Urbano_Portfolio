#ifndef listStack_h
#define listStack_h

template <typename T>
class Node{
    public:
    T data;
    Node<T>* next = nullptr;
};

template<typename T>
Node<T>* head = nullptr;

template <typename T>
void push(T newData){
    //Create a new Node
    Node<T>* newNode = new Node<T>;
    //assign the date to the newNode
    newNode->data = newData;
    //point the new Node to the current top
    newNode->next = head<T>;
    //assign the new Top to the newNode
    head<T> = newNode;

}

template <typename T>
bool isEmpty(){
    return head<T> == nullptr;
}

template <typename T>
T pop(){
    //if stack is empty error catch:
    if(isEmpty<T>()){
        std::cout<< "Stack Underflow"<<std::endl;
    }
    //saving a current top node to a temporary variable;
    Node<T>* temp = head<T>;
    //store the data to a temp variable
    T tempVal = temp->data;
    //move the head to next node
    head<T> = head<T>->next;
    //free up the memory
    delete temp;
    //return the temporary variable data
    return tempVal;
}

template <typename T>
T peek() {
    if (isEmpty<T>()) {
        return T();
    }
    return head<T>->data;
}

template <typename T>
void Top(){
    if(isEmpty<T>()) return;
    std::cout << "The top is: "<< head<T>->data <<std::endl;
}

template <typename T>
void displayAll(){
    //check if empty
    if(head<T> == nullptr){
        std::cout<< "The list is empty"<<std::endl;
        return;
    }
    //print
    while(head<T>!= nullptr){
        std::cout<<head<T>->data<<std::endl;
        head<T> = head<T>->next;
    }
}

#endif