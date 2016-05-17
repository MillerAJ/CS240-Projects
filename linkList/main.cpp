#include "Train.h"
#include "Cart.h"
#include <iostream>

using namespace std;

int
main(){
Train* main = new Train();

main->make(0);
main->make(1);
main->make(2);
main->make(3);
cout<<main->get(2)<<endl;




}




