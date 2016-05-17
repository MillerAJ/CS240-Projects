#include "MovieChart.h"
#include "User.h"
#include "LinkList.h"
#include <iostream>
#include <cstddef>
#include <fstream>
//#include <stdlib.h>
//#include <string.h>
#include<cstring>
#include<cstdlib>
using namespace std;

MovieChart::MovieChart(){
	num_users = 0;
	string uName, fName, lName, passW, mov1, mov2, mov3, mov4, mov5, thatAge;
	users = new LinkList<User*>();
	ifstream myFile;
	try{
	myFile.open("users.txt");
	
	while(!myFile.eof()){
		
		getline(myFile, uName);
		getline(myFile, fName);
		getline(myFile, lName);
		getline(myFile, thatAge);
		getline(myFile, passW);
		
		int ageNum = atoi(thatAge.c_str());
		User* newUser = new User(fName, lName, ageNum, uName, passW);	
		this->num_users += 1;
		getline(myFile, mov1);
		getline(myFile, mov2);
		getline(myFile, mov3);
		getline(myFile, mov4);
		getline(myFile, mov5);
		newUser->addMovie(mov1);
		newUser->addMovie(mov2);
		newUser->addMovie(mov3);
		newUser->addMovie(mov4);
		newUser->addMovie(mov5);
		if(mov5 != ""){
			this->users->add(newUser);
		}
		getline(myFile, fName);
		mov5 = "";
		
	}
	myFile.close();
	} catch(exception& e) {cout<<"something went wrong"<<endl;}
}

MovieChart::~MovieChart(){	
	int index = 0;
	ofstream myFile;
	try{
	myFile.open("users.txt");
	
	User* retVal;	
	if(this->users->getHead() != NULL){
		Node<User*>* temp = this->users->getHead();
	
		while(temp->next != NULL){
			retVal = temp->data;	
		myFile << retVal->getUsername()<<"\n";
		myFile << retVal->firstName<<"\n";
		myFile << retVal->lastName<<"\n";
		myFile << retVal->myAge<<"\n";
		myFile << retVal->getPassword()<<"\n";
		myFile << retVal->getFavMovie(1)<<"\n";
		myFile << retVal->getFavMovie(2)<<"\n";
		myFile << retVal->getFavMovie(3)<<"\n";
		myFile << retVal->getFavMovie(4)<<"\n";
		myFile << retVal->getFavMovie(5)<<"\n";
		myFile << "\n";
			temp = temp->next;
		}
			retVal = temp->data;	
		myFile << retVal->getUsername()<<"\n";
		myFile << retVal->firstName<<"\n";
		myFile << retVal->lastName<<"\n";
		myFile << retVal->myAge<<"\n";
		myFile << retVal->getPassword()<<"\n";
		myFile << retVal->getFavMovie(1)<<"\n";
		myFile << retVal->getFavMovie(2)<<"\n";
		myFile << retVal->getFavMovie(3)<<"\n";
		myFile << retVal->getFavMovie(4)<<"\n";
		myFile << retVal->getFavMovie(5)<<"\n";
		myFile << "\n";
			temp = temp->next;	
		
	}	
	myFile.close();	
	}catch(exception& e){cout<<"somethign went wrong"<<endl;}	
delete[] users;
cout<<"users deleted:"<<endl;
//delete[] num_users;
//delete[] current_user;
}

bool MovieChart::login(){
	string user,pass;
	cout<<"Please enter your username:"<<endl;
	cin>>user;
	cout <<"Please enter you password:"<<endl;
	cin>>pass;
	int i = 1;
	while (i<=this->getNum()){
		this->users->iterator = i;
		string tempUser = this->users->get()->getUsername();
		string tempPass = this->users->get()->getPassword();
		if(user==tempUser && pass==tempPass){
			this->setCurrentUser(users->get());
 			return true;
		}
		i++;
	}return false;
}

int MovieChart::getNum(){
	return this->num_users;
}

void MovieChart::listEm(){
	int index = 2;
	User* current = this->getCurrentUser();
	User* retVal;
	if (index == 1 && this->users->getHead() != NULL) {
		retVal = this->users->getHead()->data;
		this->setCurrentUser(retVal);
		this->view();
		cout<<""<<endl;
		index++;
	}	
	if(this->users->getHead() != NULL && index!=1){
		Node<User*>* temp = this->users->getHead();
		while(temp->next!= NULL){
			retVal = temp->data;
			this->setCurrentUser(retVal);
			this->view();
			cout<<""<<endl;	
			temp = temp->next;
		}

		retVal = temp->data;
		this->setCurrentUser(retVal);
		this->view();
		cout<<""<<endl;	
	}
	this->setCurrentUser(current);	
		
}

void MovieChart::view(){

cout<<"First name:"<<this->current_user->firstName<<endl;;
cout <<"Last name:"<<this->current_user->lastName<<endl;
cout<<"Age:"<<this->current_user->myAge<<endl;
cout<<"Username:"<<this->current_user->getUsername()<<endl;
cout<<"Favorite Movies"<<endl;
cout<<""<<endl;
	for(int i = 1;i<=5;i++){
	cout<< this->current_user->getFavMovie(i)<<endl;
	}
}



bool MovieChart::quit(){
return true;
}


void MovieChart::favorites(){
string blah;
	cout<<"Please input your new Favorite 5 Movies"<<endl;
	cin.ignore();
	for(int i =1;i<=5;i++){
		getline(cin,blah);
		this->current_user->movieList()->add(blah);
		
	}
}


void MovieChart::update(){
string blah,pass;
//int age;
//if(this->current_user == NULL){
//cout<<"Please login before continuing."<<endl;
//}else {
cout<<"Please enter which attribute to update (Password, Favorites):"<<endl;
cin>>blah;
cout<<"Please enter the new value: ";
	if(blah == "Password"){
		cin>>pass;
		this->current_user->setPassword(pass);
	}else if (blah == "Favorites"){
		this->favorites();
	}else{
		cout<<"INVALID COMMAND"<<endl;
		cout<<""<<endl;
	}
//}
}

bool MovieChart::logout(){
	this->current_user == NULL;
	return false;
}

void MovieChart::create(){
string fname, lname, pass, user;
int age;
cout<<"Please enter first name:"<<endl;
cin>>fname;

cout << "Please enter last name:"<<endl;
cin>>lname;

cout<<"Please enter age:"<<endl;
cin>>age; 

cout<<"Please enter your username:"<<endl;
cin>>user;

cout<<"Please enter your password:"<<endl;
cin>>pass;

User* newUser = new User(fname, lname, age, user, pass);
this->num_users += 1;

this->users->add(newUser);


this->setCurrentUser(newUser);

}

void MovieChart::setCurrentUser(User* user){
	this->current_user = user;
}

User* MovieChart::getCurrentUser(){
	return this->current_user;
}


LinkList<User*>* MovieChart::getUsers(){	
	return this->users;
}




