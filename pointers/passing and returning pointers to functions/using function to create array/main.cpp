/*
 * proj.cpp
 *
 *  Created on: May 26, 2021
 *      Author: amonjot
 */

#include<iostream>
#include<string>
#include<vector>
using namespace std;


void display (int *data, int size){
	for (size_t i =0 ; i<size ; i++){
		cout<< *(data+i) << endl;
	}
}

int *create_array(int size, int value){
	int *myarray{nullptr};
	myarray = new int[size];
	for(size_t i=0; i < size;i++){
		*(myarray + i) = value;
	}
	return myarray;
}

int main(){
	int value = 5;
	int size = 4;
	int *ptr{nullptr};
	ptr = create_array(size, value);
	display(ptr,size);
	return 0;
}
