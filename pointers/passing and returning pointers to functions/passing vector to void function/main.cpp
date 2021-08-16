/*
 * pointerfun.cpp
 *
 *  Created on: Aug. 15, 2021
 *      Author: Amonjot
 */

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> num){

	for(size_t i=0; i<=num.size(); i++){

		cout << "value stored at "<<i<<" is " << num.at(i)<<endl;
	}
}

int main(){

	vector<int> numbers{1,2,3,4};

	display(numbers);
	return 0;

}


