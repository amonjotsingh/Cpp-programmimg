/*
 * savingacc.h
 *
 *  Created on: Oct 12, 2020
 *      Author: amonjot
 */

#ifndef SAVINGACC_H_
#define SAVINGACC_H_
#include"account.h"
#include<string>

class savingacc:public account{
public:
	void  interestamount( double amount);
};

#endif /* SAVINGACC_H_ */
