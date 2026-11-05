
#include <iostream>
#include "supplementary.h"
#include <time.h>
#include <cstdlib>

int maxSize = 100;
void displayFunc(int arr[]);


int main(){
    int votes[maxSize];
    srand(time(0));


    for (int i = 0; i < maxSize; i++) {
        votes[i] = rand()%5 + 1;
    }

    displayFunc(votes);
    std::cout << std::endl;
    std::cout << "Sorted Arrays: " <<std::endl;
    bubbleSort(votes, maxSize);
    displayFunc(votes);

    std::cout << std::endl;
    std::cout<< "Vote Count" <<std::endl;
    voteCount(votes, maxSize);


}
void displayFunc(int arr[]) {
    for (int i = 0; i < maxSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}