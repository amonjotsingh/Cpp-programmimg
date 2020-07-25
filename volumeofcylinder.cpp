//practice of calling functions 
//in this case measuring volume
#include <iostream>
#include <cmath>
using namespace std;

const double pi{3.14};

double volume(double radius,double height)
{
	return pi*radius*radius*height;
}

void c_volume()
{
	double radius;
	double height;
	cout<<"enter a radius and height"<<endl;
	cin>>radius>>height;
	cout<<"volume of cylinder with radius "<<radius<<" is "<<volume(radius,height)<<endl;
}
int main()
{
	c_volume();
	return 0;
}
