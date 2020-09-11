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
		cout<<"\n\n\n"<<endl;

	}
	stores(string namee){
		name= namee;
		rent=0;
		dueb=0;
		cout<<"one arg constructor was called\n "<<endl;
	}
	stores(string namee, int rentt, double due){
		name=namee;
		dueb=due;
		rent=rentt;
		cout<< "three arg constructor is called\n ";

	}
};
int main()
{
	stores jcy("jcy");
	jcy.display();
	stores kitty("kitty", 550,336);
	kitty.display();
	return 0;
}
