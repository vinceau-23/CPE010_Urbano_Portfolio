#include <iostream>
#include <string>

//Problem 1
class Fruits {
private:
    std::string name;
    int amount;
    int price;

public:
    // Constructor
    Fruits(std::string newName, int newAmount, int newPrice) {
        name = newName;
        amount = newAmount;
        price = newPrice;
    }

    // Destructor
    ~Fruits() {
    }
    // Copy Constructor
    Fruits(const Fruits &copyFruits) {
        name = copyFruits.name;
        amount = copyFruits.amount;
        price = copyFruits.price;
    }

    // Copy Assignment Operator
    Fruits& operator=(const Fruits &copyFruits) {
        if (this != &copyFruits) {
            name = copyFruits.name;
            amount = copyFruits.amount;
            price = copyFruits.price;
        }
        return *this;
    }
    int calculateSum() const {
        return amount * price;
    }

    void displayDetails() const {
        std::cout << "[Fruit] Name: " << name << ", Amount: " << amount
                  << ", Price: " << price << ", Total Cost: " << calculateSum() << std::endl;
    }

    std::string getName() const { return name; }
};


class Vegetables {
private:
    std::string name;
    int amount;
    int price;

public:
    // Constructor
    Vegetables(std::string newName, int newAmount, int newPrice) {
        name = newName;
        amount = newAmount;
        price = newPrice;
    }

    // Destructor
    ~Vegetables() {
        std::cout << "Vegetable " << name << " destroyed" << std::endl;
    }

    // Copy Constructor
    Vegetables(const Vegetables &copyVeggies) {
        name = copyVeggies.name;
        amount = copyVeggies.amount;
        price = copyVeggies.price;
        std::cout << "Vegetable copy constructor called for " << name << std::endl;
    }

    // Copy Assignment Operator
    Vegetables& operator=(const Vegetables &copyVeggies) {
        if (this != &copyVeggies) {
            name = copyVeggies.name;
            amount = copyVeggies.amount;
            price = copyVeggies.price;
        }
        return *this;
    }

    int calculateSum() const {
        return amount * price;
    }

    void displayDetails() const {
        std::cout << "[Vegetable] Name: " << name << ", Amount: " << amount
                  << ", Price: " << price << ", Total Cost: " << calculateSum() << std::endl;
    }

    std::string getName() const { return name; }
};

// Problem 3
int TotalPrice(void* GroceryList[]) {
    int total = 0;

    if (GroceryList[0] != nullptr) total += static_cast<Fruits*>(GroceryList[0])->calculateSum();
    if (GroceryList[1] != nullptr) total += static_cast<Fruits*>(GroceryList[1])->calculateSum();

    if (GroceryList[2] != nullptr) total += static_cast<Vegetables*>(GroceryList[2])->calculateSum();
    if (GroceryList[3] != nullptr) total += static_cast<Vegetables*>(GroceryList[3])->calculateSum();

    return total;
}

int main() {
    //Problem 2
    void* GroceryList[4];

    GroceryList[0] = new Fruits("Apple", 7, 10);
    GroceryList[1] = new Fruits("Banana", 8, 10);
    GroceryList[2] = new Vegetables("Broccoli", 12, 60);
    GroceryList[3] = new Vegetables("Lettuce", 10, 50);

    std::cout << "Grocery List" << std::endl;
    static_cast<Fruits*>(GroceryList[0])->displayDetails();
    static_cast<Fruits*>(GroceryList[1])->displayDetails();
    static_cast<Vegetables*>(GroceryList[2])->displayDetails();
    static_cast<Vegetables*>(GroceryList[3])->displayDetails();


   //Problem 3
    int sum = TotalPrice(GroceryList);
    std::cout << "Total: " << sum << "\n" << std::endl;

    // Problem 4

    if (GroceryList[3] != nullptr) {
        Vegetables* lettucePtr = static_cast<Vegetables*>(GroceryList[3]);
        delete lettucePtr;
        GroceryList[3] = nullptr;
    }

    return 0;
}