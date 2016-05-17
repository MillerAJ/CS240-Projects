#include "LinkList.h"
//#include "User.h"	

/*
	O *obj = (O*) new O; ---- returns a pointer to an obj of type O
	obj->data  ==  (*obj).data
	obj->next  (not obj->&next)
	//this means that if you want to deref next, you must
	obj->next->data  or (*(*obj).next).data



template <class T>
LinkList<T>* LinkList<T>::operator<<(LinkList<T>* blah, T thing){
	LinkList<User*>* newList = LinkList<User*>(blah);
	newList->add(thing);
	return newList;
}

template <class T>
void LinkList<T>::operator++(){
	this->iterator+=1;
}

template <class T>
void LinkList<T>::operator--(){
	this->iterator-=1;
}


*/

