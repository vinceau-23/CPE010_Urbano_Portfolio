#include <iostream>
using namespace std;

int main() {
    
    float grade1 = 0;
    float grade2 = 0;
    float grade3 = 0;
    float sum = 0;
    float Average = 0;

    cout<< "Input your grade: "<< endl;
    cin >> grade1;

    cout << "Input your grade: "<< endl;
    cin>> grade2;

    cout << "Input your grade: " << endl;
    cin>> grade3;
    
    sum = grade1 + grade2 + grade3;
    Average = sum/3;

    cout << "Your average grade is: " << Average << endl;
    
    
    return 0;
}