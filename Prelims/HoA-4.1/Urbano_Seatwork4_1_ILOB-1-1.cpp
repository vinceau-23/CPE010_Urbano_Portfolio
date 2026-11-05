#include <iostream>

const size_t maxCap = 100;
int stack[maxCap];
int top = -1, newData, elements;


//prototyping
bool isEmpty();
bool isFull();
void push();
void pop();
void Top();
void displayAll();

int main(){
    int choice;
    std::cout<<"Enter the number of maximum elments for the new stack (max:100): ";
    std::cin>> elements;  

    while (true){
        std::cout<<"Stack Operations: "<< std::endl;
        std::cout << "1. PUSH \n2. POP \n3. Top \n4. isEmpty \n5. isFull \n6. displayAll \n7. Exit"<< std::endl;
        std::cin >> choice;

        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: Top();
            break;
            case 4: std::cout << isEmpty()<<std::endl;
            break;
            case 5: std::cout<< isFull()<< std::endl;
            case 6: displayAll(); 
            break;   
            default: std::cout << "Invalid Choice" << std::endl;
            break;
            case 7: break;
            break;
            
        }
    }

    return 0;
}

bool isEmpty(){
    //top is -1
    if (top == -1) return true;
    return false;
}

bool isFull(){
    if (top >= elements -1){
        std::cout << "Stack Overflow" << std::endl;
        return true;
    }
    return false;
}
void push(){

    // check if stack full, if yes return an error
    if (isFull()) return;

    // ask the user for a value to be pushed into the stack
    std::cout << "What number you want to add to the stack?: ";
    std::cin >> newData;

    //store inside the stack
    stack[++top] = newData;
}
void pop(){
    
    //if stack is empty
    if(isEmpty()) return;

    //display the element to be popped:
    std::cout<<"Popping: "<< stack[top] << std::endl;

    //decrement top
    top--;
}
void Top(){
    //error checking
    if(isEmpty()) return;
    
    //display top element
    std::cout<<"The top element is: "<< stack[top] << std::endl;
}
void displayAll(){
    //error checking
    if(isEmpty()) return;

    //display all elements
    std::cout <<"Printing Elements: " << std::endl;

    for(int i = top; i >= 0; i--){
        std::cout<< stack[i] << std::endl;
    }

}