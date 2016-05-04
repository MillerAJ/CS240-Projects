#include "User.h"
#include "commands.cpp"
#include <iostream>
using namespace std;


int main(){
string blah;
bool done=false;
User user;
while( done==false){
cout<<endl;
cout<<"Please enter a command (Create, Update, View, Favorites, or Quit):"<<endl;
cin>>blah;
	if(blah == "Create"){
		user.create();
	}else if (blah == "Update"){
		user.update();
	}else if (blah == "View"){
		user.view();
	}else if (blah == "Favorites"){
		user.favorites();
	}else if (blah == "Quit"){
		done = user.quit();
	}else{
		cout<<"INVALID COMMAND"<<endl;
	}
}

}






