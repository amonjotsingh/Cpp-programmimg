#include <algorithm>     //header files
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//student detail struct
struct student_data
{
	string name;
	int grade;
};
// reads name of student
istream& read(istream &is, student_data &rec)
{
	is >> rec.name;
	return is;
}
//quiz function
vector<student_data> quiz(student_data i, vector<student_data>  j)
		{

	/*enter name of student*/
	student_data t;
	cout<<"enter name "<<endl;
	string nam;
	cin>>nam;
	i.name=nam;

	/*ques1 of quiz*/
	cout<<"Ques1"<<endl<<"what is 10/4 equal to?"<<endl;
	int score=3;
	float ans1;
	cin>>ans1;
	try{
		if(ans1 != 2.5)
		{
			// if answer wrong decrease scores
			score --;
			// if answer is wrong through logic error
			throw logic_error("wrong answer");
		}
	}
	//catch and display error message
	catch(logic_error string_caught) {
		cout << string_caught.what()  << endl;
	}

	cout<<"Ques2"<<endl<<"what is the first name";
	cout<< "of prime minister of Canada(all lowercase) ?"<<endl;
	string ans2;
	cin>>ans2;
	try{
		if(ans2 != "justin"){
			// if ans wrong decrease scores
			score --;
			//catch and display error message
			throw logic_error("wrong answer");
		}
	}
	//display error message
	catch(logic_error string_caught) {
		cout << string_caught.what()  << endl;
	}

	//ques 3
	cout<<"Ques3"<<endl<<"How many days are there";
	cout<< "in month of february in a leap year ?"<<endl;
	int ans3;
	cin>>ans3;
	try{
		if(ans3!=29)
		{
			//if answer is wrong score decreases
			score --;
			//catch and display error message
			throw logic_error("wrong answer");
		}
	}
	//display error message
	catch(logic_error string_caught) {
		cout << string_caught.what()  << endl;
	}

	// entering score to student data
	i.grade=score;
	// Adding the struct to vector
	j.push_back(i);
	return j;
		}
//function to sort the vector of student data
bool com(student_data a, student_data b)
{
	// If total marks are not same then
	// returns true for higher total
	if (a.grade != b.grade )
		return a.grade > b.grade;

	//if marks are same return alphabetically
	if(a.name != b.name)
		return a.name >b.name;
}

// display function to display the vector of students
void display(vector<student_data> i)
{
	size_t size = i.size();
	int a=1;
	//looping through vector of struct
	// and displaying sorted data
	for(size_t k = 0; k < size; k++){
		cout<<"student on position no "<<a<<" is "<<endl;
		cout<<"name is "<<i[k].name<<endl<<"score is";
		cout<<i[k].grade<<endl<<endl<<endl;
		a++;
	}
}

int main()
{

	cout<<"Enter how many students are going to take ther quiz"<<endl;
	//enter number of students
	//that are going to take the quiz
	int student;
	cin>>student;
	vector<student_data> students;

	//if no of students are
	//more than one
	if(student>1)
	{
		//looping to get students to answer quiz
		for(size_t k=1;k <= student;k++)
		{
			cout<<"quiz for student no "<<k<<endl;
			student_data guy;
			students = quiz(guy,students);
		}
		//calling sort command
		sort(students.begin(),students.end(),com);

		// display line
		cout<<"the results of the quiz are "<<endl;

		//calling display function
		display(students);

	}
	if(student==0)
		cout<< " no student is present  the quiz"<<endl;


	//if there is only one student
	else{
		student_data guy;
		students = quiz(guy,students);
		display(students);
	}
	return 0;
}
