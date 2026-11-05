#include <iostream>
//Supplementary 2

void convert(double K) {
    double F = (K - 273.15)*(1.8)+32;
    std::cout<< K <<" Kelvin in Fahrenheit is " << F <<std::endl;
}
int main() {
    double T;

    std::cout << "Enter temperature in Kelvin: " ;
    std::cin >> T;
    convert(T);
}
