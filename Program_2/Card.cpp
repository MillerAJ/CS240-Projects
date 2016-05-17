#include "Card.h"

std::map<int, std::string> Card::myMap;

Card::Card(int val , int suitS){
	value = val;
	suit = suitS;
	myMap.insert (std::pair<int, std::string>(0,"JOKER"));
	myMap.insert (std::pair<int, std::string>(1,"Heart"));
	myMap.insert (std::pair<int, std::string>(2,"Spade"));
	myMap.insert (std::pair<int, std::string>(3,"Diamond"));
	myMap.insert (std::pair<int, std::string>(4,"Club"));
}

Card::Card(){
	value = 0;
	suit = 0;
}

int Card::getVal(){
	return value;
}

int Card::getSuit(){
	return suit;
}

void Card::printCard(){
	std::cout<<myMap[this->suit]<<" "<<this->value<<std::endl;
}
