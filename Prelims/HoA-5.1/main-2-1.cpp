#include <iostream>
#include <queue>

void display(std::queue<char> copyQ);

int main(){
    //create an object
    std::queue<char> myQ;

    myQ.push('V');
    myQ.push('I');
    myQ.push('N');
    myQ.push('C');
    myQ.push('E');

    display(myQ);
    //empty
    std::cout<<"The queue is ";
    if(myQ.empty()){
        std::cout<<"Empty."<< std::endl;
    }else{
        std::cout<<"Not Empty."<<std::endl;
    }
    
    //size
    std::cout<<"What is the size of queue?: "<< myQ.size()<<std::endl;

    //front
    std::cout<<"The front of the queue is "<< myQ.front()<<std::endl;

    //back
    std::cout<<"The back of the queue is "<< myQ.back()<<std::endl;

    //pop
    myQ.pop();
    display(myQ);

    //push
    myQ.push('A');
    display(myQ);

    return 0;
}
void display(std::queue<char> copyQ){
    //create a copy of the queue that was passed
    std::queue<char> c = copyQ;
    while(!c.empty()){
        std::cout << " "<< c.front();
        c.pop();
    }
    std::cout <<"\n";

}
