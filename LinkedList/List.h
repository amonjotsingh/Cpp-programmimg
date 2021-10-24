/*
 * List.h
 *
 *  Created on: Oct. 24, 2021
 *      Author: chhin
 */

#ifndef LIST_H_
#define LIST_H_

class List{
public:
	struct Node{
		int data;
		Node* next;
	};
	typedef Node* nodeptr;
	nodeptr head;
	nodeptr next;
	nodeptr curr;
	List();
	void Addnode(int data);
	void PrintList();
};

#endif /* LIST_H_ */
