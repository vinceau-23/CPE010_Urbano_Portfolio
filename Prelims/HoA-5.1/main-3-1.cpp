#include <iostream>
#include "queueLL.h"

int main(){

    qNode<char>* front = nullptr;
    qNode<char>* back = nullptr;

    enqueue('V', &front, &back);
    std::cout<< front->data << " "<< back->data <<std::endl;
    enqueue('I', &front, &back);
    std::cout<< front->data << " "<< back->data <<std::endl;
    enqueue('N', &front, &back);
    std::cout<< front->data << " "<< back->data <<std::endl;
    enqueue('C', &front, &back);
    std::cout<< front->data << " "<< back->data <<std::endl;
    enqueue('E', &front, &back);
    std::cout<< front->data << " "<< back->data <<std::endl;

    dequeue(&front, &back);
    std::cout<< front->data << " "<< back->data <<std::endl;

    frontQ(&front);
    backQ(&back);

    displayAll(&front, &back);



    

    return 0;
}