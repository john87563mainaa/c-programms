//JOHN MWENDIA MAINA
//CT101/G/21576/24
//Company Payroll System

#include<iostream>
using namespace std;

string employee_name;
double basic_salary,overtime_hours,overtime_pay,Net_salary,rate_per_hour=400;

void Employeedetails(){
	cout<<"Enter Employee Name:"<<endl;
	cin>>employee_name;
	
	cout<<"Enter Basic Salary:"<<endl;
	cin>>basic_salary;
	
	cout<<"Enter Overtime Hours:"<<endl;
	cin>>overtime_hours;
	
}

void calculateovertimepay(){
	overtime_pay=overtime_hours *rate_per_hour;
	cout<<"Enter Overtime Pay:"<<endl;
}
void calculateNetsalary(){
	Net_salary=basic_salary +overtime_pay;
	cout<<"Enter Net Salary:"<<endl; 
	
}
void displaypayslip(){
	cout<<"Employee Name:"<<employee_name<<endl;
	cout<<"Basic Salary:"<<basic_salary<<endl;
	cout<<"Overtime Hours:"<<overtime_hours<<endl;
	cout<<"Overtime Pay:"<<overtime_pay<<endl;
	cout<<"Net Salary:"<<Net_salary<<endl;
}
int main(){
	
	calculateovertimepay();
	calculateNetsalary();
	displaypayslip();
	
}