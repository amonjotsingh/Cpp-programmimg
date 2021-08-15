//============================================================================
// Name        : testrun.cpp
// Author      : amonjot
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main() {
	int value=10,size=0;
	int *array{nullptr};

	cout<<"Enter the size of array"<<endl;
	cin>>size;
	array = new int[size]; //assigning desired memory on the heap

	for(int i=0 ; i<size ; i++){
		*(array+i)=value;
		value++;
	}
	for(int i=0 ; i<size ; i++){
		cout << "value stored inside "<<i<<" is "<<*(array+i)<<endl;
		} //loop to print the assigned values
	delete [] array; // freeing storage
	return 0 ;

}
