#include<iostream>
#include<vector>
#include<string>
using namespace std;
class student{
	string name;
	int age;
	char grade;
};

class account{
	public:
	string name{"account"};
	double balan{0};

	void talk(string what)
	{
		cout<<name<<" says my balance is"<<what<<endl;
	}
	//method
	bool deposit(double);
	bool withdrawl(double);
};
int main()
{
	account no1;
	account no2;
	no1.balan=20.5;
	no1.name="amonjot";
	no1.talk(" twenty dollar");
	return 0;
}
