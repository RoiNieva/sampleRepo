
#ifndef ITEMS_H
#define ITEMS_H

#include <string>

class Item {
protected:
    std::string name;
    std::string description;
    double price;

public:
    Item(const std::string& name, const std::string& description, double price);
    virtual ~Item();

    std::string getName() const;
    std::string getDescription() const;
    double getPrice() const;

    virtual void displayRemarks() const = 0;
};
class BottledWater : public Item {
public:
    BottledWater();
    void displayRemarks() const override;
};
class Piatos : public Item {
public:
    Piatos();
    void displayRemarks() const override;
};
class CupNoodles : public Item {
public:
    CupNoodles();
    void displayRemarks() const override;
};

#endif
