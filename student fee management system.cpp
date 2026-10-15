//JOHN MWENDIA MAINA
//CT101/G/21576/24
//Student Fee Management System

#include<iostream>
using namespace std;

class Student {
	public:
		string student_name;
		string admission_number;
		float fee_balance,fee,payment;
		
		void inputStudent(){
			cout<<"Enter Student Name:"<<endl;
			cin>>student_name;
			
			cout<<"Enter Student Admission Number:"<<endl;
			cin>>admission_number;
			
			cout<<"Enter Student Fee Balance:"<<endl;
			cin>>fee_balance;
		}
		void makePayment(){
			fee_balance=fee - payment;
			cout<<"Enter Amount Paid:"<<endl;
			cin>>payment;
			cout<<"Enter Fee To Be Paid:"<<endl;
			cin>>fee;
			if(fee>40000){
				cout<<"Fee Successfully Cleared:"<<endl;
			}
			else{
				cout<<"Fee Balance Remaining:"<<endl;
			}
		}
		void displayStatus(){
			cout<<"Student Name:"<<student_name<<endl;
			cout<<"Admission Number:"<<admission_number<<endl;
			cout<<"Fee Balance:"<<fee_balance<<endl;
			
		}
};
     int main(){
		 Student student1;
		 
		 student1.inputStudent();
		 student1.makePayment();
		 student1.displayStatus();
		 
		 return 0;
	 }