//JOHN MWENDIA MAINA
//CT101/G/21576/24
//Calculator System

#include<iostream>
using namespace std;

int main(){
	double num1,num2;
	char operation;
	
	cout<<"Enter First Number:"<<endl;
	cin>>num1;
	
	cout<<"Enter An Operator (+,-,*,/):"<<endl;
	cin>>operation;
	
	cout<<"Enter Second Number:"<<endl;
	cin>>num2;
	
	switch(operation){
		case '+':
		
		cout<<"Result="<<num1 +num2;
		break;
	case '-':
	cout<<"Result="<<num1-num2;
	break;
    
    case '*':
    cout<<"Result="<<num1*num2;
    break;
    
    case '/':
    if(num2!=0){
    cout<<"Result="<<num1/num2;}
    
    else
	{
		cout<<"Error:Cannot Divide By Zero:";
		break;
    
    default:
    	cout<<"Invalid Operator:";
	}
	return 0;
	}
	
	
}