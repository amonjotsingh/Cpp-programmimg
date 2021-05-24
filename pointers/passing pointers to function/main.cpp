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

void display( vector<string> *data){
	for (auto i: *data){
		cout << i <<" ";
	}
}

int main(){

	vector<string> strin{"alpha","beta","charlie","delta"};
	display(&strin);


	return 0;
}
