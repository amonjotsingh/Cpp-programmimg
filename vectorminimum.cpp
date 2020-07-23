#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

/*
 * main code begins
 */
int main()
{
  	/* store integers in a vector from standard input */
	  vector<int> myarr;	// our container
	  int token; 			// our container content variable
	  float average = 0;
	  cout << "Please enter some integers, followed by <CTRL><D>:" << endl;
	  while (cin >> token) // loop exits when user enters <CTRL><D>
	  {
		    average = average + token;
		    myarr.push_back(token);
	  }
	  cout << endl << endl;

  	/* print integers from vector */
	  cout << "Your integers are:" << endl;
	  for (vector<int>::size_type j = 0; j != myarr.size(); ++j)
	  {
		    cout << myarr[j] << endl;
	  }
	  cout << endl;
	  //printing maximum number
	  cout<<"maximum number is : "<<*max_element(myarr.begin(), myarr.end())<<endl;

	  /* exit happily */
  	return 0;
}
