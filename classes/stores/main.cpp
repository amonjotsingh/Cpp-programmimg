#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class stores{
	
private:
	string name;
	int rent;
	double dueb;
	
public:
	void setname( string namee){
		name=namee;
	}
	void setrent(int rentt){
		rent= rentt;
	}
	void setdueb(double due){
		dueb=due;
	}
	void display(){
		cout<<"name of store is "<<name;
		cout<< "\nmonthly rent of store is "<<rent;
		cout<< " \ndue balance of store is "<<dueb;
``	}
};

int main()
{
	stores jcy;
	jcy.setname("jcy");
	jcy.setrent(550);
	jcy.setdueb(250.2);
	jcy.display();
	return 0;
}
