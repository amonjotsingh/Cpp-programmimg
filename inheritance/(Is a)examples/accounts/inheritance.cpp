// Name        : inherit.cpp
// Author      : jot
// Version     :
// Copyright   : Your copyright notice

#include <iostream>
#include"account.h"
#include"savingacc.h"
using namespace std;

int main() {
savingacc acc{};
acc.name="Amonjot";
acc.deposit(500);
acc.withdraw(200);
acc.interestamount(5000);
	return 0;
}
