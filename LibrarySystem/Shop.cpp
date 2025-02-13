#include "Shop.h"
#include "Player.h"
#include "Item.h"
#include <iostream>
//final commit
using namespace std;

void Shop::addItem(const Item& item) {
    stock.push_back(item);
}

void Shop::addPlayer(const Player& player) {
    players.push_back(player);
}

void Shop::buyItem(const string& itemName, Player& player) const {
    for (auto& item : stock) {
        if(item.getName() == itemName && item.isAvailable()) {
            player.buyItem(item);
            break;
        }
    }
}

void Shop::sellItem(const string& itemName, Player& player) {
    for (auto& item : stock) {
        if (item.getName() == itemName && !item.isAvailable()) {
            player.sellItem(item);
            break;
        }
    }
}

void Shop::displayAvailableItems() const {
    cout << "Available items:\n";
    for (const auto& item : stock) {
        if (item.isAvailable()) {
            cout << item.getName() << " (" << item.getCategory() << "): $" << item.getPrice() << "\n";
        }
    }
}