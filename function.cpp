#include<iostream>
using namespace std ;

int sum(int,int);
void g(void); 
int main()
{
	int num1,num2;
	cout<<" enter the value"<<endl;
	cin>>num1;
	cout<<" enter the value"<<endl;
	cin>>num2;
	cout<<" final value "<<sum(num1,num2)<<endl;
	g();
	return 0;
}
int sum(int a,int b)
{
	int c=a+b;
	return c;
}
void g()
{
	cout<<" hello good morning"<<endl;
}
