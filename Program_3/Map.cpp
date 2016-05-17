#include "Map.h"
#include <stdio.h>
#include <vector>
#include<iostream>
#include<fstream>
#include<sstream>
//#include<string>

Map::Map(std::string filename){

	std::string name, xVal, yVal;
	int x,y;
	std::string buffer;
	std::vector<std::string> parts;
	std::ifstream myFile;

	const char* c = filename.c_str();
	try{
	myFile.open(c);
	if (myFile.is_open()){	
	while(!myFile.eof()){
		
		getline(myFile, name);
		std::stringstream ss(name);
		while (ss>>buffer){
			parts.push_back(buffer);
		}
		name = parts[0];
		xVal = parts[1];
		yVal = parts[2];
		x = atoi(xVal.c_str());
		y = atoi(yVal.c_str());
		City blah(name, x, y);
		cities.push_back(blah);
		//pieces = strtok (line, " ")
		//while (pieces != NULL){
		//	std::cout<<pieces<<std::endl;
		//	token = std::strtok(NULL, " ");
		//}

		//int monVal = atoi(money.c_str());	
		
		
	}
	
	myFile.close();
	} else {
		std::cout<<"error w/ file"<<std::endl;
		}
	} catch(std::exception& e) {std::cout<<"something went wrong"<<std::endl;}

}

//Dijkstra's Shortest Path (n^2 complexity)
std::vector<City*> Map::shortestPath(City* start, City* dest){
	//TODO
}

unsigned int Map::pathDistance(City* start, City* dest){
	//TODO
}

City* Map::findByName(std::string){

}

void Map::printMap(){
	for(int i =0;i<cities.size();i++){
		std::cout<<cities[i].getName()<<cities[i].getXCoor()<<cities[i].getYCoor()<<std::endl;
	}
}
