#ifndef TRAIN_H
#define TRAIN_H
#include "Cart.h"
class Train{

	public:
	Cart *engine;

	/*
	O *obj = (O*) new O; ---- returns a pointer to an obj of type O
	obj->data  ==  (*obj).data
	obj->next  (not obj->&next)
	//this means that if you want to deref next, you must
	obj->next->data  or (*(*obj).next).data
	*/
	
	void make(int val){
		Cart* node = new Cart;
		node->data = val;
		if (this->engine == nullptr){
			engine = node;
		}		
		else{
			Cart* temp = engine;	
			while(temp->next != nullptr){
				temp = temp->next;
			}
			temp->next = node->next;
		}
		
	}
	
	int get(int index){
		int retVal;
		Cart* temp = engine; 
		for(int i=0;i<index;i++){
			retVal = temp->data;
		}	
		return retVal;	
	}

};


#endif
