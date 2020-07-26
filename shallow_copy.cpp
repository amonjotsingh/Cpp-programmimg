
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class shallow_copy{
public:
	int *data;
	void store(int d){
		*data=d;
	}
	int getdata(){return *data;}
	shallow_copy(const shallow_copy &source);
	~shallow_copy();
	shallow_copy(int d);
};
void display(shallow_copy p){
	cout<<"data is "<<p.getdata()<<endl;
}
shallow_copy::shallow_copy(const shallow_copy &source)
:data(source.data){
	cout<<"made a shallow_copy of "<<data<<endl;
}
shallow_copy::~shallow_copy()
{
	delete data;
	cout<<"destructor is called"<<endl;
}
shallow_copy::shallow_copy(int d){
	data=new int;
	*data=d;
}
int main()
{
	shallow_copy no1{100};
	display(no1);

	return 0;
}
