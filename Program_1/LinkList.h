#ifndef LINKLIST_H
#define LINKLIST_H
//#include "User.h"
#include <cstddef>
#include <iostream>
#include <typeinfo>

template <class T>
class Node{
	private:
		
	public:
		Node<T>* next;
		T data;
		Node<T>() {this->next = NULL; this->data = NULL;}
		Node<T>(T dat) {this->next = NULL; this->data = dat;}
		Node<T>(T dat, Node<T>* nex) {this->next = nex; this->data = dat;}

		~Node(){
			//delete[] data;
			//delete[] next;
		}		

		void setData(T blah){
			this->data = blah;
		}
	
		T getData(){
			return this-> data;
		}
};

template <class T>
class LinkList{

	private:
		Node<T>* head;
	//	int iterator;
	public:
		Node<T>* getHead();
		void setHead(Node<T>*);
		LinkList();
		LinkList<T>(const LinkList<T>&);
		~LinkList();
		int iterator;
		void setIterator(T);
		void add(T);
		T get();
		void update(T, T);
		void remove(T);
		//LinkList<T>* operator<<(LinkList<T>*, T thing);
		void operator<<(T);
		void operator++();
		//void operator--();
};

template <class T>
LinkList<T>::LinkList(){
	this->head=NULL;
	iterator = 0;
	}

template <class T>
LinkList<T>::LinkList(const LinkList<T> &blah){
	Node<T>* head = blah->head;
	iterator = 0;
}


template <class T>
LinkList<T>::~LinkList(){
	std::string stringType;	
	Node<T>* temp = this->head;
	while(this->head != NULL){
		while(temp->next != NULL){
			temp = temp->next;
		}
	
		//delete[] temp->data;
		delete[] temp->next;
		
	}
		//delete[] head->data;
		delete[] head;
}


template <class T>	
void LinkList<T>::add(T thing){
	Node<T>* newNode = new Node<T>(thing);
	if (this->getHead() == NULL){
		this->setHead(newNode);
	}		
	else{
		Node<T>* temp = this->getHead();
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
	this->iterator++;
	
}

template <class T>
T LinkList<T>::get(){
	int index = (this->iterator);
	T retVal;
	if (index == 1 && this->head != NULL) {
		retVal = this->head->data;
}	
	if(this->head != NULL && index!=1){
		Node<T>* temp = this->head;
		for(int i=1;i<index;i++){
			temp = temp->next;
			retVal = temp->data;
		}
	}	
	return retVal;	
}

template <class T>
void LinkList<T>::update(T old, T newr){	
	if (this->head != NULL){	
		Node<T>* temp = this->head;
		if(this->head->data == old){
			this->head->data = newr;
		} else {
			while(temp->next->data != old){
				if(temp->next != NULL){
				temp = temp->next;
				}
			}
			if(temp->next->data == old){
				temp->next->data = newr;
			}
		}
	}
}

template <class T>
void LinkList<T>::remove(T dead){
	Node<T>* temp = this->head;
	Node<T>* temp2 = this->head;
	if (this->head != NULL){
		temp = this->head;	
		while(temp->next->data != dead){
			temp = temp->next;
		}
		if(temp->next->data == dead){
			temp2=temp->next->next;
		}
		temp->next=temp2;
	}	
}

template <class T>
void LinkList<T>::setIterator(T thing){	
	Node<T>* temp = new Node<T>();
	if (this->head != NULL){
		temp = this->head;
		int i =1; 
		while(temp->data != thing){
			temp = temp->next;
			i++;
		}
		if(temp->data == thing){
			this->iterator = i;
		}			
	}	
}

template <class T>
void LinkList<T>::setHead(Node<T>* blah){
	this->head = blah;
}

template <class T>
Node<T>* LinkList<T>::getHead(){
	return this->head;
}


template <class T>
void LinkList<T>::operator++(){
	this->iterator+=1;
}

template <class T>
void LinkList<T>::operator<<(T thing){
	add(thing);
}

 
		//void operator<<(T);
		//void operator++();

#endif
