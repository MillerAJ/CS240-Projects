#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;
class User{
	public:
		string lastName;
		string firstName;
		int myAge;
		string favMovies[5];
		
		void create(void);		
		void view(void);
		
		void favorites();
		void update();
		bool quit();

		void setFirstName(string);
		void setLastName(string);
		void setAge(int);
		void setFavMovie(int,string);
		string getFirstName();
		string getLastName();
		string getFavMovie(int);
		int getAge();
};
#endif
