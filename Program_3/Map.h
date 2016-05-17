#ifndef MAP_H
#define MAP_H
#include "City.h"
#include <vector>

class Map{
	private:
		std::vector<City> cities;

	
	public:
		Map(std::string);
		City* findByName(std::string);
		void printMap();
		std::vector<City*> shortestPath(City*, City*);
		unsigned int pathDistance(City*, City*);



};



#endif
