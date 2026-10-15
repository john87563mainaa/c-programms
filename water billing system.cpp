//JOHN MWENDIA MAINA
//CT101/G/21576/24
//Water Billing System

#include<iostream>
#include<string>
using namespace std;

string customer_name;
double units_consumed,bill,rate_per_unit=120,discount;

void getCustomerDetails(){
	cout<<"Enter Customer Name:"<<endl;
	cin>>customer_name;
	cout<<"Enter Number Of Units Consumed:"<<endl;
	cin>>units_consumed;
}
void calculateBill(){
	 bill=units_consumed * rate_per_unit;
	 cout<<"Total Bill:"<<bill<<endl;
	 cout<<"Rate Per Unit:"<<rate_per_unit<<endl;
}
void applyDiscount(){
	if(units_consumed >100){
		 bill=bill*90/100;
	}
	else{
		discount=0;
	}
}
void displayBill(){
	cout<<"Customer Name:"<<customer_name<<endl;
	cout<<"Units Consumed:"<<units_consumed<<endl;
	cout<<"Total Bill Before Discount:"<<bill<<endl;
	cout<<"Discount:"<<discount<<endl;
	cout<<"Final Amount Payable:"<<bill<<endl;
}
int main(){
	getCustomerDetails();
	calculateBill();
	applyDiscount();
	displayBill();
}