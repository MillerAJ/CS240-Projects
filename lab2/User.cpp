#include "User.h"
#include <iostream>
using namespace std;



void User::view(){
cout<<"First name:"<<this->getFirstName()<<endl;;
cout <<"Last name:"<<this->getLastName()<<endl;
cout<<"Age:"<<this->getAge()<<endl;
cout<<"Favorite Movies"<<endl;
cout<<""<<endl;
	for(int i = 0;i<5;i++){
	cout<< this->getFavMovie(i)<<endl;
	}
}

bool User::quit(){
return true;
}

void User:: favorites(){
string blah;
	cout<<"Please input your new Favorite 5 Movies"<<endl;
	cin.ignore();
	for(int i =0;i<6;i++){
		if(i!=0){
		getline(cin,blah);
		this->setFavMovie(i-1,blah);
		}
	}
}


void User::update(){
string blah,name;
int age;
cout<<"Please enter which attribute to update (First, Last, Age):"<<endl;
cin>>blah;
cout<<"Please enter the new value: ";
	if(blah == "First"){
		cin>>name;
		this->setFirstName(name);
	}else if (blah == "Last"){
		cin>>name;
		this->setLastName(name);
	}else if (blah == "Age"){
		cin>>age;
		this->setAge(age);
	}else{
		cout<<"INVALID COMMAND"<<endl;
		cout<<""<<endl;
	}
}


void User::create(){
string name;
int age;
cout<<"Please enter first name:"<<endl;
cin>>name;
this->setFirstName(name);
cout << "Please enter last name:"<<endl;
cin>>name;
this->setLastName(name);
cout<<"Please enter age:"<<endl;
cin>>age; 
this->setAge(age);
//fav = favMovies;
}

//========================================================

string User::getFirstName(){
	return firstName;
}

string User::getLastName(){
	return lastName;
}

string User::getFavMovie(int num){
	return favMovies[num];
}

int User::getAge(){
	return myAge;
}

void User::setFavMovie(int i, string title){
	favMovies[i] = title;	
}

void User::setFirstName(string name){
	firstName = name;
}

void User::setLastName(string name){
	lastName = name;
}

void User::setAge(int age){
	myAge =age;
}

