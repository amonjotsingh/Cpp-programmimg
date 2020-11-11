/*
 * source.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: amonjot
 */

#include"account.h"
#include<iostream>
#include"savingacc.h"

void account::deposit(double amount){
balance =+ amount;
std::cout<<"amount added to "<<name<<"'s account"<<std::endl;
std::cout<<"new balance is "<<balance<<std::endl;
}

void account::withdraw(double amount){
	std::cout<<" withdrawl from "<<name<<"'s account"<<std::endl;
if(balance>=amount)
	balance =- amount;
else
	std::cout<<"error: low balance"<<std::endl;
}
void savingacc::interestamount(double amount){
	int months;
	std::cout<<"how many months do you want to save your money for"<<std::endl;
	std::cin>>months;
	double interest;
	interest= (amount*(0.8)*months/100);
	std::cout<<"interest after "<<months<<" months would be "<< interest<<std::endl;
}
