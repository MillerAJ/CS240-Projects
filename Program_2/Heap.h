#ifndef HEAP_H
#define HEAP_H
#include <vector>
#include "Player.h"
class Heap{

	public:
		Heap(std::string); //takes in info from a file
		Heap(const Heap &copy);
		void addPlayer(Player newPlayer);
		void addPlayers(Player newPlayer);
		Player getPlayer();
		std::vector<Player> getArray();
		bool empty();
		unsigned int size();
		void heapify();
		void siftdown(int);
		void siftUp(int);
		bool isLeaf(int);
		void printList();
		int heapSize;
		int left(int);
		int right(int);
		int parent(int);
	


	private:
		std::vector<Player> heapList;
};


#endif
