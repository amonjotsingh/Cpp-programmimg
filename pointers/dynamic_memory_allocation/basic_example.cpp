/*
 * proj.cpp
 *
 *  Created on: May 18, 2021
 *      Author: amonjot
 */
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){

	int *ptr{nullptr};
	cout << ptr <<endl;
	ptr = new int; // allocating storage
	cout << ptr <<endl; // printing allocated address

	delete ptr;  // freeing allocated memory


	return 0;
}
