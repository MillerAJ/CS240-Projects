#ifndef CITY_H
#define CITY_H
#include<list>
#include<iostream>
class City{
	public:
		City(std::string name, int xCoord, int yCoord);
		std::string getName(); //return city name
		int getXCoor(); //returns city X coordinate
		int getYCoor(); //returns city Y coordinate
		std::list<City*> getAdjacent(); //returns copy of adjacency list
		bool operator<(City &c); //compares cities by name using the string operator < method

		

	private:
		std::string cityName;
		int xCoor;
		int yCoor;
		std::list<City*> adjacents;


};



#endif

