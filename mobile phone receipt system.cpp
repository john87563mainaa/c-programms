// JOHN MWENDIA MAINA
// CT101/G/21576/24
// Mobile phone Receipt System

#include <iostream>
using namespace std;

int main(){
	string customer_name,model;
	int quantity;
	float price,Total_sale;
	
	cout<<"Enter Your Name:\t"<<endl;
	cin>>customer_name;
	
	cout<<"Enter Phone Model:"<<endl;
	cin>>model;
	
	cout<<"Enter Quantity Purchased:"<<endl;
	cin>>quantity;
	
	cout<<"Enter Price Per Phone:"<<endl;
	cin>>price;
	
	Total_sale=quantity *price;
	cout<<"Sales Receipt:"<<endl;
	cout<<"Customer Name:"<<customer_name<<endl;
	cout<<"Phone Model:"<<model<<endl;
	cout<<"Quantity Purchased:"<<quantity<<endl;
	cout<<"Price Per Phone:"<<price<<endl;
	cout<<"Total Sales:"<<Total_sale<<endl;
	
	
	
}