 #include <iostream>
#include <stack>

int main(){
    std::stack<int> newStack; //created an object

    std::cout<<"Is the stack empty?" << newStack.empty() << std::endl;

    //insert a 3 elemnt:
    newStack.push(3);
    std::cout<<"Top of stack: " << newStack.top()<< std::endl;
    newStack.push(2);
    std::cout<<"Top of stack: " << newStack.top()<< std::endl;
    newStack.push(1);
    std::cout<<"Top of stack: " << newStack.top()<< std::endl;

    std::cout<<"Is the stack empty? " << newStack.empty()<< std::endl;
    newStack.push(6);
    newStack.push(7);
    newStack.push(8);


    std::cout<<"Size of the stack is: " << newStack.size()<< std::endl;

    //swap?
    std::stack<int> stack1;
    std::stack<int> stack2;

    stack1.push(4);
    stack2.push(5);

    std::cout<<"Stack 1: "<<stack1.top()<< std::endl;
    std::cout<<"Stack 2: "<<stack2.top()<< std::endl;

    stack1.swap(stack2);
    std::cout<<"Stack 1: "<<stack1.top()<< std::endl;
    std::cout<<"Stack 2: "<<stack2.top()<< std::endl;

    return 0;
}