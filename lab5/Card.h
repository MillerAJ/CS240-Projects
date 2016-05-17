#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <map>

class Card{
	private:
		int value;
		int suit;
		static std::map<int, std::string> myMap;

	public:
		Card(int, int);
		int getVal();
		int getSuit();
		void printCard();
		
};






#endif
