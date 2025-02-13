#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() : name(""), ID(0) {}

Player::Player(string name, int ID) : name(name), ID(ID) {}

string Player::getName() const { return name; }
int Player::getID() const { return ID; }

void Player::buyItem(Item& item) {
    if (item.isAvailable()){
        item.buyItem();
        inventory.push_back(item);
    }
}

void Player::sellItem(Item& item) {
    for (size_t i=0; i<inventory.size(); i++) {
        if (inventory[i].getName() == item.getName()){
            item.sellItem();
            inventory.erase(inventory.begin() + i);
            break;
        }
    }
}

void Player::displayInventory() const {
    cout << "Inventory of " << name << " (ID: " << ID << "):\n";
    for (const auto& item : inventory) {
        cout << item.getName() << " (" << item.getCategory() << ")\n";
    }
}