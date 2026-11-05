#include <iostream>
#include <cmath>
//Supplementary 3
void distance(int xA, int xB, int yA, int yB) {
    double d = std::pow((xB - xA), 2) + std::pow(yB - yA,2) ;
    double d1 = sqrt(d);
    std::cout << "The distance between the points, "<< xA << ", " << yA << " and " << xB <<", "<< yB << " is " << d1 << std::endl;
}
int main() {
    int xA, xB, yA, yB;
    std::cout << "Enter the point x1: ";
    std::cin >> xA;
    std::cout << "Enter the point x2: ";
    std::cin >> xB;
    std::cout << "Enter the point y1: ";
    std::cin >> yA;
    std::cout << "Enter the point y2: ";
    std::cin >> yB;
    distance(xA, xB, yA, yB);
}