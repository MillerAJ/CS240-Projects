#include "Sort.h"
#include <array>
#include<iostream>


int* Sort::sortA(int* a,int size){
//	heapsort(a, size);
	//int s = sizeof(a)/sizeof(a[0]);
	quicksort(a, 0, size);
	return a;
}


int* Sort::sortB(int* b, int size){
	mergesort(b, 0,size);
	return b;
}

int* Sort::heapsort(int* myArray, int size){
	heapify(myArray, 0, size);
	std::cout<<"isHeap: "<<isHeap(myArray,0)<<std::endl;
	while(size != 0){
	size = getPriority(myArray, size);
	}
	return myArray;
	
		
}


void Sort::mergesort(int* arr, int low, int high){
	int mid;
	if(low<high){
		mid = (low+high)/2;
		mergesort(arr, low, mid);
		mergesort(arr, mid+1, high);
		merge(arr, low, high, mid);
	}
	return;
	
}

void Sort::merge(int* arr, int low, int high, int mid){
	int i,j,k;
	int temp[high];
	i=low;
	k=low;
	j=mid+1;
	while (i<=mid && j<=high){
		if(arr[i] < arr[j]){
			temp[k] = arr[i];
			k++;
			i++;
		}else{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	while(i<=mid){
		temp[k] = arr[i];
		k++;
		i++;
	}
	while(j<=high){
		temp[k] = arr[j];
		k++;
		j++;
	}
	for(i=low;i<k;i++){
		arr[i] = temp[i];
	}
	


	
}

int Sort::partition(int* arr,const int LOW,const int HIGH){
	int val = arr[LOW];
	int i = LOW;
	int j;
	int temp;
	
	for(j=LOW+1;j<HIGH;j++){
		if(arr[j] <= val){
			i=i+1;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	//std::swap(arr[i-1], arr[LOW]);
	temp = arr[i];
	arr[i] = arr[LOW];
	arr[LOW] = temp;
	return i;
} 

void Sort::quicksort(int* arr,const int LOW,const int HIGH){
	int mid;
	if(LOW<HIGH)
	{
		mid = partition(arr, LOW, HIGH);
		quicksort(arr, LOW, mid);
		quicksort(arr, mid+1, HIGH); 
	}
	return;
}		


int* Sort::sortOptimized(int* arr, int size){
	heapsort(arr, size);
	return arr;
}

/*
void Sort::siftUp(int index){
	int parentNode;
	Player temp;
	if(index!=0){
		parentNode = parent(index);
		if(heapList[parentNode].getBudget() < heapList[index].getBudget()) {
			temp.setName(heapList[parentNode].getName());
			temp.setBudget(heapList[parentNode].getBudget());
			heapList[parentNode] = heapList[index];
			heapList[index] = temp;
			siftUp(parentNode);
		}
	}
}
*/

int Sort::right(int i){
	int ret = i;
	ret = ret*2;
	ret = ret +2;
	return ret;
}

int Sort::left(int i){
	int ret = i;
	ret = ret*2;
	ret = ret+1;
	return ret;
}

int Sort::parent(int i){
	int ret = i;
	ret--;
	ret = ret/2;
	return ret;
}

int Sort::getPriority(int* heapList, int heapSize){
	
		int priority = heapList[0];
		heapList[0] = heapList[heapSize - 1];
		heapList[heapSize-1] = priority;
		heapSize--;
		siftdown(heapList, 0, heapSize);
	return heapSize;	
}

/*
void Sort::heapify(int* myArray, int arrSize){
	if (arrSize > 1){
	for (int i = (arrSize)/2;i>=0;i--){
		siftdown(myArray, i, arrSize);
	}
	}
}	

void Sort::siftdown(int* heapList, int index, int heapSize){
	if((index < 0) || (index >= heapSize)) return;
	while (index > (heapSize-1)/2){
		int j = left(index);
		if ((j+1 < heapSize) && (heapList[j] < heapList[j+1])){
			j++;}
		if (heapList[index] > heapList[j]) return;
			int temp = heapList[j];
			heapList[j] = heapList[index];
			heapList[index] = temp;
			index = j;
	}
}
*/


void Sort::heapify(int* heapList, int low, int high){
	int largest =i;
	int l = 2*i+1;
	int r = 2*i+2;
	int temp;
	if(l<n && arr[l] > arr[largest]){
		largest= l;
	}
	if(r<n && arr[r]>arr[largest]){
		largest = r;
	}
	if(largest != i){
		temp = arr[i];
		
	}

	}
}	

int* Sort::siftdown(int* heapList, int heapSize, int index){
	if(!(index < 0) || (index >= heapSize)){
	while (index > (heapSize-1)/2){
		int j = (2*index)+1;
		if ((j+1 < heapSize) && (heapList[j] < heapList[j+1])){
			j++;}
		if (!(heapList[index] > heapList[j])){
			int temp = heapList[j];
			heapList[j] = heapList[index];
			heapList[index] = temp;
			index = j;
		}
	}
	}
	return heapList;
}

// Returns true if arr[i..n-1] represents a max-heap
bool Sort::isHeap(int* arr, int i){
	if(sizeof(arr) <= 1 || i >= (sizeof(arr) - 2)/2)
       return true;
   if (arr[i] >= arr[(2*i) + 1] &&  
   		arr[i] >= arr[(2*i) + 2] &&

       	isHeap(arr, 2*i + 1) && isHeap(arr, 2*i + 2)){
       return true;
	}else{
   return false;}

}


