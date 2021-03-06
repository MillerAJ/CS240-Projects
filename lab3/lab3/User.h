#ifndef USER_H
#define USER_H
#include <iostream>

class User{
	public:
		std::string lastName;
		std::string firstName;
		int myAge;
		//string favMovies[5];
		
		void create(void);		
		void view(void);
	
		void favorites();
		void update();
		bool quit();
		std::string getFavMovie(int);
		
		void setFirstName(std::string);
		void setLastName(std::string);
		void setAge(int);
		void setFavMovie(int,std::string);
		std::string getFirstName();
		std::string getLastName();
		
		int getAge();

		User(std::string, std::string, int, std::string, std::string);
		User();
		//~User();
		bool authenticate(std::string);
		std::string getUsername();
		std::string getPassword();
		void setUsername(std::string);
		void setPassword(std::string);
		std::string* movieList();


	private:
		std::string Username;
		std::string Password;
		std::string *movies;
		
};
#endif
