#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <iostream>

using namespace std;

class Item {
    private:
        string name;
        string category;
        int price;
        bool available;
    public:
        // default constructor
        Item();
        // parameterized constructor
        Item(string name, string category, int price, bool available = true);
        // getters
        string getName() const;
        string getCategory() const;
        int getPrice() const;
        bool isAvailable() const;
        // methods to borrow and return books
        void buyItem();
        void sellItem();

};

#endif //ITEM_H