//JOHN MWENDIA MAINA
//CT101/G/21576/24
//Library Book Management System

#include<iostream>
using namespace std;

class Book {
	private:
		string title;
		string author;
		int copies;
		
		public:
			
		void inputDetails (){
			cout<<"Enter Book Title:"<<endl;
			cin>>title;
			
			cout<<"Enter Author Name:"<<endl;
			cin>>author;

						
			cout<<"Enter Number Of Copies:"<<endl;
			cin>>copies;
		}
		void borrowBook (){
			if (copies >0){
				copies--;
				cout<<"Book Borrowed Successfully:"<<endl;
			}
			else{
				cout<<"Sorry,No Copies Available:"<<endl;
			}
		}
		void displayDetails(){
			cout<<"\n---Book Details---:"<<endl;
			cout<<"Title:"<<title<<endl;
			cout<<"Author:"<<author<<endl;
			cout<<"Available Copies:"<<copies<<endl;
			
		}
};
       int main(){
		   Book book1;
		   book1.inputDetails();
		   book1.borrowBook();
		   book1.displayDetails();
		   
		   return 0;
	   }