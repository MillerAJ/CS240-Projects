#include "User.h"
#include "LinkList.h"
#include <iostream>
using namespace std;

User::User(){
	movies = new LinkList<string>;
	
}

User::User(string fname, string lname, int age, string username, string password){
	this->firstName = fname;
	this->lastName = lname;
	this->myAge = age;
	this->Username = username;
	this->Password = password;
	movies = new LinkList<string>;
}

/*
User::User(const User &blah){
Username = blah.getUsername();
Password = blah.getPassword();
firstName = blah.firstName();
lastName = blah.lastName();
movies = new LinkList<string>(blah.movieList());
	iterator = 0;
}
*/

User::~User(){
delete[] movies;
cout<<"movies deleted"<<endl;
}
/*
User* User::getNext(){
	return this->next;
}

void User::setNext(User* blah){
	this->next = blah;
}
*/
LinkList<string>* User::movieList(){
	return this->movies;
}

string User::getFavMovie(int num){
	movies->iterator = num;
	return movies->get();
}

bool User::authenticate(string password){
	if (password == this->getPassword()){
		return true;
	} else {
		return false;
	}
}

string User::getFirstName(){
	return this->firstName;
}

string User::getLastName(){
	return this->lastName;
}


int User::getAge(){
	return this->myAge;
}

string User::getUsername(){
	return this->Username;
}

string User::getPassword(){
	return this->Password;
}


void User::setFavMovie(string up, string title){
	this->movies->update(up,title);	
}

void User::setFirstName(string name){
	this->firstName = name;
}

void User::setLastName(string name){
	this->lastName = name;
}

void User::setAge(int age){
	this->myAge =age;
}

void User::setPassword(string pass){
	this->Password = pass;
}

void User::setUsername(string name){
	this->Username = name;
}

void User::addMovie(string blah){
	this->movies->add(blah);
	}




