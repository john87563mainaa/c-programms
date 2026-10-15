//JOHN MWENDIA MAINA
//CT101/G/21576/24
// Driving Test Evaluation System
#include<iostream>
using namespace std;

int main() {
	string student_name,test_results;
	float theory_marks,practical_marks,Average_score;
	
	cout<<"Enter Student Name:"<<endl;
	cin>>student_name;
	
	cout<<"Enter Theory Marks:"<<endl;
	cin>>theory_marks;
	
	cout<<"Enter Practical Marks:"<<endl;
	cin>>practical_marks;
	
	Average_score=(theory_marks + practical_marks)/2 ;
	
	if(Average_score >=50){
		test_results="pass";
	}
	else{
		test_results="fail";
	}
	cout<<"Test Results:"<<test_results<<endl;
	cout<<"Student Name:"<<student_name<<endl;
	cout<<"Theory Marks:"<<theory_marks<<endl;
	cout<<"Practical Marks:"<<practical_marks<<endl;
	cout<<"Average Score:"<<Average_score<<endl;
	
	
}
