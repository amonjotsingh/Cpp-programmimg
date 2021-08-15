#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){

	int *ptr{nullptr};
	cout << ptr <<endl;
	cout << "how much int storage is required ?"<< endl;
	int storage(0);
	cin >> storage;
	ptr = new int[storage]; // allocating storage
	cout << ptr <<endl; // printing first address of allocated memory

	delete [] ptr;  // freeing allocated memory


	return 0;
}
