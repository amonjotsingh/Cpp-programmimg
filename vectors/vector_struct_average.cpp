#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct student_data{
	string name;
	int grade;
};
istream& read(istream &is, student_data &rec)
{
	is >> rec.name;
	return is;
}
vector<student_data> quiz(student_data i, vector<student_data>  j)
{

	student_data t;
	cout<<"enter name "<<endl;
	string nam;
	cin>>nam;
	i.name=nam;

	cout<<"Ques1"<<endl<<"what is 10/4 equal to?"<<endl;
	int score=3;
	float ans1;
	cin>>ans1;

	if(ans1 != 2.5)
	{
		score --;
	}
	cout<<"Ques2"<<endl<<"what is the first name of prime minister of Canada(all lowercase) ?"<<endl;
	string ans2;
	cin>>ans2;
	try{
		if(ans2 != "justin"){
			score --;
			throw logic_error("wrong answer");
		}
	}

	catch(logic_error string_caught) {
		cout << string_caught.what()  << endl;
	}

	cout<<"Ques3"<<endl<<"How many days are there in month of february in a leap year ?"<<endl;
	int ans3;
	cin>>ans3;
	if(ans3!=29)
	{
		score --;
	}
	i.grade=score;
	j.push_back(i);
	return j;
}
bool com(student_data a, student_data b)
{
    // If total marks are not same then
    // returns true for higher total
    if (a.grade != b.grade )
        return a.grade > b.grade;
    if(a.name != b.name)
    	return a.name >b.name
    			;
}


void display(vector<student_data> i){
	size_t size = i.size();
	int a=1;
	for(size_t k = 0; k < size; k++){
		cout<<"student on position no "<<a<<" is "<<endl;
		cout<<"name is "<<i[k].name<<endl<<"score is "<<i[k].grade<<endl<<endl<<endl;
		a++;
	}
}

int main()
{
	cout<<"Enter how many students are going to take ther quiz"<<endl;
	int student;
	cin>>student;
	vector<student_data> students;
	if(student>1)
	{
			for(size_t k=1;k <= student;k++)
			{
				cout<<"quiz for student no "<<k<<endl;
				student_data guy;
				students=quiz(guy,students);
			}
			sort(students.begin(),students.end(),com);
			cout<<"the results of the quiz are "<<endl;

			display(students);

	}
	else{
		student_data guy;
		quiz(guy,students);
		display(students);
		}
return 0;
}


