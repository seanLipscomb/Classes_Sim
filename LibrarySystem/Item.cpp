#include "Item.h"
#include <iostream>
using namespace std;
//final commit
//default constructor
Item::Item() : name(""), category(""), price(0), available(false) {}

//parameterized constructor
Item::Item(string name, string category, int price, bool isAvailable)
    : name(name), category(category), price(price), available(isAvailable) {}

//getter for item name
string Item::getName() const{
    return name;
}

//getter for category
string Item::getCategory() const{
    return category;
}

//getter for price
int Item::getPrice() const{
    return price;
}

//getter for availability
bool Item::isAvailable() const{
    return available;
}

//method to buy the item
void Item::buyItem(){
    if (available){
        available = false;
    }
}

//method to sell item
void Item::sellItem(){
    available = true;
}