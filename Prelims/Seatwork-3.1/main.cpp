#include <iostream>
#include "simply_LL.h"

int main(){

//creating an empty list
    SimplyList<char>* head = new SimplyList<char>;
    SimplyList<char>* second = new SimplyList<char>;
    SimplyList<char>* third = new SimplyList<char>;
    SimplyList<char>* fourth = new SimplyList<char>;
    SimplyList<char>* fifth = new SimplyList<char>;

    //assign the data
    head->data = 'V';
    head->next = second;

    second->data = 'I';
    second->next = third;

    third->data = 'N';
    third->next = fourth;

    fourth->data = 'C';
    fourth->next = fifth;

    fifth->data = 'E';
    fifth->next = nullptr;

    std::cout<<"Original List"<<std::endl;
    listTraversal(head);
    
    std::cout<<"Inserting a new node to the head.\n";
    sllinsertHead('Q', &head);
    listTraversal(head);
    std::cout<<"Inserting a new node at the third"<<std::endl;
    sllGeneralInsert('X', head->next->next);
    listTraversal(head);

    std::cout<< "Inserting new node at the end."<<std::endl;
    sllinsertEnd('U', &head);
    listTraversal(head);

    std::cout<<"Deleting a Node"<<std::endl;
    sllDeleteNode('X',&head);
    listTraversal(head);

    std::cout<< "Deleting all the Nodes."<< std::endl;
    sllDeleteList(&head);
    listTraversal(head);
 
    return 0;
}