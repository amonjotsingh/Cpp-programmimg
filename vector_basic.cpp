/*USING FOR LOOP CHECK IF THE NUMBERS IN VECTOR ARE DIVISBLE BY 3 OR 5*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>v{1,3,5,15,16,17,18,19,20,21,25,26,27,30,51,55,56,58,100,200,300,400,500,600,700};
	for(auto i:v)
	{
		if(i%3==0||i%5==0)
		{
			cout<<i <<endl;
		}
	}
	return 0;
}
