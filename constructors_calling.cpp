//calling constructors with different arguments
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class account{
	//attributeS
	string name{"account"};
	double balan{0};
	void setbalance(double bal){balan=bal;cout<<"balance is set to "<<balan<<endl;}
	public:
	double getbalance(){return balan;}
	void talk(string what){cout<<name<<" says my balance is"<<what<<endl;}
	//method
	void setname(string namee){
		name=namee;
	}
	account(){
		cout<<"zero argument cons"<<endl;
	}
	account(string name){
		cout<<"name argument cons called"<<endl;
	}
	account(string name , int balan){
		cout<<"name and balance cons called"<<endl;
	}
};

int main()
{
	account no1;
	no1.setname("amonjot");
	account no2("manu");
	no2.setname("manu");
	account no3("akash",3000);
	no3.setname("akash");
	return 0;
}

