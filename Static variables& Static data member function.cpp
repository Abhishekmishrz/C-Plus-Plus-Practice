#include<iostream>
using namespace std;

class Employee
{
	int id ;
	static int count;
public:
	void setdata(void)
	{
		cout<<" Enter the id of employee "<<count+1<<endl;
		cin>>id;
		count++;
		
	}
	
	void displaydata(void)
	{
		cout <<"  Employee id is "<<id<<endl;
		cout<<endl;
	}
	
	static void getcount()
	{
		cout<<" This is the value of count "<<count<<endl;
		cout<<endl;		
	}
};

int Employee::count;

int main()
{
	Employee abhi, harry;
	
	abhi.setdata();
	abhi.displaydata();
	Employee::getcount();
	
	harry.setdata();
	harry.displaydata();
	Employee::getcount();
}
