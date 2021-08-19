/*
 * pointerfun.cpp
 *
 *  Created on: Aug. 15, 2021
 *      Author: Amonjot
 */

#include <iostream>
#include <vector>
using namespace std;

int *create(int num, int size){
	int *array{nullptr};
	array = new int[size];
	for(size_t i =0 ; i< size ; i++){
		*(array+i) = num;
	}
	return array;
}

void display( int *array, int num){
	for(size_t i=0 ; i<num ; i++){
		cout << "value stored is "<<*(array + i)<<endl;
	}
}

int main(){
	int value, size,*myarray;
	size = 5, value= 9;

	myarray = create(value, size);

	display(myarray,size);
	return 0;

}


