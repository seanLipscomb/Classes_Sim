#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Item.h"
#include <iostream>

using namespace std;

class Player{
    private:
        string name;
        int ID;
        vector<Item> inventory;
    public:
        Player();
        Player(string name, int ID);

        string getName() const;
        int getID() const;
        void buyItem(Item& items);
        void sellItem(Item& items);

        void displayInventory() const;
};

#endif //Player_H