#include "City.h"

using namespace std;
City::City(string name, int xCoord, int yCoord){
	cityName = name;
	xCoor = xCoord;
	yCoor = yCoord;
}

string City::getName(){
	return cityName;

}
		
int City::getXCoor(){
	return xCoor;
}


int City::getYCoor(){
	return yCoor;
}

list<City*> City::getAdjacent(){
	return adjacents;
}
		
bool City::operator<(City &c){ 
	if(this->getName() < c.getName()){
	return true;
	}else{
	return false;
	}
}
