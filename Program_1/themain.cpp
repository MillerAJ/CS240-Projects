#include "MovieChart.h"
#include "User.h"
#include "LinkList.h"
#include <iostream>
using namespace std;

int main(){
std::string blah;
bool loggedOn = false;
bool done=false;
MovieChart major;
while(done==false){
std::cout<<std::endl;
std::cout<<"Please enter a command (Create, Update, View, Login, Logout, or Quit):"<<std::endl;
std::cin>>blah;
	if(blah == "Create"){
		major.create();
	}else if (blah == "Update"){
		if(loggedOn == true){
			major.update();
		}else{std::cout<<"Please login before conitnuing."<<std::endl;}
	}else if (blah == "View"){
		if(loggedOn == true){
			major.view();
		}else{std::cout<<"Please login before conitnuing."<<std::endl;}
	}//else if (blah == "Favorites"){
		//major.favorites();
//	}
	else if (blah == "Quit"){
		done = major.quit();
	}else if (blah == "Login"){
		loggedOn = major.login();
	}else if (blah == "Logout"){
		loggedOn = major.logout();
	}else{
		std::cout<<"INVALID COMMAND"<<std::endl;
	}
}

}


