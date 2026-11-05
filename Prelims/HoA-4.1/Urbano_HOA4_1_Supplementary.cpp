#include <iostream>
#include "SuppList.h"
#include <string>
const size_t maxCap = 100;
int stack[maxCap];
int top = -1, newData, elements;


//prototyping
bool isEmptyArr();
bool isFullArr();
void pushArr();
void popArr();
void TopArr();
void displayAllArr();
void checkDelimiterArr();

int main(){

    std::string choice;
    std::cout << "Balanced or Unbalanced" << std::endl;
    std::cout << "Enter Expression: ";
    std::cin >> choice;

    bool isBalanced = true;

    for (size_t i = 0; i < choice.length(); i++) {
        char ch = choice[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push<char>(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (isEmpty<char>()) {
                isBalanced = false;
                break;
            }

            char head = peek<char>();

            if ((head == '(' && ch == ')') ||
                (head == '{' && ch == '}') ||
                (head == '[' && ch == ']')) {
                pop<char>();
                } else {
                    isBalanced = false;
                    break;
                }
        }
    }

    if (isBalanced && isEmpty<char>()) {
        std::cout << "Balanced Expression" << std::endl;
    } else {
        std::cout << "Unbalanced Expression" << std::endl;
    }
    return 0;
}

bool isEmptyArr(){
    //top is -1
    if (top == -1) return true;
    return false;
}

bool isFullArr(){
    if (top >= elements -1){
        std::cout << "Stack Overflow" << std::endl;
        return true;
    }
    return false;
}
void pushArr(){

    if (isFullArr()) return;

    std::cout << "What number you want to add to the stack?: ";
    std::cin >> newData;

    stack[++top] = newData;
}
void popArr(){
    
    //if stack is empty
    if(isEmptyArr()) return;

    //display the element to be popped:
    std::cout<<"Popping: "<< stack[top] << std::endl;

    //decrement top
    top--;
}
void TopArr(){
    //error checking
    if(isEmptyArr()) return;
    
    //display top element
    std::cout<<"The top element is: "<< stack[top] << std::endl;
}
void displayAllArr(){
    //error checking
    if(isEmptyArr()) return;

    //display all elements
    std::cout <<"Printing Elements: " << std::endl;

    for(int i = top; i >= 0; i--){
        std::cout<< stack[i] << std::endl;
    }

}
