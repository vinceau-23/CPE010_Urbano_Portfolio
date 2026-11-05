#include<iostream>

int sumOfTwoNum(int fNum, int sNum);
void greaterValue(int fNum, int sNum);
bool booleanValues(bool fNum, bool sNum);
int main(){
    std::cout<<"The sum of two numbers is: "<<sumOfTwoNum(6,7)<<std::endl;
    greaterValue(6,7);
    booleanValues(0,1);
}
int sumOfTwoNum(int fNum, int sNum){
    int sum = fNum +sNum;
    return sum;
}
void greaterValue(int fNum, int sNum){
    if (fNum > sNum){
        std::cout<< fNum << " is greater than " << sNum << std::endl;
    }
    else{
        std::cout<< sNum << " is greater than " << fNum << std::endl;
    }
}
bool booleanValues(bool fNum, bool sNum){
    bool AND = fNum&&sNum;
    bool OR = fNum ||sNum;
    bool NOT = !fNum;
    bool NOT2 = !sNum;

    std::cout<< "True or False: " << OR << std::endl;
    std::cout<< "True or False: " << NOT << std::endl;
    std::cout<< "True or False: " << AND << std::endl;

    return true;
}

