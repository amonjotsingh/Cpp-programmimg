/*
 * account.h
 *
 *  Created on: Oct 12, 2020
 *      Author: amonjot
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include<string>

class account{
public:
	std::string name;
	double balance;

	void deposit(double amount);
	void withdraw(double amount);
};


#endif /* ACCOUNT_H_ */
