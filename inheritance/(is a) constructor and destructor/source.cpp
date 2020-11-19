/*
 * source.cpp
 *
 *  Created on: Oct 12, 2020
 *      Author: amonjot
 */

#include"account.h"
#include<iostream>
#include"savingacc.h"

account::account()
{
	name="blank";
	balance=0;
	std::cout<<"no args constructor is called"<<std::endl;

}
account::account(std::string nam,double amount)
{
	name=nam;balance=amount;
	std::cout<<"name and balance cons is called "<<std::endl;
}
account::~account(){
	std::cout<<"destructor for account class is called "<<std::endl;
}

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
void savingacc::interestamount(int months){
	std::cin>>months;
	double interestam;
	interestam= (balance*interest*months/100);
	std::cout<<"interest amount after "<<months<<" months would be "<< interestam<<std::endl;
}
