#ifndef SORT_H
#define SORT_H

class Sort{

	public:
		int* sortA(int*, int);
		int* sortB(int*, int);
	
		int left(int);
		int right(int);
		int parent(int);
		int getPriority(int*, int);
		int* heapify(int*, int);
		int* siftdown(int*, int, int);
		
		int* sortOptimized(int*, int);
		bool isHeap(int*, int);
		int partition(int*,const int,const int);
		
	private:
		int* heapsort(int*, int);
		void mergesort(int*, int, int);
		void quicksort(int*,const int,const int);
		void merge(int*, int, int, int);

};




#endif
