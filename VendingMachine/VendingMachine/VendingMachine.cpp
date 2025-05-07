#include <iostream>
/*#include <string>
#include "VendingMachine.h"*/
#include "items.h"
Item::Item(const std::string& name, const std::string& description, double price)
    : name(name), description(description), price(price) {
}
Item::~Item() {}

std::string Item::getName() const {
    return name;
}

std::string Item::getDescription() const {
    return description;
}

double Item::getPrice() const {
    return price;
}

//nice
//niceone
BottledWater::BottledWater()
    : Item("Bottled Water", "Refreshing water in a bottle", 10.0) {

}

void BottledWater::displayRemarks() const {
    std::cout << "Enjoy your water!" << std::endl;
}

Piatos::Piatos()
    : Item("Piatos", "Delicious potato chips", 20.0) {
}

void Piatos::displayRemarks() const {
    std::cout << "Enjoy your Piatos!" << std::endl;
}

CupNoodles::CupNoodles()
    : Item("Cup Noodles", "Instant noodles in a cup", 15.0) {
}

void CupNoodles::displayRemarks() const {
    std::cout << "Enjoy your Cup Noodles!" << std::endl;
}
