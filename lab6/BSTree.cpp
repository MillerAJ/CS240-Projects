#include "BSTree.h"
#include<cstddef>
#include<iostream>
#include<vector>
#include<stdio.h>
#include<stdlib.h>

BSTree::BSTree(){
root= NULL;
}

BSTree::~BSTree(){
	delete root;
}

bool BSTree::empty(){
	if(root==NULL){
		return true;
	} else {
		return false;	
	}
}

bool BSTree::find(int val){
	if(root != NULL && root->value == val){
		return true;
	} else if (root!=NULL && root->value != val){
		Node* temp = root;
		while (temp != NULL){
			if(temp->value > val){
				temp = temp->left;
			} else if (temp->value < val){	
				temp =temp->right;	
			} else if (temp->value == val){
				//delete temp;
				return true;
			}
		}
		return false;	
	}
}

BSTree::BSTree(const BSTree &blah){
	root = blah.root;
}


/*
bool BSTree::insertNode(Node* temp,int val){
		while (temp != 0){
			if(temp->value > val){
				temp = temp->left;
			} else if (temp->value < val){	
				temp =temp->right;	
			}
		} temp = new Node(val);
		return true;	
	}
*/



bool BSTree::insertNode(Node* current_node, Node* insert_node){	
	if(insert_node->value > current_node->value){
		if(current_node->right != NULL){
			insertNode(current_node->right, insert_node);
		} else {
			insert_node->parent = current_node;	
			current_node->right = insert_node;
			return true;
		}
	} else if(insert_node->value < current_node->value) {
		if(current_node->left != NULL){
			insertNode(current_node->left, insert_node);
		} else {
			insert_node->parent = current_node;
			current_node->left = insert_node;
			return true;
		}
	} else {
		return false;
	}
}

bool BSTree::insert(int val){
	bool success = false;
	Node* newNode = new Node(val);
		if(root==NULL){
			root= newNode;
			success = true;
		} else {
			success = insertNode(root,newNode);
		//	success = insertNode(root, val);
		}	
	return success;
}

void BSTree::sortedArray(std::vector<int> &list){
	daList = &list;
	inOrder(this->root);
	
	for(int i = 0; i!=daList->size();i++){
		std::cout<<daList->at(i)<<std::endl;
	}
}

void BSTree::fix(){
std::cout<<"in fix"<<std::endl;		
		Node* temp = root;
		while (temp->value != 0){
			//std::cout<<"hur"<<std::endl;
			if(temp->value > 0){
				temp = temp->left;	

			} else if (temp->value < 0){	
				temp =temp->right;	
			} else if (temp->value == 0){
				delete temp;
				break;
			}
		}
}
/*
bool BSTree::remove(int num){
	std::vector<int> someList;
	sortedArray(someList);
	someList.erase(num);
	clear(root);
	for(int i = 0; i!=someList.size();i++){
		std::cout<<someList.at(i)<<std::endl;
	}
	someList.clear();
	
}
*/

bool BSTree::remove(int num){
	if(this->find(num) == true){
	
	if(root != NULL && root->value == num){
		
		postOrder(root,num);
	//	fix();
		for(int i = 0; i!=delVals.size();i++){
			insert(delVals.at(i));
		}
	        delVals.clear();
		
		return true;	
	} else if (root!=NULL && root->value != num){
		Node* temp = root;
		while (temp->value != num){
			//std::cout<<"hur"<<std::endl;
			if(temp->value > num){
				temp = temp->left;
			} else if (temp->value < num){	
				temp =temp->right;	
			} else if (temp->value == num){
				temp = temp;
				
			}
		}
		postOrder(temp,num);
	//	fix();
		for(int i = 0; i!=delVals.size();i++){
			insert(delVals.at(i));
		}
		delVals.clear();
		
		return true;	
		}	
	} else {
		return false;
	}
}

//=======================================================

//==============

void BSTree::clear(Node* n){
	if(n->left!=NULL){
	clear(n->left);
	}if (n->right!=NULL){
	clear(n->right);
	}
	if(n==root){
	root=NULL;
	}else{
	free(n);
	//return;
	//n = NULL;
	//std::cout<<"obj del"<<std::endl;
	}
}

void BSTree::inOrder(Node* n){
	if(n!=NULL){
	inOrder(n->left);
	//std::cout<<n->value<<std::endl;
	//return n->value;
	daList->push_back(n->value);
	inOrder(n->right);	
	}
}
/*
void BSTree::preOrder(Node* n){
	if(n==NULL){
		return;
	}
	Node* newNode = new Node;
	if( n->value == NULL){
		newNode->value = NULL;
	}else{
		newNode->value = n->data;
	}
	//std::cout<<n->value<<std::endl;
	newNode->left = preOrder(n->left);
	newNode->right = preOrder(n->right);
	//return newNode;
}*/

bool BSTree::postOrder(Node* n,const int num){
//CASE1:
//	std::cout<<"in post"<<std::endl;
	//std::cout<<n->value<<std::endl;
	if(n->left == NULL && n->right == NULL&&n->value == num){
		
	std::cout<<"delhi:"<<n->value<<std::endl;
	//	Node* temp = n->parent;
	//	delete n;
	//	postOrder(temp, num);
		n=NULL;
		//free(n);
		
	
		return true;
	}
	if(n->left!=NULL){
	postOrder(n->left,num);
	}if (n->right!=NULL){
	postOrder(n->right,num);
	}
	if(n==root){
	std::cout<<"set root null"<<std::endl;
	root=NULL;
	return true;
	}else{
		if(n->value==num){
			
		std::cout<<"del:"<<n->value<<std::endl;
			free(n);
		}else{

		delVals.push_back(n->value);
	std::cout<<"del&add:"<<n->value<<std::endl;
		n=NULL;
			//free(n);
			return true;
		}
	}
}

















