#include <iostream>  
#include <sstream>  
using namespace std;  

bool solution( string s, int character){
 for( int i = 0; i<= s[i]!= '\0'; i++){
      character++;
  }
  cout<<"number of chars in string is "<<character<<endl;
  for (int j = 0 ; j < (character/2 - 1);j++)
    if( s[j] != s[character-j]){
     cout << "result is false"<<endl;
     return false;
     break;
    }   
    else
    cout << "result is true"<<endl;
    return true;
}

int main() {  
  int k;
  int character=0;
  cout<<"Enter an integer value";  
  cin>>k;  
  stringstream ss;  
  ss<<k;  
  string s;  
  ss>>s;  
  cout<<"\n"<<"An integer value is : "<<k<<"\n";  
  cout<<"String representation of an integer value is : "<<s<<endl;
  for( int i = 0; i<= s[i]!= '\0'; i++){
      character++;
  }
  cout<<"number of chars in string is "<<character<<endl;
  for (int j = 0 ; j < (character/2);j++){
    if( s[j] != s[character-j-1]){
     cout << "result is false"<<endl;
     break;
    }   
    if(j <((character/2)-1)||character<=3)
    cout<<"result is true"<<end
