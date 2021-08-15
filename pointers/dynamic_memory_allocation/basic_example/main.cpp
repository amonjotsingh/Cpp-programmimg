#include <iostream>
using namespace std;


int main() {
int *integer{nullptr};
integer = new int;    //allocating memory
cout<<sizeof(integer)<<endl;
cout<<*integer<<endl;
*integer=100;
cout<< *integer <<endl;
delete *integer; //freeing storage
return 0 ;


}
