#include <iostream>
#include "simply_LL.h"
#include "double_LL.h"

int main(){

    DoubleList<char>* head = createNode('C');
    DoubleList<char>* second = createNode('P');
    DoubleList<char>* third = createNode('E');

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    dllTraverse(head);

    std::cout<<"Insert Head: "<<std::endl;
    dllInsertHead('X', &head);
    dllTraverse(head);

    std::cout<<"Insert End: "<<std::endl;
    dllInsertEnd('1', head);
    dllTraverse(head);

    std::cout<<"General Insert: "<<std::endl;
    dllGeneralInsert('V',head->next->next);
    dllTraverse(head);

    std::cout<<"Delete a Node: "<<std::endl;
    dllDeleteNode('V', &head);
    dllTraverse(head);
    return 0;
}