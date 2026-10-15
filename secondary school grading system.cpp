//JOHN MWENDIA MAINAs
//CT101/G/21576/24
//Secondary School Grading System

#include<iostream>
using namespace std;

int main() {
	string student_name,Grade ;
	float Exam_marks;
	
	cout<<"Enter Student Name:"<<endl;
	cin>>student_name;
	
	cout<<"Enter Exam Marks:"<<endl;
	cin>>Exam_marks;
	
	if(Exam_marks >=70){
		Grade="A";
	}
	else if(Exam_marks >=60){
		Grade="B";
	}
	else if(Exam_marks >=50){
		Grade="C";
	}
	else if(Exam_marks >=40){
		Grade="D";
	}
	else{
		Grade="E";
	}
	cout<<"Student Grading Results:"<<endl;
	cout<<"Student Name:"<<student_name<<endl;
	cout<<"Exam Marks:"<<Exam_marks<<endl;
	cout<<"Grade:"<<Grade<<endl;
	
	
}