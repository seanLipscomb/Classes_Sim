#include "Item.h"
#include "Player.h"
#include "Shop.h"
//final commit
using namespace std;

int main(){
    Shop shop;
    
    shop.addItem(Item("Jennifer's Needle", "Polearm", 2000));
    shop.addItem(Item("Godfist", "Hammer", 3000));
    shop.addItem(Item("The Cutting Edge", "Sword", 2500));
    shop.addItem(Item("Good Wood", "Bow", 1500));
    shop.addItem(Item("Boo Boo Bye Bye", "Potion", 750));

    Player player1("Gromnar Stonebloom", 1);
    Player player2("Nimble Duskwhisper", 2);

    shop.addPlayer(player1);
    shop.addPlayer(player2);

    shop.displayAvailableItems();

}