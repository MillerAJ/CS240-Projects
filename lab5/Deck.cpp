#include "Deck.h"
#include "Card.h"
#include <deque>
#include <vector>
#include <algorithm>

Deck::Deck(){
	//std::deque<Card*>::iterator it = myDeck.begin();
	for(int i = 1;i<=13;i++){
		for(int j = 1;j<=4;j++){
			Card singleCard(i, j);
		//	singleCard.printCard();
			myDeck.push_back(singleCard);				
		}
	}
}

Deck::~Deck(){
}

void Deck::shuffle(){	
	std::random_shuffle(myDeck.begin(), myDeck.end());
}

Card Deck::draw(){
	Card temp = myDeck.front();
	myDeck.pop_front();
	return temp;
	
}

void Deck::printDeck(){
	for(int i = 0;i<52;i++){
	if(i!=52){
	myDeck.front().printCard();
	myDeck.pop_front();
		}
	}
}	


