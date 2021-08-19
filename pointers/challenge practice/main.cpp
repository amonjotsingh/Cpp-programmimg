/*
 * main.cpp
 *
 *  Created on: Aug. 19, 2021
 *      Author: Amonjot Singh Chhina
 */




#include <iostream>

using namespace std;

void print(int *array, int size){
	cout <<"[ ";
	for (size_t i=0; i<size ; i++){

		cout << *(array+i);
		if(i!=(size-1))
			cout <<", ";
	}
	cout <<" ]"<<endl;
}
int *apply_all( int *array1, int array1s, int *array2, int array2s ){
	int *result{nullptr};
	int k=0,size = array1s*array2s;
	result = new int[size];
	for ( size_t i=0; i< array1s; i++){
		for ( size_t j=0 ; j<array2s ; j++){

			*(result + k ) = *(array1 + i)* *(array2 +j);
			k++;
		}
	}

	return result;
}
int main() {
	const size_t array1_size {5};
	const size_t array2_size {3};

	int array1[] {1,2,3,4,5};
	int array2[] {10,20,30};

	cout << "Array 1: " ;
	print(array1,array1_size);

	cout << "Array 2: " ;
	print(array2,array2_size);
	cout << endl;

	int *results = apply_all(array1, array1_size, array2, array2_size);
	constexpr size_t results_size {array1_size * array2_size};

	cout << "Result: " ;
	print(results, results_size);


	return 0;
}
