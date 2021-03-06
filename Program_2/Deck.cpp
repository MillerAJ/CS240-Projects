	#include "Deck.h"
	#include "Card.h"
	#include <deque>
	#include <vector>
	#include <algorithm>

	Deck::Deck(){
		for(int i = 1;i<=13;i++){
			for(int j = 1;j<=4;j++){
				Card singleCard(i, j);
			//	singleCard.printCard();
				myDeck.push_back(singleCard);				
			}
		}
		shuffle();
	}

	void Deck::reset(){
		//std::deque<Card*>::iterator it = myDeck.begin();
		myDeck.clear();
		for(int i = 1;i<=13;i++){
			for(int j = 1;j<=4;j++){
				Card singleCard(i, j);
			//	singleCard.printCard();
				myDeck.push_back(singleCard);				
			}
		}
		shuffle();
	}


	Deck::~Deck(){
		while(myDeck.size()!=0){	
			myDeck.pop_front();	
		}
		//delete myDeck;
	}

	void Deck::shuffle(){
		 for(int i = 0; i<myDeck.size(); i++){
			   int swap1 = rand() % myDeck.size();
			   int swap2 = rand() % myDeck.size();
			  Card temp = myDeck[swap1];
			  myDeck[swap1] = myDeck[swap2];
			  myDeck[swap2] = temp;
		  }
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

	int Deck::getSize(){
		return myDeck.size();
	}


	bool Deck::isDiff(Deck blah){
		bool diff = false;
		Card card1;
		Card card2;
	for(int i = 0;i<52;i++){
		card1 = this->draw();
		card2 = blah.draw();
		if (card1.getVal() != card2.getVal()){
			diff = true;
		}
	}
	return diff;	
}



