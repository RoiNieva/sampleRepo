#include <iostream>

#include "items.h"


int main() {
    BottledWater water;
    Piatos piatos;
    CupNoodles noodles;
    std::cout << "........Roi's Vending Machine....." << std::endl;
    std::cout << std::endl;
    std::cout << "Items Available:" << std::endl;
    std::cout << "[1] " << water.getName() << " - Php " << water.getPrice() << std::endl;
    std::cout << "[2] " << piatos.getName() << " - Php " << piatos.getPrice() << std::endl;
    std::cout << "[3] " << noodles.getName() << " - Php " << noodles.getPrice() << std::endl;
    std::cout << std::endl;
    int choice;
    std::cout << "Select an item: ";
    std::cin >> choice;
    Item* selectedItem = nullptr;
    switch (choice) {
    case 1:
        selectedItem = &water;
        std::cout << water.getDescription() << std::endl;
        std::cout << std::endl;
        break;
    case 2:
        selectedItem = &piatos;
        std::cout << piatos.getDescription() << std::endl;
        std::cout << std::endl;
        break;
    case 3:
        selectedItem = &noodles;
        std::cout << noodles.getDescription() << std::endl;
        std::cout << std::endl;
        break;
    default:
        std::cout << "Invalid choice!" << std::endl;
        return 0;
    }
    std::cout << std::endl;
    double payment;
    std::cout << "Enter payment amount: ";
    std::cin >> payment;
    std::cout << std::endl;
    selectedItem->displayRemarks();
    std::cout << std::endl;

    if (payment >= selectedItem->getPrice()) {
        double change = payment - selectedItem->getPrice();
        std::cout << "Payment successful. Your change: Php " << change << std::endl;
        std::cout << std::endl;
    }
    else {
        std::cout << "Insufficient payment. Please try again." << std::endl;
        std::cout << std::endl;
    }
    return 0;
}


 

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
