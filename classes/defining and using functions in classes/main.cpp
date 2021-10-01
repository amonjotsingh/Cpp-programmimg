//============================================================================
// Name        : Classes.cpp
// Author      : Amonjot
// Version     :
// Copyright   : Your copyright notice
// Description : 
//============================================================================

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class stores{
public:
	string name{"BLANK"};
	int rent{0};
	void deposit(double money);
	void talk(void){cout << "rent of the store is "<< rent <<endl;}
};

int main() {
	stores jcy;
	stores qq;
	qq.rent = 500;
	qq.name = "QQ";
	qq.talk();

	stores *opticals = new stores;


	opticals->talk();

	delete opticals;

	return 0;
}
