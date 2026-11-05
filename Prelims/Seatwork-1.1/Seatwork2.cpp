#include <iostream>
using namespace std;
int main() {
    int goods = 3;
    double price[goods];
    double total = 0;
    
    for (int i = 0; i < goods; i++){
        cout << "Please enter the price of your goods: ";
        cin>> price[i];
        {
            total = price[0] + price[1] + price[2];
            
        }
    }
    cout<< "Transaction History: \n"<<"First goods: " <<price[0] <<"\nSecond Goods: "<< price[1] << "\nThird Goods: "<< price[2]<<endl;
    cout<< "Total: " <<total<< endl;
    return 0;
}