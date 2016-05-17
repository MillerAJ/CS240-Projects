#include "BSTree.h"
#include <iostream>
#include <vector>
int main(){
BSTree myTree;
std::cout<<"tree made"<<std::endl;
//std::cout<<myTree.getRoot()->left<<std::endl;
bool blah;
std::cout<<"empty:"<<myTree.empty()<<std::endl;

myTree.insert(10);
std::cout<<"insert 10"<<std::endl;
std::cout<<"empty:"<<myTree.empty()<<std::endl;

std::cout<<myTree.getRoot()->value<<std::endl;
std::cout<<myTree.getRoot()->left<<std::endl;
std::cout<<myTree.getRoot()->right<<std::endl;

blah = myTree.insert(7);
std::cout<<"insert 7...."<<blah<<std::endl;

blah = myTree.insert(13);
std::cout<<"insert 13...."<<blah<<std::endl;
blah = myTree.insert(3);
std::cout<<"insert 3...."<<blah<<std::endl;
blah = myTree.insert(8);
std::cout<<"insert 8...."<<blah<<std::endl;
blah = myTree.insert(15);
std::cout<<"insert 15...."<<blah<<std::endl;
blah = myTree.insert(1);
std::cout<<"insert 1...."<<blah<<std::endl;


myTree.find(6);
std::cout<<myTree.find(3)<<std::endl;
std::cout<<myTree.find(485)<<std::endl;


std::cout<<"---------------------------------"<<std::endl;
//myTree.clear(myTree.getRoot());
myTree.remove(1);

std::cout<<"empty:"<<myTree.empty()<<std::endl;
std::vector<int> someList;
myTree.sortedArray(someList);
//myTree.empty();


}
