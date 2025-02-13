#ifndef SHOP_H
#define SHOP_H
//final commit
#include <vector>
#include "Player.h"
#include "Item.h"
#include <string>
#include <iostream>

using namespace std;

class Shop {
    private:
        vector<Item> stock;
        vector<Player> players;

    public:
        void addItem(const Item& items);
        void addPlayer(const Player& player);

        void buyItem(const string& itemName, Player& player);
        void sellItem(const string& itemName, Player& player);

        void displayAvailableItems() const;
};

#endif //SHOP_H