#include "MovieChart.h"
#include "User.h"
#include <iostream>
using namespace std;

int main(){
string blah;
bool loggedOn = false;
bool done=false;
MovieChart major;
while(done==false){
cout<<endl;
cout<<"Please enter a command (Create, Update, View, Login, Logout, or Quit):"<<endl;
cin>>blah;
	if(blah == "Create"){
		major.create();
	}else if (blah == "Update"){
		if(loggedOn == true){
			major.update();
		}else{cout<<"Please login before conitnuing."<<endl;}
	}else if (blah == "View"){
		if(loggedOn == true){
			major.view();
		}else{cout<<"Please login before conitnuing."<<endl;}
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
		cout<<"INVALID COMMAND"<<endl;
	}
}

}


