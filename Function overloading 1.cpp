#include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
	return (a+b+c);
}
int sum(int a,int b)
{
	return a*b;
}
int main()
{
	cout<<"The add of 3 and 6 is "<<sum(3,6)<<"\n";
	cout<<"The w of 38 and 6 is "<<sum(3,8,6)<<"\n";
	return 0;
}
