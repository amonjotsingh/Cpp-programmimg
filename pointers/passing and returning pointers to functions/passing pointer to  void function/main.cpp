/*
 * pointerfun.cpp
 *
 *  Created on: Aug. 15, 2021
 *      Author: Amonjot
 */

#include <iostream>
using namespace std;

void DoubleValue(int *poi){
	*poi *= 2;
}

int main(){
	int value, *point{nullptr};
	point = new int;
	cout <<"enter the value you want to double"<<endl;
	cin >> value;
	*point = value;
	DoubleValue(point);
	cout <<"doubled value "<<*point<<endl;

	return 0;

}


