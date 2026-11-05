#include <iostream>
//Supplementary 1
void swapped(int num1, int num2) {
    int Swap = num1;
    num1 = num2;
    num2 = Swap;
    std::cout << "Numbers Swapped! \n" << num1 << " " << num2 << std::endl;

}

int main() {
    swapped(23, 24);

}
