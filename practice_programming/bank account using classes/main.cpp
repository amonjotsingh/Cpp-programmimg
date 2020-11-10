//assigning details ,depositing and withdrawl from accounts(class) using objects
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class account{
	public:
	string name{"account"};
	double balan{0};

	void talk(string what)
	{
		cout<<name<<" says my balance is"<<what<<endl;
	}
	//method
	void deposit(double bal){balan+=bal;cout<<"new balance after deopsit is "<<balan<<endl;}
	void withdrawl(double bal){balan-=bal;cout<<"new balance after withdrawl is "<<balan<<endl;}
};
int main()
{
	account no1;
	account no2;
	no1.balan=20.5;
	no1.name="amonjot";
	account *no3= new account;
	(*no3).name="manu";
	(*no3).balan=30;
	no1.deposit(50);
	no1.withdrawl(25.5);
	return 0;
}
