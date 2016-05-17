#ifndef MOVIECHART_H
#define MOVIECHART_H
#include <iostream>
#include "User.h"
#include "LinkList.h"

	/*
	O *obj = (O*) new O; ---- returns a pointer to an obj of type O
	obj->data  ==  (*obj).data
	obj->next  (not obj->&next)
	//this means that if you want to deref next, you must
	obj->next->data  or (*(*obj).next).data
	*/


class MovieChart{
	public:
	
	MovieChart();
	~MovieChart();
	bool login();
	bool logout();
	void create();
	void update();
	void view();
	void favorites();
	bool quit();
	void listEm();
	void setCurrentUser(User*);
	User* getCurrentUser();	
	LinkList<User*>* getUsers();
	int getNum();
	
	private:
	LinkList<User*>* users;
	//User users[255];
	int num_users;
	User* current_user;
	
};
#endif
