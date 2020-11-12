// Name        : inherit.cpp
// Author      : jot
// Version     :
// Copyright   : Your copyright notice

#include <iostream>
#include"account.h"
#include"savingacc.h"
using namespace std;

int main() {
	savingacc *ptr{nullptr};
	ptr = new savingacc();
	ptr->deposit(500);
	ptr->withdraw(200);
	ptr->interestamount(5000);
	return 0;
}
