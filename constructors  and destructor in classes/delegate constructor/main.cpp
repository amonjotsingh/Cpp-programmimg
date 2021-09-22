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
  
  student(string name_val):student{name_val,0,0}{
      cout << "name const is called"<<endl;
  }
  student():student{"none",0,0}{
      cout << "no args const is called"<<endl;
  }
  student(string name_val, int height_val, int weight_val):name{"name_val"}, height{height_val}, weight{weight_val}{
  
      cout << "full info const is called " << endl;
  }
  ~student(){cout << "destructor is called"<<endl;}
};

int main(){

student amon;
student zeke("zeke",5,60);
student cal("cal");
return 0 ;
}
