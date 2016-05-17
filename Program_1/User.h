#ifndef USER_H
#define USER_H
#include <iostream>
#include "LinkList.h"

class User{
	public:
		std::string lastName;
		std::string firstName;
		int myAge;
		//string favMovies[5];
		User* getUser(std::string);	
		void create(void);		
		void view(void);
	
		void favorites();
		void update();
		bool quit();
		std::string getFavMovie(int);
		
		void setFirstName(std::string);
		void setLastName(std::string);
		void setAge(int);
		void setFavMovie(std::string,std::string);
		std::string getFirstName();
		std::string getLastName();

		int getAge();

		User(std::string, std::string, int, std::string, std::string);
		User();
		User(const User&);
		~User();
		bool authenticate(std::string);
		std::string getUsername();
		std::string getPassword();
		void setUsername(std::string);
		void setPassword(std::string);
		LinkList<std::string>* movieList();
		//User* getNext();
		//void setNext(User*);
		void addMovie(std::string);

	private:
		//User* next;
		std::string Username;
		std::string Password;
		LinkList<std::string>* movies;
	//	std::string *movies;
		
};
#endif
