#include<iostream>
using namespace std;

class employee
{
	int id;
	int salary;
public:
	void setdata(void)
	{
		salary=122;
		cout<<" Enter the employee id "<<endl;
		cin>>id;
	}
	void displaydata(void)
	{
		cout<<" This is the id of employee "<<id<<endl;
	}
};

int main()
{
	employee harry[5];
	for(int i=0; i<5; i++)
	{
	
		harry[i].setdata();
		harry[i].displaydata();
	}
	return 0;
	
}
