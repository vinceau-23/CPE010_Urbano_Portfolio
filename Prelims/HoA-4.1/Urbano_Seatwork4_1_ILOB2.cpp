#include <iostream>
#include "listStack.h"
int main(){

    std::cout<<"Pushing 'I' 'E' 'E' \n";

    //pushing
    push('I');
    push('E');
    push('E');

    //display top
    top<char>();


    std::cout<<"Display "<<std::endl;
    displayAll<char>();
    //pop and print each element

    std::cout<<"Popping 'E' 'E' 'E' 'I'\n";
    while(!isEmpty<char>()){
        std::cout<<"Popping " <<pop<char>()<<std::endl;

    }
    //test stack under flow
    pop<char>();

    

}