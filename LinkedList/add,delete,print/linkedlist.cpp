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
	temp = NULL;
	curr = NULL;
}
void List::Addnode(int data){
	nodeptr n = new Node;
	n->data = data;
	n->next = NULL;
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

void List::Deletenode(int delData){

	if(head!=NULL){
		curr = head;
		temp = head;
		while(curr->data != delData && curr!= NULL ){
			temp = curr;
			curr = curr->next;
		}
		if(curr == NULL){
			cout<<"data entered in not available inside the list"<<endl;
		}
		else{
		curr = curr->next;
		temp->next = curr;
	}
	}
}
void List::PrintList(){
	curr = head;
	while (curr != NULL){
		cout << curr->data << endl;
		curr = curr->next;
	}
}
int main() {
	List L;
	for (size_t i = 1 ; i<10 ; i++){
		int j = i*10;
		L.Addnode(j);
	}
	L.Deletenode(20);
	L.PrintList();
	return 0;
}
