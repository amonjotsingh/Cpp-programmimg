#include<iostream>
#include<vector>
#include<string>
using namespace std;

class account{
	//attributeS
public:

	string name{"account"};
	double balan{0};
	void setbalance(double bal){balan=bal;cout<<"balance is set to "<<balan<<endl;}

	double getbalance(){return balan;}
	string getname() {return name;}
	void setname(string namee){
		name=namee;
	}
	account(const account &source);
	account(string namee="none", double balance=0);
};
	account::account(const account &source)
	:name(source.name),balan(source.balan){
		cout<<"made a copy of "<<name<<endl;
	}

	account::account(string namee, double balance)
	:name{namee},balan{balance}{
	}
	void display_data(account p){
		cout<<"name is "<<p.getname()<<endl;
		cout<<"balance is "<<p.getbalance()<<endl;
	}

int main()
{
	account manu{"manu",500};
	display_data(manu);
	account *jaskiran= new account{"jaskiran"};
	delete jaskiran;
	return 0;
}
