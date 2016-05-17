#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <map>
#include "Card.h"
#include <deque>
class Deck{
	private:
		std::deque<Card> myDeck;

	public:
		Deck();
		~Deck();
		void shuffle();
		int getVal();
		Card draw();
		void printDeck();
		void reset();
		int getSize();
		bool isDiff(Deck);



};






#endif
