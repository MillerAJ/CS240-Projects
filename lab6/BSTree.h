#ifndef BSTREE_H
#define BSTREE_H
#include<cstddef>
#include<vector>


class BSTree{
	private:
		class Node{
			public:
				int value;
				Node* parent;
				Node* right;
				Node* left;

				Node(int val){
					value = val;
					//parent = NULL;
					//right = NULL;
					//left = NULL;
				}/*
				Node(){
					parent = NULL;
					right = NULL;
					left = NULL;
				}*/
				~Node(){
					delete left;
					delete right;
					delete parent;
				}
	

		};
	Node* root;	
	void inOrder(Node* n);
	void preOrder(Node* n);
	bool postOrder(Node* n,const int);


	public:
	void fix();
	std::vector<int> delVals;
	std::vector<int>* daList;
	BSTree();
	bool empty(); //true if tree is empty, false otherwise
	bool insert(int);
	bool find(int);
	~BSTree();
	void sortedArray(std::vector<int> &list);
	bool remove(int num);
	void remove(Node*, int);
	BSTree(const BSTree &blah);
	Node* getRoot(){return root;}
	bool insertNode(Node*, Node*);
	//bool insertNode(Node*, int);
	void clear(Node* n);
};



#endif
