//JOHN MWENDIA MAINA
//CT101/G/21576/24
//College Admission System

#include<iostream>
using namespace std;

int main(){
	string student_name,result;
	float Age,Exam_score;
	
	cout<<"Enter Student Name:"<<endl;
	cin>>student_name;
	
	cout<<"Enter Student Age:"<<endl;
	cin>>Age;
	
	cout<<"Enter Exam Score:"<<endl;
	cin>>Exam_score;
	
	if(Age >=18 && Exam_score>=50){
		result="Admitted";
	}
	else{
		result="Not Admitted:Low Score";
	}
	if (Age<18){
		result="Not Admitted:Underage";
	}
	cout<<"Admission Result:"<<result<<endl;
	cout<<"Student Name:"<<student_name<<endl;
	cout<<"Student Age:"<<Age<<endl;
	cout<<"Exam Score:"<<Exam_score<<endl;
	
	
}