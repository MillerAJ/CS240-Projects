#include "Card.h"
#include "Deck.h"
int main(){

Deck deck1;
deck1.printDeck();

std::cout<<" "<<std::endl;

Deck deck2;
deck2.shuffle();
deck2.printDeck();
}
