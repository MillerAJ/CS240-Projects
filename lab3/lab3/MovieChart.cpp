#include "MovieChart.h"
#include "User.h"
#include <iostream>
using namespace std;

MovieChart::MovieChart(){
	num_users = 0;
}


bool MovieChart::login(){
	string user,pass;
	cout<<"Please enter your username:"<<endl;
	cin>>user;
	cout <<"Please enter you password:"<<endl;
	cin>>pass;
	int i = 0;
	while (i<=this->num_users){
		string tempUser = this->users[i].getUsername();
		string tempPass = this->users[i].getPassword();
		if(user == tempUser && pass==tempPass){
			this->setCurrentUser(&(users[i]));
 			return true;
		}
		i++;
	}return false;
}


void MovieChart::view(){

cout<<"First name:"<<this->current_user->getFirstName()<<endl;;
cout <<"Last name:"<<this->current_user->getLastName()<<endl;
cout<<"Age:"<<this->current_user->getAge()<<endl;
cout<<"Username:"<<this->current_user->getUsername()<<endl;
cout<<"Favorite Movies"<<endl;
cout<<""<<endl;
	for(int i = 0;i<5;i++){
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
	for(int i =0;i<5;i++){
		getline(cin,blah);
		this->current_user->setFavMovie(i,blah);
		
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
User newUser(fname, lname, age, user, pass);
this->num_users += 1;
this->users[this->num_users] = newUser;
this->setCurrentUser(&(newUser));
}

void MovieChart::setCurrentUser(User *user){
	this->current_user = user;
}

User* MovieChart::getCurrentUser(){
	return this->current_user;
}

/*
User* MovieChart::getUser(int num){	
	return this->&(users[num]);
}
*/



