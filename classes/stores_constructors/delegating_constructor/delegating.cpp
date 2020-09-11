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
		cout<< "\n\n"<<endl;

	}
	stores(string namee):stores{namee,0,0}{
		cout<<"one arg delegated const is called\n"<<endl;
	}

	stores(string namee,int rentt,double due):name{namee},rent{rentt},dueb{due}{
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
