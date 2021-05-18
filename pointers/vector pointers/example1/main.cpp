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
	vector<string> names{"alpha","charlie","beta"};
	vector<string> *name(&names);
	cout<<"printing single names"<<endl;
	cout<<"name at 0 is "<<(*name).at(0)<<endl;
	cout<<"name at 1 is "<<(*name).at(1)<<endl;
	cout<<"name at 2 is "<<(*name).at(2)<<endl;

	cout<<"names printing using for loop"<<endl;
	int j = 3;
	for(size_t i=0 ; i<j; i++){
		cout<<"name at "<<i<<" is "<< (*name).at(i)<<endl;
	}
	return 0;
}
