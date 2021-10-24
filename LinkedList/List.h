//============================================================================
// Name        : linkedlist.cpp
// Author      : Amonjot
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "List.h"
using namespace std;

List::List(){
	head = NULL;
	next = NULL;
	curr = NULL;
}
void List::Addnode(int data){
	nodeptr n;
	n->next =  NULL;
	n->data = data;
	if(head != NULL){
		curr = head;
		while(curr->next != NULL){
			curr = curr->next;
		}
		curr->next = n;
	}else{
		head = n ;
	}
}
void List::PrintList(){
	curr = head;
	while (curr->next != NULL){
		cout << curr->data << endl;
	}
}
int main() {

	return 0;
}
