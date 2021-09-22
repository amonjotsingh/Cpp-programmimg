/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string> 

using namespace std;
class student{
  string name;
  int height;
  int weight;
  public:
  student(){
      cout << "no arg constructor is called "<< endl;
      name = "none";
      height = 0;
      weight = 0;
  }
  student(string namee, int hei, int wei){
      cout << "full info constructor is called"<<endl;
      name = namee;
      height = hei;
  }
  ~student(){cout << "destructor is called"<<endl;}
};

int main(){

student amon;
student zeke("zeke",5,60);
return 0 ;
}
